#include<stdio.h>
#include<conio.h>
int main()
{
 int celcius,fahrenheit ;
 clrscr();
 printf("Enter value in fahrenheit");
 scanf("%d",&fahrenheit);
 celcius = 5/9*(fahrenheit-32);
 printf("%d = (%d-32)*5\9",celcius, fahrenheit);
 getch();
 return 0;
 }