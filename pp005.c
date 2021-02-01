//pp005: Write a program to input two numbers and print all even numbers in given range.

#include<stdio.h>
main()
{

int p,q,i;
printf("enter the range p & q");
scanf("%d%d",&p,&q);
for(i=p;i<=q;i++)
if(i%2==0)
printf("%d",i);
}
/ output
enter the range p & q
1
10
2 4 6 8 10
