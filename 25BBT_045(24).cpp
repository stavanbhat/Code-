#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,temp;
 clrscr();
 printf("Enter value of a");
 scanf("%d",a);
 printf("Enter value of b");
 scanf("%d",b);
 printf("/n before swapping a = %d,b =d",a,b);
 temp = a;
 a = b;
 b = temp;
 printf("/n after swapping a = %d,b = %d",a,b);
 getch();
 return 0;
 }