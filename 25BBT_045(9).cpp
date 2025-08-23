#include<stdio.h>
#include<conio.h>
int main()
{ /* convert dollars into pound */
float dollars , rupees, pounds ;
clrscr();
printf("Enter value of dollars");
scanf(" % f , & dollars ");
/* convert dollars into rupees */;
rupees = dollars * 48 ;
/* convert rupees into pounds */ ;
pounds = rupees * 70 ;
printf("\n %f dollars = %f pounds",dollars , pounds);
getch();
return 0;
}