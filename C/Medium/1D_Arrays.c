#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n=0,a=0,sum=0,i=0;
        
    scanf("%d",&n);
    
    int* arr=(int*)malloc(n*sizeof(int));
    
    while(a<n)
    {
        scanf("%d",&arr[a]);
        sum=sum+arr[a];
        a++;
    }
    free(arr);
    printf("%d",sum);
    return 0;
}

