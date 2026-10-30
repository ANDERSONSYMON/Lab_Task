/****************************************************************************
 NAME     : ANDERSON SYMON
 REG_nO   :BSC/ELE/38/25
 LAB TASK 5 , QUESTION 1
 *****************************************************************************/

 #include <iostream>
 #include <random>
 using namespace std;

 int main()
 {
    cout<<endl;  //create space 
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0,11);  //generating random number in the range 0 to 11
     
    int daysUntilExpiration = dist(gen);

    if (daysUntilExpiration==0)
    {
        cout<<"Your subscription has expired."<<endl;
    }

    else if(daysUntilExpiration==1)
    {
        cout<<"Your subscription expires within a day!Renew now and save 20%!"<<endl;
    }
    else if(daysUntilExpiration<=5)
    {
        cout<<"Your subscription expires in "<<daysUntilExpiration<<" days"<<endl<<"Renew now and save 10%!"<<endl;
    }
    
    else if(daysUntilExpiration<=10)
    {
        cout<<"Your subscription will expire soon. Renew now!"<<endl;       
    }
    else
    {
        cout<<"You have an active subscription."<<endl;
    }
    cout<<endl; // creat space
 }