#include<iostream>
using namespace std;
void swap (int* a,int* b){
    int exchange =*a;
    *a = *b ;
    *b =exchange;
}
int partition(int arr[],int low,int high){
int pivot = arr[high];
int i =low-1;
for(int j =low;j<=high-1;j++)
    if(arr[i]<pivot){
        i++;
        swap(&arr[i],&arr[j]);}
return (i+1);
}
void quicksort (int arr[],int low ,int high){
if(low<high){
int pi = partition(arr,low,high);
quicksort(arr,low,pi -1);
quicksort(arr,pi-1,high);
}
}
int main(){
    int size ;
        cout<<"Enter your size "<<endl;
    cin>>size;
    cout<<"Enter your numbers "<<endl;
    int array [size];
    for(int i =0 ; i<size  ;i++){
        int x ;
        cin>>x;
        array[i]=x;}
    quicksort(array,0,size-1);
    for(int i =0 ;i < size ;i++){
        cout<<" ";
    cout<<array[i]<<endl;}

    return 0;
}