#include<conio.h>
#include<iostream.h>

int add (int x,int y);
int add (int x,int y,int z);

void main()
{
	int a,b,c,d;
	clrscr();
	cout<<"enter three integer :";
	cin>>a>>b>>c;
	d=add(a,b);
	cout<<"\n sum of 2 arguement (1st & 2nd) :"<<d;
	d=add(a,b,c);
	cout<<"\n sum of 3 arguement (1st , 2nd & 3rd) :"<<d;
	getch();
}
int add( int x , int y )
{
	return (x+y);
}
int add( int x , int y , int z )
{
	return (x+y+z);
}
