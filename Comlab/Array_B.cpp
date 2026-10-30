/****************************************************************************
 NAME     : ANDERSON SYMON
 REG_nO   :BSC/ELE/38/25
 LAB TASK 5 , QUESTION 3
 *****************************************************************************/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<endl;
    string MyArray[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};

    //Printing strings that starts with B

    for (int i =0 ;i<sizeof(MyArray);i++){
        string  MyWords = MyArray[i];
        if (MyWords[0] == 'B')
        {
            cout<<MyArray[i]<<endl;
        }
    }
    cout<<endl;
}