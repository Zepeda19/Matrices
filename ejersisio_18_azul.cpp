#include<iostream>
using namespace std;
void menu();
void mostrar(int mat[][20],int r,int c);
void avanzar(int mat[][20],int esp,int &r, int &c,int pluma,int hori);
void derecha(int &hori);
void izquierda(int &hori);

int main()
{
	int mat[20][20]={{0}};
	int opc;
	int pluma;
	int r=0;
	int c=0;
	int esp=0;
	int hori=1;
	do
	{ system("cls");
		menu();
		cin>>opc;
		switch(opc)
		{
			case 1:
				pluma=0;
				mat[r][c]=pluma;			
			break;
			case 2:
				pluma=1;
				mat[r][c]=pluma;		
			break;
			case 3:
				derecha(hori);
			break;
			case 4:
				izquierda(hori);
			break;
			case 5: 
				cout<<"cuantos espacios quieres avanzar: ";
				cin>>esp;
				avanzar(mat,esp,r,c,pluma,hori);
			break;
			case 6:
				mostrar(mat,r,c);
				system("pause");
			break;
				
		}
	}while(opc !=7);
	return 0;
			
}

void menu()
{
cout<<" \n   Comandos   \n";
		cout<<"1---> Pluma hacia arriba \n";
		cout<<"2---> Pluma hacia abajo \n";
		cout<<"3---> Gira a la derecha \n";
		cout<<"4---> Gira a la izquierda \n";
		cout<<"5---> avanza espacios \n";
		cout<<"6---> Imprime el Arreglo de 20 por 20 \n";
		cout<<"7---> Fin de datos (Centinela) \n";
		cout<<"Coloca un el numero de la opcion: ";
		
}

void mostrar(int mat[][20],int r,int c)
{
	for(int r=0;r<20;r++)
	{
		for(int c=0;c<20;c++)
		{
			cout<<mat[r][c]<<" ";
		}
		cout<<"\n";
	}
}

void avanzar(int mat[][20],int esp,int &r,int &c,int pluma,int hori)
{
	if(hori==1)
	{
		esp+=c;
			for(;c<esp;c++)
			{
				if(c<20)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
		if(c>20)
		{
			c=19;
		}
	}
	else
	if(hori==2)
	{
		esp+=r;
		for(;r<esp;r++)
		{
			if (r<20)
				if(pluma==1)
				{
					mat[r][c]=pluma;
				}
		}
		if(r>20)
		{
			r=19;
		}
	}
	else
		if(hori==3)
		{
			cout <<"h c esp"<<hori<<" "<<c<<" "<<esp<<endl;
			cin.get();
			cin.get();
			esp=c-esp;
			for(;c>esp;c--)
			{	
				if (c>=0)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
			if(c<0)
			{
				c=0;
			}	
		}
	else
		{
			esp=r-esp;
			for(;r>esp;r--)
			{	if (r>=0)
					if(pluma==1)
					{
						mat[r][c]=pluma;
					}
			}
			if(r<0)
			{
				c=0;
			}		
		}
}

void derecha(int &hori)
{
	hori++;
	if(hori>4)
	   hori=1;
}

void izquierda(int &hori)
{
	hori--;
	if(hori<1)
	   hori=4;
}
