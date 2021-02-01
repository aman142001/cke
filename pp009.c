//pp009: Write a program having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. Create the main() function  to input a number and check it to be even or odd using iseven() function.

#include<stdio.h>
int iseven(int n){
	if(n%2==0)
	   return 1;
	else
	   return 0;
}
main(){
	int num;
	scanf("%d",&num);
	iseven(num)? printf("  %d is even number ",num): printf(" %d is odd number",num);
}
/*output
4
4 is even number*/
