//pp008: Write a program to input few numbers from command line and print all even numbers from given set of numbers.
#include<stdio.h>
main(int argc, char *argv[]){
    if(argc==1){
        printf("Syntax is :  <list of numbers >");
        return 1;
    }
    else{
        int i,a;
        for(i=1;i<argc;i++){
        	a=atoi(argv[i]);
            if(a%2==0){
            	printf("%d \n",a);
            	
			} 
		
            
        }
        
        return 0;
    }
}
/* output
Syntax is : <list of numbers>
2
8
6
7
13
17
15

2 8 6*/
