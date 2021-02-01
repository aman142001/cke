//pp006: Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.

#include<stdio.h>
main(){
	int e[10],i;
	for (i=0;i<10;i++){
		scanf("%d",&e[i]);
	}
	printf("even numbers from 1 to 10");
	for (i=0;i<10;i++){
		if(e[i]%2==0)
		
		printf("%d",e[i]);
	}
}
 //output 
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//even numbers from 1 to 10
//2 4 6 8 10

