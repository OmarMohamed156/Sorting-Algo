#include <iostream>
using namespace std;

int main()
{int size ,i ,j;
    cout<<"Enter your size "<<endl;
cin>>size;
cout<<"Enter your numbers "<<endl;
int array [size];
for(i =0 ; i<size  ;i++){
    int x ;
    cin>>x;
    array[i]=x;}
for(i =0 ; i<size-1 ; i++)
    for(j=0;j<size-i-1;j++){
        if (array[j+1]<array[j]){
            int exchange = array[j+1];
            array[j+1]=array[j];
            array[j]= exchange;}
    }
for(int i =0 ;i < size ;i++){
    cout<<" ";
cout<<array[i]<<endl;}


    return 0;
}