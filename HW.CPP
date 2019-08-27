//array of object
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int marks[3];
	void get()
	{
		for(int a=0;a<3;a++)
		{
			cout<<endl<<"enter a"<<a+1<<"  subject mark=";
			cin>>marks[a];
		}
	}
	void put()
	{        int total=0;
		for(int a=0;a<3;a++)
		{
		    cout<<endl<<a+1<<"subject mark="<<marks[a];
		    total=total+marks[a];
		}
		cout<<"total="<<total;
	}
};
void main()
{
	clrscr();
	a obj[5];
	for(int b=0;b<3;b++)
     {
		obj[b].get();
     }
	for(int c=0;c<3;c++)
	{
		obj[c].put();
	}
	getch();
}