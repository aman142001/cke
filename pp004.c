
//pp004: Write a program to input a number and check it to be even or odd without using any arithmetic, relational, logical or bitwise operator.

#include<stdio.h>
struct oddeven{
	unsigned n:1;
};
main(){
	int numb;
	struct oddeven a;
	scanf("%d",&numb);
	a.n=numb;
	if(a.n)
	printf(" %d is odd number",numb);
	else
	printf(" %d is even number",numb);
	
	
}
/output
14
14 is even number
15
15 is odd number./

