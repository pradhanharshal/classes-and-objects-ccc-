/******************************************************************************
define a class to store employee no, basic salary and department number. 
accpet the data in the main of the object and sent constant value of second object as 
employee number=119, basic salary=5000 and department number= 10, and display all the data.

*******************************************************************************/


#include<iostream.h>
#include<conio.h>

class salary
{
    private:
    
    int emp_no, dept_no;
    float bas_sal;
    
    public:
    
   void setdata(int e, int d, float b)

    {
	emp_no=e;
	dept_no=d;
	bas_sal=b;

    }

    void getdata() // accept data from user//
    {
	cout<<"\n Enter Employee number";
	cin>> emp_no;

	cout<<"\n Enter Department number";
	cin>>"dept_no";

	cout<<"\n Enter basic salary";
	cin>>"bas_sal";

    }

    void showdata() // display data
    {
	cout <<"\n Employee number="<< emp_no;
	cout<<"\n Department name="<< dept_no;
	cout<<"\n basic salary="<< bas_sal;
    }

    };

    void main()
    {

	salary emp1, emp2; // creating object//
    clrscr();
	emp1.setdata (119,10, 5000);
	emp2.getdata();
        
        cout<<"\n employee data1 \n";
        emp1.showdata();
        
        cout<<"\n employee data2 \n";
        emp2.showdata();
        
        getch();
        
    }
