#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int x;
	int y=1000;
	int sum=0;
	for(x=1;x<y;x++){
		if(x%3==0||x%5==0){
			sum=sum+x;
		}
	}
	printf("%d\n",sum);
	return EXIT_SUCCESS;
}

