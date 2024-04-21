/******************************************************************************
write a define a class to store student exam number and marks and following functions in it.
1. function to get constant data from main.
2. function to show data.

create two objects in main and send the constant value of one object. 
exam no.= 1001 and marks= 540
for two objects send the data, exam number=1002, and marks=700.


*******************************************************************************/

#include <iostream.h>
#include<conio.h>

class student //name of a class//
{
    private: // access specifier//
    
    int exam_no;
    float marks; // data decleration//
    
    public: 
    void setdata (int e, float m) // function to get constant value//
    {
        
        exam_no=e;
        marks=m;
    }
    void showdata()// function to display data//
    
    {
        cout<<"\n Exam no="<< exam_no;
        cout<< "\n marks="<< marks;
    }
    
};

void main()
{
    student stud1, stud2; // creating object//
    
    clrscr();
    
    stud1.setdata(1001, 540);
    stud2.setdata(1002, 700);
    
    cout<< "\n Student Record 1\n";
    stud1.showdata();

    cout<< "\n Student Record 2\n";
    stud2.showdata();

    getch();
    
}
