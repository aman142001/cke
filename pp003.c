
//pp003: Write a program to input a number and check it to be even or odd using bitwise operator


#include<stdio.h>
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n&1)
        printf(" %d is odd",n);
	else
	printf(" %d is even",n);

}
//output
// enter the number
// 6
// 6 is even
