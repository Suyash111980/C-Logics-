#include <stdio.h>

int main() 
{

    int n=10;
    int n1=10;
    int *ptr=&n;
    int *ptr1=&n1;
    int c;
    int *ptr2=&c;

    *ptr2 =*ptr+*ptr1;
    printf("\n Addition of two number using pointer =%d",*ptr2);

   
    

    
    return 0;
}
