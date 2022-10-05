#include<iostream>

using namespace std;

int c=69;
int main (){

    //*************BUILD IN DATA TYPES**************
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is:"<<c<<endl;
    // cout<<"The global value of c is: "<<::c<<endl;

    //************* FLOAT,DOUBLES AND LONG DOUBLE LITERALS**************
    // float d = 69.9F;
    // long double e = 69.6L;
    // cout<<"the size of 69.9 is "<<sizeof(69.9)<<endl;
    // cout<<"the size of 69.9f is "<<sizeof(69.9f)<<endl;
    // cout<<"the size of 69.9F is "<<sizeof(69.9F)<<endl;
    // cout<<"the size of 69.9l is "<<sizeof(69.9l)<<endl;
    // cout<<"the size of 69.9L is "<<sizeof(69.9L)<<endl;
    // cout<<"The value of d is:"<<d<<endl<<"The value of e is: "<<e;

    //*************REFERENCE VARIABLES **************
    float x = 455;
    float &y =x;

    cout<<x<<endl;
    cout<<y<<endl;

    //**************TYPE CASTING***************
    int a= 69;
    float b= 69.69;
    cout<<"The value of a is: "<<(float)a<<endl;
    cout<<"The value of a is: "<<float(a)<<endl;

    cout<<"The value of b is: "<<(int)b<<endl ;
    cout<<"The value of b is: "<<int(b)<<endl ;     
    int c = int(b);
    cout<<"The value of c is: "<<c<<endl;

    cout<<"The expression is: "<<a+b<<endl;
    cout<<"The expression is: "<<a+int(b)<<endl;
    cout<<"The expression is: "<<a+(int)b<<endl;

    return 0;
}