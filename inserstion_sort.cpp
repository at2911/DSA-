#include<iostream>
#include "myheaderfile.h"
using namespace std;
// void traverse(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
// }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int temp=arr[i];//start comaparing this value
        int j=i-1; //comparison start from i-1 index5
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    traverse(arr,n);
}