#include<iostream.h>
#include<conio.h>

class DB;

class DM
{
	int m;
	int cm;

	public :

	void get()
	{

		cout<<"\n enter unit in meters :";
		cin>>m;

		cout<<"\n enter unit in centimeters :";
		cin>>cm;

	}

	void put()
	{
		cout<<"\ndistance  "<<m<<" meters"<<" "<<cm<<" centitmeters";
	}

	friend void add (DM,DB);
};

class DB
{
	int f;
	int in;

	public:

	void get()
	{
		cout<<"\n enter unit in feet  :";
		cin>>f;

		cout<<"\n enter unit in inches :";
		cin>>in;
	}

	void put()
	{
		cout<<"\ndistance "<<f<<" feet"<<" "<<in<<" inches";
	}

	friend void add (DM,DB);
};

void add(DM obj1, DB obj2)
{
	int total_cm_1,total_cm_2,total_cm;
	int final_m, final_cm;
	int total_inches,final_f,final_in;

	total_cm_1 = (obj1.m * 100)+ obj1.cm;

	total_inches = (obj2.f * 12) + obj2.in;
	total_cm_2 = total_inches * 2.5 ;

	total_cm = total_cm_1 + total_cm_2;


	cout<<"\n--------------------------------------------";
	cout<<"\n Total added distance in smallest unit:"<< total_cm<<" cm";
	cout<<"\n--------------------------------------------";

	final_m = total_cm /100 ;
	final_cm= total_cm %100 ;

	cout<<"\n result in meter-centimeter format :";
	cout<<"\n => "<<final_m<<" meters and "<<final_cm<<" centimeters";

	float total_in_float = total_cm  / 2.5 ;
	final_f = total_in_float / 12 ;
	final_in =(int)total_in_float % 12 ;

	cout<<"\n\nResults in feet-inches format :  "  ;
	cout<<"\n => "<<final_f<<" feet and "<<final_in<<" inches";

}

void main()
{
	DM a1;
	DB b1;
	clrscr();

	cout<<"--- enter data for first object (meter-centimeter) ---";
	a1.get();

	cout<<"\n--- enter data for second object (feet-inches) ---";
	b1.get();

	cout<<"\n\n=== Displaying original inputs ===";
	a1.put();
	b1.put();

	cout<<"\n\n=== Processing addition (DM+DB) ===";
	add(a1 ,  b1);
	getch();

}