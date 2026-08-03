#include<conio.h>
#include<iostream.h>

inline int add (int a , int b)
{
	return (a+b);
}

void main ()
{
	int a,b;
	clrscr();
	cout<<"enter two number : ";
	cin>>a>>b;
	cout<<"\n sum  : "<<add(a,b);
	getch();
}