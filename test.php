<?php
$a =['one','fish','two','fish','blue','fish','red'];
for($i = 1;$i<121;$i++){
	
	$rn="<b style='color:#".color().color().color()."'>";
	print $rn.$a[rand(0,6)]."</b>\n";	
	if($i%12==0)print "<br>";
}

function color(){
	$vib = rand(1,3);
	if($vib<3){
		$vib =0;
	}
	$rn = rand(80*$vib,250);
	$rn = ceil($rn/16);
	if($rn>10){
		$rn = $rn - 10;
		switch ($rn) {
			case 1:
        		$rn = 'AA';
        		break;
    		case 2:
        		$rn = 'BB';
        		break;
    		case 3:
        		$rn = 'CC';
        		break;
    		case 4:
        		$rn = 'DD';
        		break;
			case 5:
        		$rn = 'EE';
        		break;
			case 6:
        		$rn = 'FF';
        		break;
		}
	}else{
		if($rn == 10){
			$rn=99;	
		}else{
			$rn*=10;	
			
		}
		
	}
	return $rn;
}
	

?>