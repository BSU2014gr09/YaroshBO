//16.	Ìèíèìàëüíûå ýëåìåíòû êàæäîé ñòðîêè ìàññèâà À(N,Ì) çàìåíèòü ïåðâûì ïîëîæèòåëüíûì ýëåìåíòîì äàííîé ñòðîêè.
//Åñëè ñòðîêà íå ñîäåðæèò ïîëîæèòåëüíûå ýëåìåíòîâ, òî çàìåíèòü ìèíèìàëüíûå ýëåìåíòû åäèíèöåé.
#include <iostream>
#include "myfun.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	float ** mas;
	cout << "Ââåäèòå n, m:"; cin >> n >> m;
	
	mas = new float*[n];                
	if (mas == NULL) // сколько про эту строку можно говорить???????
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
