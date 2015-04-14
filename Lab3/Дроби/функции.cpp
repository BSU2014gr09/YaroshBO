#include <iostream>
#include <cstring>
#include "myfun.h"
using namespace std;
void reduction ( int &x, int &y )
{
    int m = min ( x, y );
    for ( int i = 2; i <= m; i++ )
        while ( !( x % i ) && !( y % i ) )
        {
            x /= i;
            y /= i;
        }

}
void enter(fraction a , fraction b )
{
	cout<<"¬ведите числитель первой дроби:";cin>>a.num;
	cout<<"¬ведите знаменатель первой дроби:";cin>>a.denom;
	cout<<"¬ведите числитель второй дроби:";cin>>b.num;
	cout<<"¬ведите знаменатель второй дроби:";cin>>b.denom;

};
void summa(fraction a, fraction b, fraction sum)
{
	sum.num=a.num*b.denom+b.num*a.denom;
	sum.denom = a.denom*b.denom;
	cout<<sum.num<<"/"<<sum.denom;

};
void dif (fraction a, fraction b, fraction difference)
{
	difference.num=a.num*b.denom-b.num*a.denom;
	difference.denom = a.denom*b.denom;	
	cout<<difference.num<<"/"<<difference.denom<<endl;
};
void prod(fraction a, fraction b, fraction product)
{
	product.num=a.num*b.num;
	product.denom=a.denom*b.denom;
	cout<<product.num<<"/"<<product.denom;
};
void quot(fraction a, fraction b, fraction quotient)
{
	quotient.num=a.num/b.num;
	quotient.denom=a.denom/b.denom;
	cout<<quotient.num<<"/"<<quotient.denom<<endl;
};
struct fraction 
{
	int  num;
	int  denom;
};