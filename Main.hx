import haxe.Serializer;
class Main {

    //Page Routing list updated every 10 seconds from it's own Thread in main()
    //Updated with updateRoute()
    //      updateRoute{
    //          RouteList = route.txt
    //      }
    public static var RouteList:List<PageRoute> = new List<PageRoute>();
    


    //////////////
    //MAIN
    //////////////
    public static function main():Void {
        var s = new sys.net.Socket();
      
        s.bind(new sys.net.Host("localhost"),80);
        s.listen(1);


        sys.thread.Thread.create(() -> {
            while(true){
                var old = RouteList;
                RouteList = updateRoute();
              
                
                if(old.toString()!=RouteList.toString())
                Sys.println("Updated RouteList from route.txt");
               
                
                Sys.sleep(5.5);
            }
            
        });
        while( true ) {
            
            var c : sys.net.Socket = s.accept();
            c.write("HTTP/1.1 200 OK\n");
            sys.thread.Thread.create(() -> {
       
            var req = c.input.readLine();
            req = req.substr(0,100);
            var stringAr = req.toString().split("\n");
            var fileName = fileResolve(stringAr[0]);
            var p = page(fileName);
           
            
         
            c.write("Server: haxeServ\n");
            c.write("Content-Length: "+p.length+"\n");
            c.write("Content-Type: text/html\n");
            c.write("Connection: Closed\n\n\n");
      
            c.write(p.data);
            //  This Sys.sleep just makes sure we don't close connection
            //  before we write the data
            //  to the socket peer, otherwise we get an unstable server
            Sys.sleep(0.3+p.timeAdd);
            c.close();
        });
      
    }
    
        
    
    }
    //  page()
    //Retrieve contents of file [pageName]
    //Construct Page{
    //              data:   pageName Contents
    //              length: pageName Contents Length
    //          }
    //  this function is called by main()
    //  [pageName] is retrieved from pageResolve()
    //  this function creates a Page and sends that to socket
    //  when user connects
    public static function page(pageName:String):Page{
        var data = "If you see this call the cops";
        var pdata = "o";
        var p = new Page();
        
        if(pageName.split(".")[1]=="php")
            {
                //var out = Sys.stdout();
                sys.thread.Thread.create(() -> {
                Sys.command("php -f "+pageName+"> ./tmp/html_"+pageName+" | grep 0");
                
                });
                pdata = sys.io.File.getContent("./tmp/html_"+pageName);
        
                //trace(out.readLine());
            }

        var data:String = sys.io.File.getContent(pageName);
        var length = 0;
        if(pageName.split(".")[1]=="php"){
            data = pdata;
            length+=1;
            p.timeAdd = 0.1;
        }else{
        data = StringTools.replace(data, "{{time}}", DateTools.format(Date.now(), "%Y-%m-%d_%H:%M:%S"));
        }
        length += data.length;
     
        

        p.data = data;
        p.length = length;
        if(pageName.split(".")[1]=="md")
        p.data = Markdown.markdownToHtml(p.data);
      
        return p;
    }



    //  fileResolve()
    //Turns [req]:String into the appropriate [filename]
    //      
    //  this function searches the RouteList for      
    //  a string that matched the [req]
    //  and returns the [filename]    
    //  this function is called in main() upon request
    //  from socket peer
    public static function fileResolve(req:String):String{
        
        //Default 404
        var fileName = "notfound.txt";
        var RouteIt = RouteList.iterator();
        for(i in 0...RouteList.length){
            var pr:PageRoute = RouteIt.next();
            var pr_r = pr.request;
            var pr_o = pr.output;
            var regexp = new EReg("GET /"+pr_r, "i");
            if(regexp.match(req)){
               
                fileName = pr_o;
            }
        }
        return fileName;
    }

    //  updateRoute()
    //  Reads route.txt and turns that into a routing table
    //  that is then stored in RouteList
    /*      
                |notepad.exe route.txt    [x]|
                |                            |
                |index=>index.html;          |
                |page/request=>sendFile.txt  |
                |login/index.html=>login.html|
                |____________________________|

    */
    public static function updateRoute():List<PageRoute>{
        var data:String = sys.io.File.getContent('route.txt');
        var r = ~/\n/g;
        data = r.replace(data, "");
        var dataList:Array<String> = data.split(";");
        var RouteList:List<PageRoute> = new List<PageRoute>();
        for(i in 0...dataList.length-1){
            var route:Array<String> = dataList[i].split("=>");
            var pageRoute:PageRoute = new PageRoute();
            pageRoute.request = route[0];
            pageRoute.output = route[1];
            RouteList.push(pageRoute);
            
        }
        return RouteList;
        
    }
}


class PageRoute{
    public function new(){

    }
    public var request:String;
    public var output:String;
    
}
class Page {
    public function new(){

    }
    public var length:Int;
    public var data:String;
    public var timeAdd:Float = 0;
}