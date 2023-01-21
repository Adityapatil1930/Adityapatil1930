#include<stdio.h>
int fibonacci(int);
int main()
{

    int n,c,i=0;

    printf("enter the number of term:\n");
    scanf("%d",&n);
    printf("\n fibonacci series:\n");
    for(c=1;c<=n;c++)
    {
        printf("%d\n",fibonacci(i));
        i++;
    }
}
int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fibonacci(n-1)+fibonacci(n-2));

}
