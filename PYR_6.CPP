#include<conio.h>
#include<iostream.h>

void main()
{
	int i,j,n=5;
	clrscr();
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<" "<<j;
		}
		cout<<endl;
	}	
	getch();
}