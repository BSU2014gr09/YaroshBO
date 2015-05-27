#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;
typedef struct stack{
char name;
struct stack * next;
}Stack;

void push(Stack**head, char value);
char pop(Stack**head);

int main (int argc, const char * argv[]) {
setlocale(LC_ALL, "rus"); 

char str[50];

ofstream fout("text.txt"); 
for (int i =0 ; i<50 ; ++i)
{
	str[i]=rand() % 31 + 224;
	
}
char palindrome[100];
for (int i=0; i<50; ++i ){
palindrome[i]=str[i];

fout << palindrome[i]; // запись строки в файл
}
for(int t=49, k=49; t>0,k<99; --t, ++k){
		palindrome[k]=str[t];
		
		fout <<palindrome[k]; // запись строки в файл
}



fout.close(); // закрываем файл



char word[101]; 
ifstream fin("text.txt"); // открыли файл для чтения

fin.getline(word,101); // считали строку из файла
fin.close(); // закрываем файл



int i=0;
int lenght = 0;
Stack*head = NULL;
cout<<"Please type the word: ";

lenght = strlen(word);
while(word[i]!='\0'){
push(&head, word[i]);
i++;
}

i = 0;
while(pop(&head)==word[i] ){
i++;
if (i==lenght)
break;
}



if(i==lenght)

	cout<<word<<endl<<"Строка палиндром"<<endl;

else

cout<<word<<endl<<"Строка не палиндром."<<endl<<"Прерывается на"<<i+1<<"-ом элементе";


return 0;
}

void push(Stack**head,char value){

Stack *temp = (Stack*)malloc(sizeof(Stack));
temp->name = value;
temp->next = *head;
*head = temp;
}

char pop(Stack**head){

Stack* temp;

char val;
temp = *head;
val = temp->name;
*head = (*head)->next;

free(temp);
return val;
}