#include<stdio.h>
int main()
{
    char s[100];
    int i;
    printf("Enter the string:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("\n string in LOWER case=%s",s);
}
