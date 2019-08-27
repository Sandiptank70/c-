// function with argc
#include<iostream.h>
#include<conio.h>
void sum(int,int);
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter a first number=";
	cin>>a;
	cout<<endl<<"enter a secound number=";
	cin>>b;
	sum(a,b);
	getch();
}
void sum(int a,int b)
{
	cout<<"sum="<<a+b;
}