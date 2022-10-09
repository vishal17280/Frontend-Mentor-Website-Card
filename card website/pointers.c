#include<stdio.h>

int main()
{
    int a = 7;
    int* address = &a;
    int** x = &address;
    printf("Address variable storing the address of a : %d\n",*address);

    printf("Address of a : %p\n",&a);
    
    printf("Address of Address variable is : %p",&address);
    return 0;
}