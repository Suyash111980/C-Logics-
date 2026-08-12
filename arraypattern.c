/* 10 20 30 40 50
   50 10 20 30 40
   40 50 10 20 30
   30 40 40 10 20
   20 30 40 50 10
   10 20 30 40 50*/




#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,j,temp;

    

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[j]);
        }

        printf("\n");
        temp=a[4];

         for(j=4;j>0;j--)
        {
            a[j]=a[j-1];
        }

        a[0]=temp;

    }    

        

        

       
         
         
         return 0;
}