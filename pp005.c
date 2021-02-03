#include <stdio.h>
int main()
{
    int i, n ,m;
    printf("Enter two number : ");
    scanf("%d%d", &n,&m);

    printf("Even numbers between %d to %d are: \n", n,m);
    if(m>n)
        for(i=n; i<=m; i++)
        {
            if(i%2 == 0)
            {
                printf("%d\t", i);
            }
        }
    else
        for(i=m; i<=n; i++)
        {
            if(i%2 == 0)
            {
                printf("%d\t", i);
            }
        }
    return 0;
}


/*
Enter two number : 1 6
Even numbers between 1 and 6 are:
2    4     6
*/
