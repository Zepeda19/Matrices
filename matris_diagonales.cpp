#include<iostream>
using namespace std;
void llenarmat(int m[][5], int rt);
int mostrar(int m[][5],int rt);
int dp(int m[][5],int rt);
int ds(int m[][5],int rt);

int main()
{
	int m[5][5];
	int rt=5;
	llenarmat(m,rt);
	mostrar(m,rt);
	dp(m,rt);
	ds(m,rt);

	return 0;	
}

void llenarmat(int m[][5],int rt)
{
	int r,c;
	int valor=1;
	for(r=0;r<=4;r++)
	{
		for(c=0;c<=4;c++)
		{
			m[r][c]=valor;
			valor++;
		}
	}
}

int mostrar(int m[][5],int rt)
{
	for(int r=0;r<=4;r++)
	{
		for(int c=0;c<=4;c++)
		{
			cout<<m[r][c]<<" ";
		}
		cout<<"\n";
	}
}

int dp(int m[][5],int rt)
{
	int r;
	cout<<"La diagonal principal es: ";
	for(r=0;r<rt;r++)
	{
		cout<<m[r][r]<<" ";
	}
}

int ds(int m[][5],int rt)
{
	int c;
	int r;
	cout<<"\n La diagonal Secundaria es: ";
	for(r=0;r<=rt-1;r++)
	{
		c--;
		cout<<m[r][c]<<" ";
	}
}
