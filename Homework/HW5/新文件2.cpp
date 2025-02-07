#include <stdio.h>
int main ()
{
    int t, i;
    long a, b;  
    for (i=1; i<=4;i++)
    {
    	scanf("%ld %ld", &a, &b);
    if (a < b)
        printf("<\n");
    if (a > b)
        printf(">\n");
    if (a==b)
        printf("=\n");
    if(a==0)
    return -1;
}
    return 0;
}
