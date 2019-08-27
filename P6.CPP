#include<iostream.h>
#include<conio.h>
void main()
{
	 clrscr();
	 int a;
	 cout<<"Enter a number:";
	 cin>>a;
	 for(int i=1;i<=a;i++)
	 {
		for(int b=1;b<i;b++)
		{
			cout<<b;
		}
		cout<<endl;
	 }
	 getch();
}