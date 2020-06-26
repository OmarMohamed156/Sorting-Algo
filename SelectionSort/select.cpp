#include <iostream>
using namespace std;
void swap(int* p1,int* p2){
 int exchange;
 exchange = *p1;
 *p1 = *p2 ;
 *p2 = exchange;
}
int main(){
 int size;
 int R[size];
 cout<<"Enter your array size"<<endl;
 cin>>size;
 cout<<"Enter array elements"<<endl;
 for (int i = 0; i < size; i++)
 {
  int x;
  cin>>x;
  R[i]=x;
 }
 for (int i = 0; i < size; i++)
 {
  for (int j = 0; j < size; j++)
  {
   int min_index=i;
   if (R[j]<R[i])
   {
    min_index=j;
    swap(&R[i],&R[min_index]);
    
   }
  }
 }
 for(int i =0 ;i < size ;i++){
    cout<<" ";
cout<<R[i]<<endl;}
 
}