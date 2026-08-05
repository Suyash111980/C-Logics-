#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("\n Enter Any Number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("\n %d",i);
            sum=sum+i;
        }
    }

    if(sum==n)
    {
        printf("\n Perfect Nuumber");
    }

    else{
        printf("\n Not a Perfect Number ");
    }
    
    return 0;
}