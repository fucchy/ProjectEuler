#include<stdio.h>
#include<stdlib.h>

int fibonacci(int x);

int main(int argc,char *argv[]){
	int i;
	int sum=0;

	for(i=1;fibonacci(i)<4000000;i++){
		if(fibonacci(i)%2==0){
			sum=sum+fibonacci(i);
		}
	}
	printf("%d\n",sum);	
	return EXIT_SUCCESS;
}

int fibonacci(int x){
	if(x>=3){
		return fibonacci(x-1)+fibonacci(x-2);
	}else if(x==2){
		return 2;
	}else if(x==1){
		return 1;
	}
}
