#include <stdio.h>

int main() 
{

    int n=10;
    int *ptr=&n;

    printf("\n value of n using pointer =%d",*ptr);
    printf("\n Address of n using pointer =%u",ptr);
    

    
    return 0;
}
