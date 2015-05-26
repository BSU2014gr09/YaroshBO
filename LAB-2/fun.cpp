
#include <iostream>
#include "myfun.h"
using namespace std;

void vvod(float** a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = new float[m];
		if (a[i] == NULL)
		{
			cout << "Error" << endl;
			exit(1);
		}
		for (int j = 0; j < m; j++)
			cin >> *(a[i] + j);
	}
}

float posEl(float** a, int str, int m)
{
	float firstPos =1;
	for (int j = 0; j < m; j++)
		if (*(a[str] + j) > 0)
		{
			firstPos = *(a[str] + j);
			break;
		}
	return firstPos;
}

float minEl(float** a, int str, int m)
{
	float min = *(a[str]);
	for (int j = 1; j < m; j++)
		if (*(a[str] + j) < min)
		{
			min = (*(a[str] + j));
		}
	return min;
}

void change(float** a, int n, int m)
{
	float min;
	float pos;
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


void vivod(float** a, int n, int m)
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