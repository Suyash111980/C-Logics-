#include <stdio.h>

int main()
{
    int i,j,n,a=0,b=1,c;
    int temp;
    
    printf("Enter Number to print fibonacci");
    scanf("%d",&n);
    temp=n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("%5d",a);
          n=temp;
           c=a+b;
           a=b;
           b=c;
        }
        
        printf("\n");
        
    }
    
        
    
    

    return 0;
}

