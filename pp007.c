
//pp007: Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.

#include<stdio.h>
main(){
	
	int n;
	while(1){
		scanf("%d",&n);
		if(n==0)
		break;
		else{
			if(n%2==0)
	        printf(" %d is even number ",n);
         	else
	        printf(" %d is odd number",n);
		
		}
		
		
	}
	
}
/.output
4
4 is even number./
