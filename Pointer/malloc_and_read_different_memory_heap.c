#include <stdio.h>
#include <stdlib.h>

int global; /* Uninitialized variable stored in bss*/
int main(void)
{
	int *arr = (int *)malloc(10*sizeof(int)); 
    for(int i=0; i<10; i++)
    {
    	arr[i] = i;
    }

    for(int i=0; i<10; i++)
    {
    	printf("%d\n", arr[i]);
    }

    printf("#######%d#############\n", *(arr+1000000000));

    return 0;
}
