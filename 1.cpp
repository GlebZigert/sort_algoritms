#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <chrono>

using namespace std;

void get_time(void f(std::vector<int> &),std::vector<int> &arr){

  auto begin = std::chrono::steady_clock::now();

  f(arr);  

  auto end = std::chrono::steady_clock::now();
  
  auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
  std::cout << "The time: " << elapsed_ms.count() << " ms\n";    
}

void insertion_sort(std::vector<int> &arr){
for(int i=1;i<arr.size();i++){

    for(int j=i;j>0;j--){

        if(arr[j-1]>arr[j]){
            int lcl=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=lcl;

        }else{
           break;
        }

    }
 
}
}


int main(int argc, char* argv[]){

int size=((argc==2)&&(atoi(argv[1])>0))?atoi(argv[1]):10;

std::srand(std::time(nullptr)); 
std::vector<int> arr(size);

int my = 700;

std::cout<<"size: "<<size<<"\n";

int ind = rand()%arr.size();
for(int i=0;i<arr.size();i++){

//    arr[i]=rand()%10;
    arr[i]=size-i;
}

get_time(insertion_sort,arr);






}
