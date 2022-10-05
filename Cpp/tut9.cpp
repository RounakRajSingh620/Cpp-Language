#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    /* ----Selection control structure: If else-if else ladder---- */
    // if(age<18){
    //     cout<<"You are not valid for drink beer"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are valid for fruit beer"<<endl;
    // }
    // else{
    //     cout<<"You are valid for drink beer"<<endl;
    // }
    
    
    /* --- Selection controls structure : Switch Case statements---- */ 
    switch (age)
    {
    case 1: 
        cout<<"You are 18"<<endl;
        break;

    case 2: 
        cout<<"You are 20"<<endl;
        break;

    default: 
        cout<<"No special cases"<<endl;
        break;    
    
        
    }
cout<<"DONE WITH SWITCH CASE";

    return 0;
}