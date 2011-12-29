#include<iostream>
#include<fstream>
#include<cstdlib>
#include<assert.h>
#include<vector>
#include<string>
#include<time.h>

int main(int argc,char* argv[]){
    clock_t start,end;
    start=clock();

    std::ifstream ifs("./Problem008_data.txt");
    std::string str;
    std::vector<int> data_array;
    char ch;
    int i=0;
    int ans=0;
    int tmp=0;

    if(ifs.fail()){
        std::cerr<<"ファイルを開く事が出来ませんでした。"<<std::endl;
		return 1;
    }

    while(ifs.get(ch)){
        data_array.push_back(ch);
        i++;
    }
    ifs.close();

    for(i=0;i<data_array.size()-6;i++){
        tmp=(data_array[i]-48)*(data_array[i+1]-48)*(data_array[i+2]-48)*(data_array[i+3]-48)*(data_array[i+4]-48);
        if(ans<tmp){
            ans=tmp;
        }
    }

    std::cout<<ans<<std::endl;

    end=clock();
    std::cout<<"time:"<<(double)(end-start)/CLOCKS_PER_SEC<<"ms"<<std::endl;
    return 0;
}

