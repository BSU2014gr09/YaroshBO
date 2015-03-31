#include <iostream>
#include <cstring>
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
struct fraction 
{
	int  num;
	int  denom;
};
int main ()
{
	setlocale (LC_ALL, "rus");
	int m, n;
	
	fraction drob1, drob2, difference,sum,product,quotient;
	cout<<"¬ведите числитель первой дроби:";cin>>drob1.num;
	cout<<"¬ведите знаменатель первой дроби:";cin>>drob1.denom;
	cout<<"¬ведите числитель второй дроби:";cin>>drob2.num;
	cout<<"¬ведите знаменатель второй дроби:";cin>>drob2.denom;
		sum.denom = drob1.denom*drob2.denom;
		sum.num=drob1.num*drob2.denom+drob2.num*drob1.denom;
		difference.num=drob1.num*drob2.denom-drob2.num*drob1.denom;
		product.num=drob1.num*drob2.num;
		product.denom=drob1.denom*drob2.denom;
		quotient.num=drob1.num/drob2.num;
		quotient.denom=drob1.denom/drob2.denom;
		cout<<"0 - посчитать разность"<<endl<<"1- найти сумму"<<endl<<"2-перемножить дроби"<<endl<<"3-поделить дроби"<<endl;cin>>m;
		switch(m)
		{case 0:cout<<difference.num<<"/"<<sum.denom<<endl;
		cout<<"0-сократить дробь"<<endl<<"1-не сокращать"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(difference.num,sum.denom);cout<<difference.num<<"/"<<sum.denom;
			break;
			case 1:cout<<difference.num<<"/"<<sum.denom;
			}
			break;
		case 1:cout<<sum.num<<"/"<<sum.denom<<endl;
			cout<<"0-сократить дробь"<<endl<<"1-не сокращать"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(sum.num,sum.denom);cout<<sum.num<<"/"<<sum.denom;
			break;
			case 1:cout<<sum.num<<"/"<<sum.denom;
			}
			break;
		case 2:cout<<product.num<<"/"<<product.denom<<endl;
			cout<<"0-сократить дробь"<<endl<<"1-не сокращать"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(product.num,product.denom);cout<<product.num<<"/"<<product.denom;
			break;
			case 1:cout<<product.num<<"/"<<product.denom;
			}	
			break;
		case 3:cout<<quotient.num<<"/"<<quotient.denom<<endl;
			cout<<"0-сократить дробь"<<endl<<"1-не сокращать"<<endl;cin>>n;
			switch(n)
			{case 0:reduction(quotient.num,quotient.denom);cout<<quotient.num<<"/"<<quotient.denom;
			break;
			case 1:cout<<quotient.num<<"/"<<quotient.denom;
			}
			break;
		}
	
}
