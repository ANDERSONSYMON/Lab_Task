/****************************************************************************
 NAME     : ANDERSON SYMON
 REG_nO   :BSC/ELE/38/25
 LAB TASK 5 , QUESTION 5
 *****************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<endl;
    bool is_input_valid = true; // 

    while(is_input_valid)
    {
      cout<<"please select the area of shape you want to calculate"<<endl;
      cout<<"1. Square \n2. Rectangle \n3. Triange \n4. Quit program"<<endl;
      cout<<endl;
      int input;
    
      cout<<"Enter selection :";
      cin>>input;

      if((((input>=1)&&(input<=4))&&!(cin.fail())))     //cin.fail() is used if the input is ivalid 
      {
         switch(input)
         {
            case 1 : 
               cout<<endl;
               cout<<"==========CALCULATING AREA OF A SQUARE=============="<<endl;
               double side;
               cout<<"ENTER size of the square : ";
               cin>>side;
               cout<<"area : "<<(side*side);
               cout<<" square meter"<<endl;
               cout<<endl;
               break;

            case 2 : 
               cout<<endl;
               cout<<"=======CALCULATING AREA OF RECTANGLE============="<<endl;
               double length;
               double width;
               cout<<"  Enter length : ";
               cin>>length;
               cout<<"Enter width  : ";
               cin>>width;
               cout<<endl;
               cout<<"area         : " <<(length*width)<<endl;
               cout<<endl;
               break;
        
            case 3 : 
               cout<<endl;
               cout<<"=======CALCULATING AREA OF A TRIANGLE========"<<endl;
               double base;
               double height;
               cout<<"Enter base : ";
               cin>>base;
               cout<<"Enter height : ";
               cin>>height;
               cout<<"area         : "<<(0.5*base*height)<<endl;
               cout<<endl;
               break;

            default :
               break; 
        } 
        break;
      

     }
      else
       {
         cout<<"invalid input"<<endl;
         cin.clear();
         cin.ignore(1000,'\n');
        
   }
}
}
