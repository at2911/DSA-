#include<iostream>
using namespace std;
char maxOccChar(string s){
    int arr[26]={0};
    for(char c : s){
        int n=0;
        if(c>='a'&& c<='z'){
            n=c-'a';
           

        }
        else{
            n=c-'A';
            
        }
        arr[n]++;
    }
    int maxx=-1;
    int index=-1;
    for(int i=0;i<26;i++){
       if(arr[i]>maxx){
        maxx=arr[i];
        index=i;

       }
    }
    return ('a'+index);
                   
}
int main(){
    string s;
    cout<<"Enter string\n";
    cin>>s;
    cout<<"max no of occuring character was :"<<maxOccChar(s);

}