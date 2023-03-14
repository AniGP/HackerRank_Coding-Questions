#include <stdio.h>

int main()
{
    int i, t;
    scanf("%d", &t); // Number of Inputs

    long long int a;

    for (int i=0; i<t; i++) 
    {
        scanf("%lld", &a); // Enter Numbers
        a = 4294967295 - a; // 2^32 - 1
        printf("%lld\n", a);
    
    }

    return 0;
}