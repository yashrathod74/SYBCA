#include<iostream.h>
#include<conio.h>

int add(int salary, int commision)
{
	return (salary+commision);
}

struct emp{
	int empcode;
	char name[20];
	int salary;
	int commision;
	int add(salary,commision);
};

void main ()
{
    struct emp e1;
    clrscr();
    cout<<"\nenter employee code here : ";
    cin>>e1.empcode;
    cout<<"\nenter employee name here : ";
    cin>>e1.name;
    cout<<"\nenter employee salary here : ";
    cin>>e1.salary;
    cout<<"\nenter employee commision here : ";
    cin>>e1.commision;
    cout<<"\n total payable to the employee is :",add(e1.salary,e1.commision);
    getch();
}