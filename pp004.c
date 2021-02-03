#include<stdio.h>
struct number{
	unsigned n : 1;
}; 
main(){
	int num;
	struct number x;
	printf("Enter a number");
	scanf("%d",&num);
	x.n=num;
	if(x.n)
		printf("%d is odd",num);
	else
		printf("%d is even",num);	
}

/*
Enter a number 58
58 is even
*/
