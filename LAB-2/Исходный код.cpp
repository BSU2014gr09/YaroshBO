//16.	����������� �������� ������ ������ ������� �(N,�) �������� ������ ������������� ��������� ������ ������.
//���� ������ �� �������� ������������� ���������, �� �������� ����������� �������� ��������.
#include <iostream>
#include "myfun.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	float ** mas;
	cout << "������� n, m:"; cin >> n >> m;
	
	mas = new float*[n];                
	if (mas == NULL)
	{ 
		cout << "Error" << endl;   
		exit(1); 
	}
	vvod(mas, n, m);
	cout << endl;
	change(mas, n, m);
	vivod(mas, n, m);
	system("pause");
	return 0;
}