#include<stdio.h>
main()
{
	int num;
	printf("Enter a number\t");
	scanf("%d",&num);
	switch(num%2){
		case 0: printf("%d is even",num);
		break;
		case 1: printf("%d is odd",num);
		break;	
	}
}
/* 
Enter a number 6
6 is even
*/
