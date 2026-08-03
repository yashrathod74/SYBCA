#include<conio.h>
#include<iostream.h>

void main()
{
	int c,cms,s,m=0;
	clrscr();
	cout<<"enter marks for cpp : ";
	cin>>c;
	cout<<"enter marks for sql : ";
	cin>>s;
	cout<<"enter marks for cms : ";
	cin>>cms;
	if (c<40)
		m+=1;
	if (s<40)
		m+=1;
	if (cms<40)
		m+=1;
	if(m==0)
		cout<<"\n PASS";
	else if(m==1)
		cout<<"\n AT-KT";
	else
		cout<<"\n TRY AGAIN";
}