//array with a class
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int a[5];
	void get()
	{
		for(int i=1;i<5;i++)
		{
			cout<<"enter a number=";
			cin>>a[i];
		}
	}
	void put()
	{
		for(int i=1;i<5;i++)
		{
			cout<<endl<<a[i];
		}
	}
};
void main()
{

	clrscr();
	a obj;
	obj.get();
	obj.put();
	getch();
}