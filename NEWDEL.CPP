#include<conio.h>
#include<iostream.h>

void main()
{
	float *p , sum=0  ;
	int n , i ;
	clrscr();
	cout<<"\n enter value for n = ";
	cin>>n;

	p=new float [n];


	for(i=0;i<n;i++)
	{
		cout<<" \n enter value - "<<i+1<<" : ";
		cin>> p[i];
	}

	for(i=0;i<n;i++)
	{
		cout<< endl <<*p ;
		sum+=*p;
		p++;
	}

	cout<<"\n sum = "<<sum;
	delete[]p;
	getch();

}