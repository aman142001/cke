
/pp002: Write a program to input a number and check it to be even or odd using switch statement./

#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
		switch(n%2){
		case 0: printf(" %d is even",n);
		        break;
		case 1: printf(" %d is odd number",n);
		        break;
	}
}

/output
8
8 is even./
