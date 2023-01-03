#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2][2],b[2][2][2],c[2][2][2],i,j,k;
    clrscr();
    printf("\n Enter the element of a:");
    for(k=0;k<2;k++)
    {
       for(i=0;i<2;i++)
       {
          for(j=0;j<2;j++)
          {
            scanf("%d",&a[k][i][j]);
          }
        }
     }
     printf("\n  printf("\n Enter the element of b:");
    for(k=0;k<2;k++)
    {
       for(i=0;i<2;i++)
       {
          for(j=0;j<2;j++)
          {
            scanf("%d",&b[k][i][j]);
          }
        }
     }
     printf("\n Matrix of a:\n");
     for(k=0;k<2;k++)
     {
        for(i=0;i<2;i++)
        {
          for(j=0;j<2;j++)
          {
          printf("%d\t",a[k][i][j]);
          }
          printf("\n");
        }
        printf("\n");
      }
    printf("\n Matrix of b:\n");
     for(k=0;k<2;k++)
     {
        for(i=0;i<2;i++)
        {
          for(j=0;j<2;j++)
          {
          printf("%d\t",b[k][i][j]);
          }
          printf("\n");
         }
         printf("\n");
        }
    printf("\n Addition of a&b\n);
     for(k=0;k<2;k++)
     {
        for(i=0;i<2;i++)
        {
          for(j=0;j<2;j++)
          {
          c[k][i[]j]=a[k][i][j]+b[k][i][j];
          printf("%d\t",c[k][i][j]);
          }
          
          printf("\n ");
          }
          printf("\n");
          }
          getch();
          }
          
