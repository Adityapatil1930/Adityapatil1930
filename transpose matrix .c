#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][3],i,j;
clrscr();
printf("\n Enetr Array elements");
for(i=0;i<2;<i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n matrix a is:\n");
for(i=0;i<2;i++)
{
forj=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n ");
}
printf("\n Transpose Matrix of a is :\n");
for(i=0;i<3i++)
{
forj=0;j<2;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
getch();
}
