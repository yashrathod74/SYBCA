#include<conio.h>
#include<iostream.h>

void main()
{
	int i,j,n=5;
	clrscr();
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" "<<j;
		}
		cout<<endl;
	}	
	getch();
}