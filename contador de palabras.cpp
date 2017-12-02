#include<iostream>
using namespace std;
int leer(char c1[]);

int main()
{
	char c1[20];
	leer(c1);
	int c=0;
	for(;c1[c];c++);
		cout<<c;
	
	
	return 0;
}

int leer(char c1[])
{
	cout<<"coloca una frase :";
	cin.getline(c1,20,'\n');
}
