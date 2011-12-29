#include<iostream>
#include<time.h>

int fibonacci(int x);

int main(int argc,char* argv[]){
    time_t start,end;
    start=clock();

    // 数列の項の値がNを超えない範囲での偶数値の項の和について
    int N=4000000;

    int sum=0;
    for(int i=1;fibonacci(i)<N;i++){
        if(fibonacci(i)%2==0){
            sum+=fibonacci(i);
        }
    }
    std::cout<<sum<<std::endl;

    end=clock();
    std::cout<<"time:"<<(double)(end-start)/CLOCKS_PER_SEC<<"ms"<<std::endl;
    return 0;
}

// フィボナッチ数列のx項目を返すfibonacci()関数
int fibonacci(int x){
    if(3<=x){
        return fibonacci(x-1)+fibonacci(x-2);
    }else if(x==2){
        return 2;
    }else if(x==1){
        return 1;
    }
}

