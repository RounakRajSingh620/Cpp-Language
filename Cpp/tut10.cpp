#include<iostream>

using namespace std;
int main(){
    /* Loop in C++:
    Ther are three types of loops in C++:
    1. FOR loop 
    2. WHILE lopp
    3. DO while loop
    */
    
    /*FOR Loop in C++*/

    //Syntax for FOR loop

    //for (*inintilization ;condition ;updation)
    //{
    // loop body(C++ code);
    // }

    // for (int  i = 0; i <=40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // //Example of Infinite for loop

    // for(int i=1; 35<+40;i++){
    //     cout<<i<<endl;
    // }
    
     /* While Loop in C++*/

     //Syntax :

     //while(condition):
     //  {
     //   C++ statement;
     // }

    //  int i=1;
    //  while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    //  }
    //Example of Infinite for loop

    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    /*DO while loop in c++:*/
    //syntax:
    //do{
        // C++ statements;
    // }while (condition);

    //Printing 1 to 40using do while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<40);
   return 0;
}