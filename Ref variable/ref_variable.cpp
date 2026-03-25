#include<iostream>
using namespace std;
int main(){
    int i=5;
    //create a ref variable
    int &j=i; //j is a ref variable to i
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    //creation of array using DMA
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int* arr=new int[n]; //arr is a pointer to int, it is an array
    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //print
    for(int i=0;i<n;i++){      
        cout<<arr[i]<<" ";
    }
    
    


}