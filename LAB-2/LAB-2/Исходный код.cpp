#include <iostream>
#include "myfun.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	int ** mas;
	cout << "Vvedi n, m:"; cin >> n >> m;
	
	mas = new int*[n];                
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