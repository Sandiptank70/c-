#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int a;
	a(int c,int b)
	{
		a=c+b;
		cout<<a;
	}
};
void main()
{
	clrscr();
	a obj(19,21);
	getch();
}