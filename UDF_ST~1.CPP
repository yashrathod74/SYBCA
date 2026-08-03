#include<iostream.h>
#include<conio.h>

int add(int salary, int commision)
{
    return salary + commision;
}

struct emp
{
    int empcode;
    char name[20];
    int salary;
    int commision;
};

void main()
{
    struct emp e1;

    clrscr();

    cout << "\nEnter employee code: ";
    cin >> e1.empcode;

    cout << "\nEnter employee name: ";
    cin >> e1.name;

    cout << "\nEnter employee salary: ";
    cin >> e1.salary;

    cout << "\nEnter employee commission: ";
    cin >> e1.commision;

    cout << "\nTotal payable to "<<e1.name<< " is: "
	 << add(e1.salary, e1.commision);

    getch();
}