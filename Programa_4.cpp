#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int a,b,c;
float x,r1,r2;

int main (void)
{
	printf("\n\nInserte el valor cuadratico de su ecuacion\n");
	scanf("%d",&a);
	if(a==0)
	{
		system("cls");
		printf("\n\nNmms esta madre no se puede resolver\n");
	}
	else
	{
	
	printf("\n\nInserte el valor lineal de su ecuacion\n");
	scanf("%d",&b);
	printf("\n\nInserte el valor independiente de su ecuacion\n");
	scanf("%d",&c);
	x=pow(b,2)-4*a*c;
	if(x<0)
	{
	system("cls");
	printf("\n\nNo se puede realizar la operacion\n");
	}
	else
	{
	system("cls");
	
	r1=((-b+sqrt(x))/(2*a));
	r2=((-b-sqrt(x))/(2*a));
	
	printf("\n\nLos resultados de tu ecuacion cuadratica son x1 =  %.3f y x2 =  %.3f",r1,r2);	
	}
	}
}
