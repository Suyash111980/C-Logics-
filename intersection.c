#include<stdio.h>
#define max 20
int main()
{
    int set1[max],  set2[max] , set3[max];
    int i,j,k;
    int l1,l2,l3;
    int flag;

    printf("\n Enter how many numbers u want in set 1 :");
    scanf("%d",&l1);

    printf("\n Enter  Numbers in set 1");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&set1[i]);
    }

     printf("\n Enter how many numbers u want in set 2 :");
    scanf("%d",&l2);

    printf("\n Enter  Numbers in set 2");
    for(i=0;i<l2;i++)
    {
        scanf("%d",&set2[i]);
    }

    k=0;

    for(i=0;i<l1;i++) 
    {
       flag=0;

        for(j=0;j<l2;j++)  
        {
            if(set1[i]==set2[j])
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            set3[k]=set1[i];
            k++;

        }
    }

    printf("\n Intersection");

    for(i=0;i<k;i++)
    {
        printf("\n %d",set3[i]);
    }

    

    return 0;
}    