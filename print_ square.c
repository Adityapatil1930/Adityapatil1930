#include<stdio.h>
int main()
{
    int square;
    int calsquare();
    square=calsquare();
    printf("\n square is %d",square);
    return 0;
}
int calsquare()
{
    int no,ans;
    printf("\n Enter the no:");
    scanf("%d",&no);
    ans=no*no;
    return ans;
}
