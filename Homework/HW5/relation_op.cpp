#include <stdio.h>
int main ()
{
    int t, i;
    long a, b;  
    while(1)
    {
    scanf("%ld %ld", &a, &b);
    if(a=0)
        break;
    if (a < b)
        printf("<\n");
    if (a > b)
        printf(">\n");
    if (a==b)
        printf("=\n");
}
    return 0; 
}
