#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,54,72,310,6,14,16,34,79,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                swap(arr[i],arr[j]);
            }

        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}