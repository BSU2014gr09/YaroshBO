#include <iostream>
#include "myfun.h"
using namespace std;

void vvod(int** a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
		if (a[i] == NULL)
		{
			cout << "Error" << endl;
			exit(1);
		}
		for (int j = 0; j < m; j++)
			cin >> *(a[i] + j);
	}
}

int posEl(int** a, int str, int m)
{
	int firstPos =1;
	for (int j = 0; j < m; j++)
		if (*(a[str] + j) > 0)
		{
			firstPos = *(a[str] + j);
			break;
		}
	return firstPos;
}

int minEl(int** a, int str, int m)
{
	int min = *(a[str]);
	for (int j = 1; j < m; j++)
		if (*(a[str] + j) < min)
		{
			min = (*(a[str] + j));
		}
	return min;
}

void change(int** a, int n, int m)
{
	int min;
	int pos;
	for (int i = 0; i < n; i++)
	{
		min = minEl(a, i, m);
		pos = posEl(a, i, m);
		for (int j = 0; j < m; j++)
		{
			if (*(a[i] + j) == min)
			{
				*(a[i] + j) = pos;
			}
			else continue;
		}
	}
}


void vivod(int** a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(3);
			cout << a[i][j];
		}
		cout << endl;
	}
}