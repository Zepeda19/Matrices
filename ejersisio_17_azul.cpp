#include<iostream>
using namespace std;
void llenarmat(int mat[][5],int ven,int pro,int vent);
int mostrarmat(int mat[][5]);
void sumavend(int mat[][5]);
void sumapro(int mat[][5]);

int main()
{
	int mat[6][5]={{0}};
	char opc;
	int ven, pro, vent;
	
	do
	{system("cls");
	cout<<"numero del vendedor: ";
	cin>>ven;
	cout<<"numero del Producto: ";
	cin>>pro;
	cout<<"Importe de las ventas: ";
	cin>>vent;
	cout<<"Quieres agregar mas vendedores(s/n) :";
	cin>>opc;
	if(ven<5&&pro<6)
	{
		llenarmat(mat,ven,pro,vent);
	}
	else
	{
		cout<<"deve ser menor a 5 o a 6"<<endl;
	}
	
	}while(opc=='s');	
	sumavend(mat);
	sumapro(mat);
	mostrarmat(mat);
	
	
	return 0;
}

void llenarmat(int mat[][5],int ven,int pro,int vent)
{	
	mat[pro-1][ven-1]+=vent;
}

int mostrarmat(int mat[][5])
{
	int r,c;
	for(r=0;r<6;r++)
	{
		for(c=0;c<5;c++)
		{
			cout<<mat[r][c]<<" ";
		}
		cout<<"\n";
	}
}

void sumavend(int mat[][5])
{
	int r,c;
	for(r=0;r<5;r++)
	{
		for(c=0;c<4;c++)
		{
			mat[5][c]+=mat[r][c];
		}
	}
}

void sumapro(int mat[][5])
{
	int r,c;
	for(r=0;r<5;r++)
	{
		for(c=0;c<4;c++)
		{
			mat[r][4]+=mat[r][c];
		}
	}
}
