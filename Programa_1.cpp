#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int a=0, b=0;

int main (void)
{
	do
	{
	printf("\nInserte un numero...\n");
	scanf("%d",&a);
	printf("\nInserte otro numero\n");
	scanf("%d",&b);
	system("cls");
	}
	while (a==b);
	
	if(a>b)
	printf("\n%d es mayor que %d\n\n",a,b);
	else
	printf("\n%d es mayor que %d\n\n",b,a);
	
	system("pause");
}
