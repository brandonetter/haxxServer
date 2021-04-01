class Main {
    public static function main():Void {
        var s = new sys.net.Socket();
        s.bind(new sys.net.Host("localhost"),80);
        s.listen(1);
        trace("Starting server...on 80");
        while( true ) {
            var c : sys.net.Socket = s.accept();
            trace("Client connected...");
            c.write("hello\n");
            c.write("your IP is "+c.peer().host.toString()+"\n");
            c.write("exit");
            c.close();
        }
    }
}