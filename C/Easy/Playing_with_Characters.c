#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 500

int main() 
{
   char ch;
   scanf("%c", &ch);
   
   char s[20];
   scanf("%s",s);

   char str[MAX];
   //scanf("%[^\n]%*c",str);
   scanf(" %[^\n]s",str);
   printf("%c\n",ch);
   printf("%s\n",s);
   printf("%s",str);
  
   return 0;
}