#include <stdio.h>
int main() {
    char str[100];
    char *p;
    int count = 0;
    printf("Enter string: ");
    gets(str);
    p = str;
    while (*p != '\0') {
        count++;
        p++;
    }
    printf("Length = %d\n", count);
    return 0;
}
