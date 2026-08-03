#include<conio.h>
#include<iostream.h>

int add(int a,const int b);

void main()
{
	int a,b,c;
	clrscr();
	cout<<"enter two integer :";
	cin>>a>>b;
	c=add(a,b);
	cout<<"\n sum :"<<c;

	getch();
}
int add( int a ,const int b )
{
	int c ;
	a++;
	//b++;  //we can't modify the constants
	c=a+b;
	return c;
}