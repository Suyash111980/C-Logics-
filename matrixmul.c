#include<stdio.h>

int main()
{
    
    int i,j,k;
    int a[2][3];
    int b[3][4];
    int c[2][4] = {0} ;
    

    

    
     
            printf("\n Enter Elements in matrix 1 : \n");
            for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%5d",&a[i][j]);
                }

                printf("\n");
            }
            
            printf("\n Enter Elements in matrix 2 : \n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<4;j++)
                {
                    scanf("%5d",&b[i][j]);
                }

                printf("\n");  
            }

           
       
         
            for(i=0;i<2;i++)
            {
                for(k=0;k<4;k++)
                {
                    for(j=0;j<3;j++)
                    {
                        c[i][k]=c[i][k]+(a[i][j]*b[i][k]);
                    }
                }
            }
                
                printf("\n");
                
                
                for(i=0;i<2;i++)
                {
                    for(k=0;k<4;k++)
                    {
                        printf("%5d",c[i][k]);
                    }
                    printf("\n");
                }
               
            
            
            

    




    return 0;
}