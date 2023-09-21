#include <stdio.h>
int main() {
    char a[] = "Beauty city Ahmedabad!!";
    int i;
    for (i = 0; a[i] != '\0'; ++i);
    printf("Length of the string: %d", i);
    return 0;
}


