//Ther are two types of header files:
// 1. System header files : It comes with the compiler 
#include<iostream>
// 2. User defined header files :It is written by the programmer
//#includes "THIS.h" // --> This will produce an errror if this.h is no present in the current directory

using namespace std;

int main(){
    int a =4,b=5;

    cout <<"Operations in C++"<<endl;
    cout<<"Following are the types of operatiors in C++"<<endl;
    cout<<endl;
    //Arithemetic operators
    cout<<"ARITHEMETIC OPERATORS"<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a++<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    //Assignment Operatoprs ---> used to assign values to variables
    // int a=3;b=9;
    // char d='d';

    //Comparision operators
    cout<<"COMPARISION OPERATORS"<<endl;
    
    cout<<"The value of a == b is"<<(a==b)<<endl;
    cout<<"The value of a != b is"<<(a!=b)<<endl;
    cout<<"The value of a >= b is"<<(a>=b)<<endl;
    cout<<"The value of a <= b is"<<(a<=b)<<endl;
    cout<<"The value of a > b is"<<(a>b)<<endl;
    cout<<"The value of a < b is"<<(a<b)<<endl;
    cout<<endl;
    //Logical operators
    cout<<"LOGICAL OPERATORS"<<endl;
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical NOT operator (!(a==b)) is: "<<(!(a==b))<<endl; 
    return 0;
}