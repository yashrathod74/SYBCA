#include<conio.h>
#include<iostream.h>

void main()
{
	int i,j,a=0,b=1,c,n=5;
	clrscr();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<a<<"\t ";
			c=a+b;
			a=b;
			b=c;
		}
		cout<<endl;
	}	
	getch();
}