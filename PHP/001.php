<?php

$x=1;
$y=1000;
$sum=0;
for($x;$x<$y;$x++){
	if($x%3==0|$x%5==0){
		$sum=$sum+$x;
	}
}
echo $sum;

?>

