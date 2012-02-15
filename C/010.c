#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(unsigned long n);

int main(int argc,char *argv[]){
  unsigned long num=2000000;
  unsigned long x;
  unsigned long long sum=0;
  
  for(x=2;x<=num;x++){
    if(isPrime(x)){
    sum+=x;
    }
  }

  printf("Answer = %llu\n",sum);
  return EXIT_SUCCESS;
}

bool isPrime(unsigned long n){
  unsigned long i;
  unsigned long k;

  if(n<=3){
    if(n==1){
      return false;
    }
    return true;
  }
  if((n%2)==0){
    return false;
  }
  k=sqrt(n);
  for(i=3;i<=k;i+=2){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
