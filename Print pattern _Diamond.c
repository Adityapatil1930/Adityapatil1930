#include<stdio.h>
int main()
{
    int i,rows,space,k=0;
    printf("Enter the rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i,k=0)
    {
        for(space=1;space<=rows-i;++space)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
     for(i=rows;i>=1;--i,k=0)
    {
        for(space=1;space<=rows-i;++space)
        {
            printf(" ");
        }
         while(k!=2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
  return 0;
}
