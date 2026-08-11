

#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    int sum=0;
     float avg;
    
    printf("\n Enter 10 salary");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        
        sum=sum+arr[i];
        avg=sum/10;
        
        
    }
    
    printf("\n avg =%f",avg);
    
    printf("\n Above Average Salaries \n");
    
    for(i=0;i<=9;i++)
    {
        if(avg<arr[i])
        {
            printf("\n=%d",arr[i]);
        }
    }
    

    return 0;
}