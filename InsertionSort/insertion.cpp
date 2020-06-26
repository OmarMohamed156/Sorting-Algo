#include <iostream>

int main()
{
    int size,j,key;
    std::cout<<"Enter your size "<<std::endl;
    std::cin>>size;
    int sort_array [size];
    std::cout<<"Enter the numbers to be sorted "<<std::endl;
    for(int i=0;i<size;i++){
        int x;
        std::cin>>x;
        sort_array[i] = x;}
  for(int i =1 ;i<size ;i++){
      key = sort_array[i];
      j = i-1 ;
      while (j>=0 && sort_array[j]>key) {
          sort_array[j+1]=sort_array[j];
          j=j-1;
      }
      sort_array[j+1]= key;
  }

for(int i =0 ;i < size ;i++){
    std::cout<<" "<<std::endl;
std::cout<<sort_array[i]<<std::endl;}



    return 0;
}