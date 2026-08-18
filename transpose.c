#include<stdio.h>

int main()
{
    
    int i,j;
    int a[3][3];
    

   

    
    
            printf("\n Enter Elements in matrix 1 : \n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%5d",&a[i][j]);
                }

                printf("\n");
            }

           
       
         
            for(j=0;j<3;j++)
            {
                for(i=0;i<3;i++)
                {
                    printf("%5d",a[i][j]);
                }

                printf("\n");
            }
            
            

    




    return 0;
}