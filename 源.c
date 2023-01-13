#include<stdio.h>
int main()
{
    int p[10] = {1,2,3,4,5,6,33,8,9,10};
    int* p1, * p2;
    p1 = &p[1];
    p2 = &p[5];
    printf("%p\n", p1);
    printf("%p\n", p2);
    printf("%d", *p2+3);
    return 0;
}
