#include <stdio.h>

void ver(int values[])
{
    printf("dentro: %zu\n", sizeof(values));
}

int main(void)
{
    int arr[] = {1, 2, 3};
    int (*p) [3] = &arr;
    int *b = &arr[0];
    int *c = &arr[1];
    printf("en main: %zu\n", sizeof(arr));
    printf("sumando 0, ya pasa decay: %zu\n", sizeof (arr+0));
    ver(arr);
    printf("p = %p\n", (void *)p);
    printf("p+1 = %p\n", (void *)(p+1));
    printf("b = %p\n", (void *)b);
    printf("b+1 = %p\n", (void *)(b+1));
    printf("c = %p\n", (void *)c);
    return 0;
}
