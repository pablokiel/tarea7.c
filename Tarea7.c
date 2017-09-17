#include<stdio.h>

int main(){
 int num1=0;
 int num2=0;
 int num3=0;
 int min;
printf ("Dame un numero mayor que 1 menor que 10: ");
scanf("%d",&num1);
printf ("Dame un numero mayor que 1 menor que 10: ");
scanf("%d",&num2);
printf ("Dame un numero mayor que 1 menor que 10: ");
scanf("%d",&num3);
	min=num1;
	if(num2<min)
	min=num2;
	if (num3<min)
	min=num3;
	printf("El numero menor es: %d.\n",min);
}
