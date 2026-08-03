#include<conio.h>
#include<iostream.h>

void main()
{
	int i,j,k,n=5;
	clrscr();
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		k=i;
		for(j=1;j<=i;j++)
		{
			cout<<" "<<k%2;
			k++;
		}
		cout<<endl;
	}	
	getch();
}