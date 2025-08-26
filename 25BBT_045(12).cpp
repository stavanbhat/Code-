#include<stdio.h>
#include<conio.h>
int main()
{
 int kilograms,grams;
 clrscr();
 printf("Enter values in kilograms");
 scanf("%d,&kg");
 grams = kilograms * 1000;
 printf("%d = %d \n",grams,kilograms);
 getch();
 return 0;
 }