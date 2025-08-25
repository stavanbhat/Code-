#include<stdio.h>
#include<conio.h>
int main()
{ /* we have to convert grams into kilograms */
clrscr();
float kilograms,grams;
printf("Enter the value of grams");
scanf("%f",& grams);
kilograms = grams/1000;
printf("value of kilograms= %f ",kilograms);
getch();
return 0;
}