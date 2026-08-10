

#include <stdio.h>

int main()
{
    int arr[10];//={10,20,30,40,50};
    int sum=0;
    int cnt=0;
    int cnt1=0;
    int evensum=0;
    int oddsum=0;
    
    int i;
    
    printf("\n Enter Any 10 Numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<=9;i++)
   {
    if(arr[i]%2==0)
    {
        evensum=evensum+arr[i];
        cnt++;
        
        
    }
    
     else 
    {
       oddsum=oddsum+arr[i];
       cnt1++;
    }
    
  }        
    
    
   
      printf("\n Count of even numbers :%d",cnt);
      printf("\n Count of odd numbers :%d",cnt1);
      
      printf("\n Sum of Even Number :%d",evensum);
      printf("\n Sum of Odd Number :%d",oddsum);
    

    return 0;
}