#include<stdio.h>
#include<conio.h>
int main()
{
 int bytes,kilobytes,megabytes,gigabites;
 /* cconvert bbytes into kb,mb,tb */
 clrscr();
 printf("Enter value of bytes");
 scanf("%d",&bytes);
 kilobytes = 1024 * bytes;
 printf("%d = %d*1024",kilobytes, bytes);
 megabytes = 1024*1024*bytes;
 printf("%d = %d*1024*1024",megabytes,bytes);
 gigabites = 1024*1024*1024*bytes;
 printf("%d = %d *1024*1024*1024",gigabites,bytes);
 getch();
 return 0;
 }