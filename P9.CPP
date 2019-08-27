#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter a number :";
	cin>>a;
	if(a>0)
	{
		cout<<"gretar then zero";
	}
	else if(a<0)
	{
		cout<<"less then  zero";
	}
	else
	{
		cout<<"zero";
	}
	getch();
}