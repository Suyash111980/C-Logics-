#include<stdio.h>
int main()
{

    int i,n,rev=0,r;

    printf("\nEnter Any Number ");
    scanf("%d",&n);

    for(i=1;n!=0;i++)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }

    printf("\n Reverse Number  :%d",rev);
    return 0;
}
