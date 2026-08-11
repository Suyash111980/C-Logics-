#include <stdio.h>

int main()
{
    int arr[5];
    int i,j;
    int temp;
    
    printf("\n Enter 5 Numbers :");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<=4;i++)
    {
        for(j=1+1;j<=4;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
               
            }
            
        }
    }
    
 
    for(i=0;i<=4;i++)
    {
        printf("\n \t %d",arr[i]);
    }
    

    return 0;
}