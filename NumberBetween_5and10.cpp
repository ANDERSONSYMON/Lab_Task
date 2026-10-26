/****************************************************************************
 NAME     : ANDERSON SYMON
 REG_nO   :BSC/ELE/38/25
 LAB TASK 5 , QUESTION 4
 *****************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
    {
        cout<<"Enter an integer between 5 and 10 "<<endl;
        bool is_input_valid = true;

        while(is_input_valid)
        {
            int input;
            cin>>input;

            if((((input>=5)&&(input<=10))&&!(cin.fail()))) 
            {
                cout<<"Your input value ("<<input<<") has been accepted."<<endl;
                is_input_valid = false;
            }
            else
            {
                cout<<"You entered "<<input<<". Please enter a number between 5 and 10."<<endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }
        }
    }
