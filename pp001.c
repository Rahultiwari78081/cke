#include<stdio.h>
main()
{
	int num;
	printf("Enter a number\t");
	scanf("%d",&num);
	if(num%2==0)
	printf("%d is even",num);
	else
	printf("%d is odd",num);
}
/* 
Enter a number 5
5 is odd
*/
