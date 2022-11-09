#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}
// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp =a;        //4    4 5
    a=b;                //4    5 5
    b=temp;             //4    5 4
}
//Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp =*a;        //4    4 5
    *a=*b;                //4    5 5
    *b=temp;             //4    5 4
}


//Call by reference using C++ reference Variables
void swapReferenceVar(int* a, int* b){ //temp a b
    int temp =a;          //4    4 5
    a=b;                //4    5 5
    b=temp;             //4    5 4
}


int main(){
    int x= 4,y=5;
    // cout<<"THe sum of 4 and 5 is "<<sum(4,5); 
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    // swap(x,y);//This wil not swap a and b 
    // swapPointer(&x,&y);// This will swap a and b using pointers reference
    swapReferenceVar(x,y); //This will swap a nad ,b using reference variables 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}