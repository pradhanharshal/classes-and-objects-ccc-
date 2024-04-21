/******************************************************************************

    write a program to define a class  to store account number and balance. 
    write following functions in the class.
    1. write a functions to get constant value from main.
    2. function to display data. 
    
    creata two objects in main and sent the constant value of 1st object.
    account number=1001, balance=5000.
    for second object, account no= 1002, balance=7000.
    
    display both the records.
    

*******************************************************************************/

#include<iostream.h>
#include<conio.h>

class bank
{
    private: //access specifier//
    
    int acc_no;
    float balance;
    
    public:
    
    void setdata (int a, float b) // fnction decleration//
    {
        acc_no=a;
        balance=b; 
    }
    
    void showdata() // function to show data//
    
        {
        cout<<"\n Account number="<< acc_no;
        cout<<"\n Balance="<< balance;
    }
};

void main()
{
    
    bank cust1, cust2; // creating object//
    
    clrscr();
    
    cust1.setdata (1001, 5000);
    cust2.setdata(1002, 7000);
    
    cout<<"\n customer data1 \n";
    cust1.showdata();
    
    cout<<"\n customer data2 \n";
    cust2.showdata();
    
    getch();
}