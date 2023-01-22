#include<stdio.h>
int main()
{
    char choice;
    int a,b,c;
    printf("\n enter the choice=");
    scanf("%c",&choice);
    switch(choice)
    {
        case '1':
        
            printf("\n enter the value of a=");
            scanf("%d",&a);
            printf("\n enter the value of b=");
            scanf("%d",&b);
            c=a+b;
            printf("\n addition=%d",c);
            break;
        
        case '2':

            printf("\n enter the value of a=");
            scanf("%d",&a);
            printf("\n enter the value of b=");
            scanf("%d",&b);
            c=a-b;
            printf("\n substraction=%d",c);
            break;

        case '3':
            printf("\n enter the value of a=");
            scanf("%d",&a);
            printf("\n enter the value of b=");
            scanf("%d",&b);
            c=a*b;
            printf("\n multiplication=%d",c);
            break;
        case '4':
            printf("\n enter the value of a=");
            scanf("%d",&a);
            printf("\n enter the value of b=");
            scanf("%d",&b);
            c=a/b;
            printf("\n division=%d",c);
            break;
            default:
            printf("\ninvalid choice:\n enter the correct choice");
    }
        return 0;
}
