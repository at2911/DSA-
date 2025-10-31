#include<iostream>
using namespace std;
long long int sqrtInt(int n){
    
            int s=0,e=n;
            long long int mid= s +(e-s)/2;
            int ans=-1;
            while(s<=e){
                long long int sq=mid*mid;
                if(sq==n){
                    return mid;
                }
                else if(sq<n){
                    ans=mid;
                    s=mid+1;

                }
                else{
                    e=mid-1;
                }
                mid= s+ (e-s)/2;
            }
            return ans;
        


}
double moreprecision(int n,int precision , int temp ){
    double factor =1;
    double ans=temp;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;

        }

    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int m;
    cout<<"Enter precision";
    cin>>m;
    int temp=sqrtInt(n);
    cout<<" Ans is "<<moreprecision(n,m,temp);

}