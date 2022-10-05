#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,45,67,89};
    int mathMarks[4];
    mathMarks[0]=2234;
    mathMarks[1]=224;
    mathMarks[2]=534;
    mathMarks[3]=4234;

    cout<<"These are math marks "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    //You can change  the value of an array
    marks[2]=455;
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for (int i = 0; i <4; i++)
    {
        cout<<"The value of marks "<<i <<" is "<<marks[i]<<endl;
    }
    


    return 0;
}