#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2][3],i,j,k;
  clrscr();
  printf("\n Enter the array element of a=\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      for(k=0;k<3;k++)
      {
        scanf("%d",&a[i][j][k]);
      }
    }
  }
  printf("\n 3D Array Matrix of a=\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      for(k=0;k<3;k++)
      {
         printf("%d\t",a[i][j][k]);
      }
      printf("\n ");
    }
    printf("\n");
  }
  getch();
}
