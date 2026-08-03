	       #include<iostream.h>
#include<stdio.h>

void swap(int,int);
void swap1(int*,int*)
void main()
{
 int a,b;
 clrscr();
 cout<<"enter two numbers:";
 cin>>a>>b;
 cout<<"\n before swap ()a="<<a<<"\t b="<<b;
 swap(a,b);
 cout<<"\n after swap ()a="<<a<<"\tb="<<b;
 swap1(&a,&b);
 cout<<"\n after  sawp()a="<<a<<"\tb="<<b;
 getch();
 }
   void swap(int a,intb)
   {
    int c=a;
    a=b;
    b=c;
    cout<<"\n inside swap() a="<<a<<""
    {
     int a=a;
      *a=*6;
      *b=c;

