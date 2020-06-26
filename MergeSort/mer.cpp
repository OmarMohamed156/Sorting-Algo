#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter your size "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter your array "<<endl;
    for(int i =0 ; i<size ; i++){
        int x ;
        cin>>x;
        arr[i]=x;
    }
    int m = size/2;
    int n1 = m+1;
    int n2 = size-m ;
    int Q[n1];
    int R[n2];
    for (int i =0 ;i < n1 ;i++)
        Q[i]=arr[i];
    for (int j =0 ; j<n2    ;j++)
        R[j] = arr[m+1+j];
    for(int i =0;i<n1;i++)
        for(int j=0;j<n1-i-1;j++)
            if (Q[j+1]<Q[j]){
                int exchange1 = Q[j+1];
                Q[j+1]=Q[j];
                Q[j]= exchange1;}
    for(int i =0;i<n1;i++)
        for(int j=0;j<n1-i-1;j++)
            if (R[j+1]<R[j]){
                int exchange = R[j+1];
                R[j+1]=R[j];
                R[j]= exchange;}
    int j=0;
    int arr2[size];
    int k =0;
    while (j<n1)
    {
        for (int i= 0; i < n2; i++)
        {
            if(R[j]<Q[i]){
                arr2[k]=R[j];
                k++;
                j++;
            }
            else
            {
                arr2[k]=Q[i];
                k++;
            }
            
        }
        
    }
    
    
    for(int i=0;i<size;i++){
        cout<<" "<<endl;
        cout<<arr2[i]<<" ";}
    return 0;
}