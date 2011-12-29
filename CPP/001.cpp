#include<iostream>
#include<time.h>

int main(int argc,char* argv[]){
    clock_t start,end;
    start=clock();

    int i=0;
    int sum=0;
    while(i<1000){
        if(i%3==0||i%5==0){
            sum+=i;
        }
        i++;
    }
    std::cout<<sum<<std::endl;

    end=clock();
    std::cout<<"time:"<<(double)(end-start)/CLOCKS_PER_SEC<<"ms"<<std::endl;

    return 0;
}

