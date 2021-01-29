#include<stdio.h>
main()
{
	int num;
	printf("Enter a number\t");
	scanf("%d",&num);
	if (num & 1 ==1)
	printf("%d is odd",num);
	else 
	printf("%d is even",num);
}
/* 
Enter a number 8
8 is even
*/
