#include<iostream.h>
#include<conio.h>

int & max(int & , int &);

void main()
{
	int a =100;
	clrscr();

	int &b = a ;
	cout<<"\n a = "<<a<<"\t b = "<<b;

	a+=100;
	cout<<"\n a = "<<a<<"\t b = "<<b;

	b-=50;
	cout<<"\n a = "<<a<<"\t b = "<<b;

	int m=10,n=20,p=30;
	m=max(n,p);
	cout<<"\n m = "<<m<<"\t n = "<<n<<"\t p = "<<p;

	int x=10,y=20,z=30;
	max(x,y)=z;
	cout<<"\n x = "<<x<<"\t y = "<<y<<"\t z = "<<z;
	getch();

}

int & max (int & a , int & b)
{
	if (a>b)
		return a ;
	else
		return b ;
}