#include<iostream>
#include<time.h>

int nth_Prime(int n);

int main(int argc,char* argv[]){
    clock_t start,end;
    start=clock();
    int n=10001;

    std::cout<<nth_Prime(n)<<std::endl;

    end=clock();
    std::cout<<"time:"<<(end-start)/1000<<"ms"<<std::endl;

    return 0;
}

// n番目の素数を返すnth_Prime()関数
int nth_Prime(int n){
    int a=1;
    int b=2;
    while(1){
        int i=2;
        while(i<=b){
            if(i==b){
                if(a==n){
                    return b;
                }
                a++;
            }
            if(b%i==0){
                break;
            }
            i++;
        }
        b++;
    }
}

