//call by reference
#include<iostream.h>
#include<conio.h>
int & cleck(int &a,int &b)
{
	if(a>b)
	{
		return a;
	}

	else
	{
		return b;
	}
}
void main()
{
	clrscr();
		int a,b;
		cout<<"Enter a number=";
		cin>>a;
		cout<<endl<<"Enter a secound number=";
		cin>>b;
		int c=cleck(a,b);
		cout<<endl<<c;
		getch();

}
