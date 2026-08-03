#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int a =10;
void main()
{
	int a = 100;
	{
		int a=1000;
		clrscr();
		cout <<"\n a = "<< a;
		cout <<"\n ::a = "<< ::a;
	}
	cout <<"\n a = "<< a;
	cout <<"\n ::a = "<< ::a;
	getch();

}