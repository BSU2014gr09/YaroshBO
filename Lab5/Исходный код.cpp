#include <iostream>
#include <conio.h>
#include "myfun.h"
using namespace std;

void main ()
{
	setlocale (0,"");
	int a,b,e,f;
	cout<<"������� ��������� ������ �����: ";
	cin>>a;
	cout<<endl;
	cout<<"������� ����������� ������ �����: ";
	cin>>b;
	cout<<endl;

	cout<<"������� ��������� ������ �����: ";
	cin>>e;
	cout<<endl;
	cout<<"������� ����������� ������ �����: ";
	cin>>f;
	Drobi A(a,b,e,f);
	cout<<endl;
int c=0;
int s1,s2;
	for (int i=1;c!=1; i++)
	{
		if ((i%b==0)&&(i%f==0))
		{
			c=1;
			s1=a*(i/b);
			s2=e*(i/f);
			cout<<"\n������ �����: "<<a<<"/"<<b<<"\n";
		cout<<"\n������ �����: "<<e<<"/"<<f<<"\n";
		cout<<"\n���������� ����� ����������� = "<<i<<endl;
		cout<<"\n����� ������ = ("<<s1<<"+"<<s2<<")/"<<i<<" = "<<A.summa(s1,s2,i)<<endl; 
		cout<<"\n�������� ������ ����� = ("<<s1<<"-"<<s2<<")/"<<i<<" = "<<A.raznost (s1,s2,i)<<endl;
		}
	}
	
	cout<<"\n������������ ������ ����� = "<<A.proizv (a,b,e,f)<<endl;
	cout<<"\n������� ������ ����� = "<<A.chastnoe (a,b,e,f)<<endl;
	getch();
}