#include <iostream>
#include <cstring>
#include "myfun.h"
using namespace std;
class Drobi {
private:
	int x1,y1,x2,y2;
public:
	Drobi(int a, int b, int e, int f)
	{
	x1=a;
	y1=b;
	x2=e;
	y2=f;
	}

float summa (float c, float d, float k)
{
	return (c+d)/k;
}

float raznost (float c, float d, float k)
{
	return (c-d)/k;
}

float proizv (float x1, float y1, float x2, float y2)
{
	return ((x1/y1)*(x2/y2));
}

float chastnoe (float x1, float y1, float x2, float y2)
{
	return ((x1/y1)/(x2/y2));
}
};