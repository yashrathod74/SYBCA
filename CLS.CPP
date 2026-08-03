#include<iostream.h>
#include<conio.h>

class demo
{
	private :
		int a,b;
	public :
		void input()
		{
			cout <<"\n enter a and b :";
			cin >>a>>b;
		}
		void output ();
};

void demo :: output()
{
	cout<<"\n a = "<<a;
	cout<<"\n b = "<<b;
}

void main()
{
	clrscr();
	demo d1;
	d1.input();
	d1.output();
	getch();
}
