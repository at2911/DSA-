#include<iostream>
using namespace std;
void update(int **p){
    // p=p+1;
    //will it change-> No
    // *p=*p+1;
    // // 2nd method->>Yes it will change
     **p=**p+1;
    //  3rd method->Yes it will change

}
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
    
    cout<<"Printing p ->"<<p<<endl;
    cout<<"Printing address of p->"<< &p<<endl;
    cout<<"Printing value at p2->"<<*p2<<endl;
    cout<<"Printing i->"<<i<<endl;
    cout<<"Value at p->"<<*p<<endl;
    cout<<"value at  *p2->"<<**p2<<endl;

    /*************** */
    /*content of p which is adress of i*/
    cout<<endl<<"Before Update"<<endl;
    cout<<"Printing p ->"<<p<<endl;
    cout<<"Printing address of p->"<< &p<<endl;
    cout<<"Printing value at p2->"<<*p2<<endl;
    cout<<"Printing i->"<<i<<endl;
    cout<<"Value at p->"<<*p<<endl;
    cout<<"value at  *p2->"<<**p2<<endl;
    /*Content of p2*/
    

    // Double pointer in function
    update(p2);
    cout<<endl<<"After update"<<endl;
  cout<<"Printing p ->"<<p<<endl;
    cout<<"Printing address of p->"<< &p<<endl;
    cout<<"Printing value at p2->"<<*p2<<endl;
    cout<<"Printing i->"<<i<<endl;
    cout<<"Value at p->"<<*p<<endl;
    cout<<"value at  *p2->"<<**p2<<endl;
}