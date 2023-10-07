#include <stdio.h>
#include <string.h>
  
int main() {
   char a[100], rev[100];
 
   printf("Enter the string\n");
   scanf("%s", a);
   strcpy(rev,a);
   strrev(rev);
    
   if(strcmp(a,rev) == 0 )
      printf("%s is a palindrome.\n", a);
   else
      printf("%s is not a palindrome.\n",rev);
       
   return 0;
}
