#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int jugador1(int vec[],int jug1);
int jugador2(int vec[],int jug2);
int dado();

int main()
{
	int vec[100]={0};
	int jug1=0;
	int jug2=0;
	srand(time(NULL));
	//Serpientes
	vec[15]=-7; //7
	vec[20]=-10; //10
	vec[50]=-15; //35
	vec[80]=-20; //60
	vec[95]=-70; //70
	//Escaleras
	vec[5]=+11; //16
	vec[25]=+10; //35
	vec[30]=+15; //45
	vec[60]=+8; //68
	vec[75]=+10; //85
	

	while(jug1<100&&jug2<100)
	{
		jug1=jugador1(vec,jug1);
		jug2=jugador2(vec,jug2);
			cout<<"Jugador 1: "<<jug1<<endl<<"Jugador 2:"<<jug2<<endl<<endl;
	}
	
	if(jug1>=100 && jug2>=100)
	{
		cout<<"Empate";
	}
	else
	if(jug1>jug2)
	{
		cout<<"Gano el Jugador 1";
	}
	else
	cout<<"Gano el Jugador 2";
	
	return 0;
}

int dado()
{
	int n;
	return n=1+rand()%6;	
}

int jugador1(int vec[],int jug1)
{
	jug1+=dado();
	jug1+=vec[jug1];
	return jug1;
}

int jugador2(int vec[],int jug2)
{
	jug2+=dado();
	jug2+=vec[jug2];
	return jug2;
}
