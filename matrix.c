#include<stdio.h>
int main()
{
    
    int i,j;
    int a[3][3];
    int b[3][3];
    int c[3][3];
 

 printf("\n Enter Elements in matrix 1 : \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        scanf("%5d",&a[i][j]);
    }

    printf("\n");
 }

 printf("\n Enter element in matrix 2 : \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        scanf("%5d",&b[i][j]);
    }

    printf("\n");
 }

 
 
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
       c[i][j]=a[i][j]+b[i][j];
    }

    
 }

 printf("\n Addition of 2 Matrix \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf("%5d",c[i][j]);
    }

    printf("\n");
 }





    return 0;
}