#include<stdio.h>
#include<conio.h>
int main()
{
 int A,H,L;
 clrscr();
 printf("Enter value of hight");
 scanf("%d",&H);
 printf("Enter value of length");
 scanf("%d",&L);
 A = H*L/2 ;
 printf("%d = %d * %d/2");
 getch();
 return 0;
 }