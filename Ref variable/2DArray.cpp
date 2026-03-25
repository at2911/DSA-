#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //2D array using Dynamic memory allocation
    int** arr= new int*[n]; //arr is a pointer to pointer to int, it is a 2D array
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    //creation done
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //input done
    //print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //for different rows and colums
    cout<<"Enter the number of rows and columns: "<<endl;
    int row,col;
    cin>>row>>col;
    int**arr2=new int*[row];
    for(int i=0;i<row;i++){
        arr2[i]=new int[col];

    }
    //input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[i][j];
        }
    }
    //print

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    //release the memory
    for(int i=0;i<n;i++){
        delete []arr;

    }
    for(int i=0;i<row;i++){
        delete []arr2[i];
    }

    delete[]arr2;
/*
we learnt
1. how to create a 2D array using Dynamic memory allocation
2. how to input and print a 2D array
3. how to release the memory of a 2D array
*/



}