//constructer with argc
#include<iostream.h>
#include<conio.h>
class a
{       int a;
	public:

	a(int b)
	{
		a=b;
		cout<<b;
	}
};
void main()
{
	clrscr();
	a obj(10);
	getch();
}