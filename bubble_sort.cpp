#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[10]={5,16,0,79,13,168,4,8,109,43};
    for(int i=0;i<n-1;i++){//for rounds
        for(int j=0;j<n-i-1;j++){//for swap
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}