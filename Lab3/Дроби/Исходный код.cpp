// TODO
// ��� �������� - �������, ������� �������� � ����� ����������!!!! ����� ������� 5 ����� �������� ��� ����/�����/��������/���������/��������� ������ � �.�.
#include <iostream>
#include <cstring>
#include "myfun.h"
using namespace std;
int main ()
{
	setlocale (LC_ALL, "rus");
	int m, n;
	
	fraction drob1, drob2, difference,sum,product,quotient;
	enter(drob1, drob2);
				
		cout<<"0 - ��������� ��������"<<endl<<"1- ����� �����"<<endl<<"2-����������� �����"<<endl<<"3-�������� �����"<<endl;cin>>m;
		switch(m)
		{case 0:dif(drob1,drob2,difference);
		cout<<"0-��������� �����"<<endl<<"1-�� ���������"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(difference.num,sum.denom);dif(drob1,drob2,difference);
			break;
			case 1:dif(drob1,drob2,difference);
			}
			break;
		case 1:summa(drob1,drob2,sum);
			cout<<"0-��������� �����"<<endl<<"1-�� ���������"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(sum.num,sum.denom);summa(drob1,drob2,sum);
			break;
			case 1:summa(drob1,drob2,sum);
			}
			break;
		case 2:prod(drob1, drob2, product);
			cout<<"0-��������� �����"<<endl<<"1-�� ���������"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(product.num,product.denom);prod(drob1, drob2, product);
			break;
			case 1:prod(drob1, drob2, product);
			}	
			break;
		case 3:quot(drob1, drob2, quotient);
			cout<<"0-��������� �����"<<endl<<"1-�� ���������"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(quotient.num,quotient.denom);quot(drob1, drob2, quotient);
			break;
			case 1:quot(drob1, drob2, quotient);
			}
			break;
		}
	
}
