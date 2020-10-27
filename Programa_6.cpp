#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int a,b;
float c;

int main(void)
{
	printf("Dame un numero");
	scanf("%d",&a);
	printf("Dame otro numero");
	scanf("%d",&b);
	c=a/b;
	printf("la división de %d entre %d es %f",a,b,c);
}
