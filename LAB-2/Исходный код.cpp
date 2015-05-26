//16.	Минимальные элементы каждой строки массива А(N,М) заменить первым положительным элементом данной строки.
//Если строка не содержит положительные элементов, то заменить минимальные элементы единицей.
#include <iostream>
#include "myfun.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	float ** mas;
	cout << "Введите n, m:"; cin >> n >> m;
	
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