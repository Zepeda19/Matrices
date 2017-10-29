#include<iostream>
using namespace std;
void llenarMat(int mat[][5]);
int mostMat(int mat[][5]);
void mostAbDp(int mat[][5],int rt);
void mostArrDp(int mat[][5],int rt);
void mostAbDs(int mat[][5],int rt);
void mostArrDs(int mat[][5],int rt);

int main()
{
	int mat[5][5];
	int rt=4;
	llenarMat(mat);
	mostMat(mat);
	cout<<"Valores de arriba de la diagonal principal: "<<endl;
	mostArrDp(mat,rt);
	cout<<"\n Valores arriba de la diagonal Secundaria: "<<endl;
	mostArrDs(mat,rt);
	cout<<"\n Valores de abajo de la diagonal principal: "<<endl;
	mostAbDp(mat,rt);
	cout<<"\n Valores de abajo de la diagonal Secundaria: "<<endl;
	mostAbDs(mat,rt);
	
}

void llenarMat(int mat[][5])
{
	int valor=1;
	for(int r=0;r<=4;r++)
	{
		for(int c=0;c<=4;c++)
		{
			mat[r][c]=valor;
			valor++;
		}
	}
}

int mostMat(int mat[][5])
{
	for(int r=0;r<=4;r++)
	{
		for(int c=0;c<=4;c++)
		{
			cout<<mat[r][c]<<" ";
		}
		cout<<"\n";
	}
}

void mostArrDp(int mat[][5],int rt)
{
	int r;
	int c;
	int a=1;
	for(r=0;r<=3;r++)
	{	
		for(c=a;c<=rt;c++)
		{	
			cout<<mat[r][c]<<" ";	
		}	
		a++;	
	}
}

void mostArrDs(int mat[][5],int rt)
{
		int r,c,a=4;
	for(r=0;r<rt;r++)
	{
		for(c=0;c<a;c++)
		{
			
			cout<<mat[r][c]<<" ";
		}
		a--;
	}
	
}

void mostAbDp(int mat[][5],int rt)
{
	int r;
	int c;
	for(r=0;r<=rt;r++)
	{
		for(c=0;c<r;c++)
		{
			cout<<mat[r][c]<<" ";
		}
	}
}

void mostAbDs(int mat[][5],int rt)
{	
	int a=0;
	int r;
	int c;
	for(r=rt;r>0;r--)
	{
		for(c=rt;c>a;c--)
		{
			cout<<mat[r][c]<<" ";
		}
		a++;
	}
}
