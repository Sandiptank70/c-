//copy construct
#include<iostream.h>
#include<conio.h>
class a
{
	int *a,*b,*c;
	public:
	a(int *i,int *j)
	{
		a=i;
		b=j;
	}
	void swap()
	{
		c=a;
		a=b;
		b=c;
		cout<<endl<<*a<<endl<<*b;
	}
};
void main()
{
	  clrscr();
	int c;
	int b;
	cin>>c;
	cin>>b;
	a obj(&c,&b);
	obj.swap();
	getch();
}
