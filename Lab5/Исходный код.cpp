#include <iostream>
#include <conio.h>
#include "myfun.h"
using namespace std;

void main ()
{
	setlocale (0,"");
	int a,b,e,f;
	cout<<"Введите числитель первой дроби: ";
	cin>>a;
	cout<<endl;
	cout<<"Введите знаменатель первой дроби: ";
	cin>>b;
	cout<<endl;

	cout<<"Введите числитель второй дроби: ";
	cin>>e;
	cout<<endl;
	cout<<"Введите знаменатель второй дроби: ";
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
			cout<<"\nПервая дробь: "<<a<<"/"<<b<<"\n";
		cout<<"\nВторая дробь: "<<e<<"/"<<f<<"\n";
		cout<<"\nНаименьший общий знаменатель = "<<i<<endl;
		cout<<"\nСумма дробей = ("<<s1<<"+"<<s2<<")/"<<i<<" = "<<A.summa(s1,s2,i)<<endl; 
		cout<<"\nРазность дробей равна = ("<<s1<<"-"<<s2<<")/"<<i<<" = "<<A.raznost (s1,s2,i)<<endl;
		}
	}
	
	cout<<"\nПроизведение дробей равно = "<<A.proizv (a,b,e,f)<<endl;
	cout<<"\nЧастное дробей равно = "<<A.chastnoe (a,b,e,f)<<endl;
	getch();
}