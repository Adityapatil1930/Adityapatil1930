#include<stdio.h>
int main()
{
    int rd;
    float area;
    float calarea(int);
    printf("\n Enter the radius:");
    scanf("%d",&rd);
    area=calarea(rd);
    printf("Area:%.2f",area);
    return 0;
}
float calarea(int r)
{
    float ar;
    ar=3.142*r*r;
    return ar;
}
