#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr=&arr[0];
    int i;

    printf("\n %u --> %d",(ptr+0),*(ptr+0));
    printf("\n %u --> %d",(ptr+1),*(ptr+1));
    printf("\n %u --> %d",(ptr+2),*(ptr+2));
    printf("\n %u --> %d",(ptr+3),*(ptr+3));
    printf("\n %u --> %d",(ptr+4),*(ptr+4));

    printf("\n\n-----------------------------\n\n");

    for(i=0;i<5;i++)
    {
        printf("\n %u --> %d",(ptr+i),*(ptr+i));
    }



    return 0;
}