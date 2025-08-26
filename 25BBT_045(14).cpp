#include<stdio.h>
#include<conio.h>
int main()
{
 int celcius,fahrenheit ;
 clrscr();
 printf("Enter value in celcius");
 scanf("%d",&celcius);
 fahrenheit = (9/5 *celcius)+32 ;
 printf("%d = (%d * 9/5)+32",fahrenheit,celcius);
 getch();
 return 0;
 }