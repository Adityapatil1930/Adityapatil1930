#include<stdio.h>
int main()
{
    float si;
   float calsi();
    si=calsi();
    printf("\n simple interest is %.2f",si);
    return 0;
}
float calsi()
{
    float p,r,t,ans;
    printf("\n enter the principal:");
    scanf("%f",&p);
    printf("\n Enter the rate:");
    scanf("%f",&r);
    printf("\n Enter the time:");
    scanf("%f",&t);
    ans=(p*r*t)/100;
    return ans;
}
