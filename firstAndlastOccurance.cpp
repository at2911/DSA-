#include<iostream>
using namespace std;
int firstOcc(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;


        }
        else if(arr[mid]<key){
            s=mid+1;

        }
        else {
            e= mid-1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+ (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+ (e-s)/2;
    }
    return ans;
}
int main(){
    int even[6]={1,2,3,3,5,7};
    int odd[7]={1,1,3,4,5,6,8};
    cout<<"1st occ is at index: "<< firstOcc(odd,7,8)<<endl;
    cout<<"last occ is at index: "<<lastOcc(odd,7,8);


    
}