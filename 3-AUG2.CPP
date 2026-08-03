#include<iostream.h>
#include<conio.h>

class demo
{
	int a ;
	float b ;
	char c ;
	void get();

	public :
		void put()
		{
			get();
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
			cout<<"\n c="<<c;
		}
};
void demo ::get()
{
	cout <<"enter a,b,c acoording to their datatypes : ";
	cin>>a>>b>>c;
}
void main()
{
	demo d1;
	clrscr();
	d1.put();
	getch();
}