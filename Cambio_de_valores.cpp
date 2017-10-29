#include<iostream>
using namespace std;
void llenarMat(int mat[][5]);
int mostMat(int mat[][5]);
int volMatprim(int mat[][5],int rt);
int volMatsec(int mat[][5],int rt);

int main()
{
	int mat[5][5];
	int rt=4;
	llenarMat(mat);
	mostMat(mat);
	cout<<"La matris volteada es: "<<endl;
	volMatprim(mat,rt);
	mostMat(mat);
	cout<<"\nLa matris volteada es: "<<endl;
	volMatsec(mat,rt);
	mostMat(mat);
	
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

int volMatprim(int mat[][5],int rt)
{
	int a=1;
	int x, y, xy;
	
	for(int r=0;r<rt;r++)
	{
		for(int c=a;c<=rt;c++)
		{
			mat[r][c];
			mat[c][r];
			xy=mat[c][r];
			mat[c][r]=mat[r][c];
			mat[r][c]=xy;
		}
		a++;
	}
}

int volMatsec(int mat[][5],int rt)
{
	int r,c,x,y;
	int xy;
	for(r=0,x=4;r<rt;r++,x--)
	{
		
		for(c=0,y=4;c<rt-1;c++,y--)
		{
			xy=mat[r][c];
			mat[r][c]=mat[y][x];
			mat[y][x]=xy;
		}
	}
}
