#include<iostream.h>
#include<conio.h>

class demo
{
	int a ;
	float b ;
	char c ;
	public :
		void get()
		{
			cout<<"enter a ,b ,c acccordingly datatype :";
			cin>>a>>b>>c;
		}

		void put();
};

void demo :: put()
{
	cout<<"\n a ="<<a;
	cout<<"\n b ="<<b;
	cout<<"\n c ="<<c;
}

void main()
{
	demo d1;
	clrscr();
	d1.get();
	d1.put();
	getch();
}