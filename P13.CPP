//function overloading

#include<iostream.h>
#include<conio.h>
void sq(int a)
{
	cout<<endl<<"squre="<<a*a;
}
void sq(float a)
{
	cout<<endl<<"squre="<<a*a*a;
}
void sq()
{
	cout<<endl<<"hello";
}
void main()
{
	clrscr();
	int a;float b;
	cout<<endl<<"Enter a integer number=";
	cin>>a;
	cout<<endl<<"Enter a float number";
	cin>>b;
	sq(a);
	sq(b);
	sq();
	getch();
}













