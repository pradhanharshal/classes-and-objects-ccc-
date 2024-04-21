/*********************************************
write a program to define a class to store quantity and rate.
define a function to set quantity and rate value from main. 
write a function to display quantity and rate. 
create two object in main and sent constant value to the first object quantity=100 and Rate=50. 
for second object quantity=200 and rate=150.
*********************************************************************************************************/
#include<iostream.h>
#include<conio.h>

class amount
{
    private: 
    int quantity;
    float rate;

    public:

    void setdata(int q, float r) //function decleration//
    {

	quantity=q;
	rate=r;

    }

    void showdata() // function to show data//
{
    cout<<"\n Quantity="<< quantity;
    cout<<"\n Rate="<< rate;
}
};

void main()
{
    amount amt1, amt2; // creating object//
    
    clrscr();
    
    amt1.setdata(100,50);
    amt2.setdata(200,150);
    
    cout<<"\n Amount data1 \n";
    amt1.showdata();
    
    cout<<"\n amount data2 \n";
    amt2.showdata();
    
    getch();
    
}
