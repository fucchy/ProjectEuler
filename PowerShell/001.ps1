[int]$x = "1"
[int]$sum = "0"
for($x; $x -lt 1000; $x++){
	if($x % 3 -eq 0 -or $x % 5 -eq 0){
		$sum = $sum + $x
	}
}
Write-Host $sum
