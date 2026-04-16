#include<iostream>
using namespace std;
//inline function
inline int getMax(int a,int b){
    return (a>b)?a:b;
}

int main(){
    int a=5,b=10;
    int ans=0;
    ans=getMax(a,b);
    cout<<"Max is: "<<ans<<endl;
    a+=13;
    b+=2;
    ans=getMax(a,b);
    cout<<"Max is: "<<ans<<endl;

    
}