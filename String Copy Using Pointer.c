#include <stdio.h>
int main() {
    char s1[100], s2[100];
    char *p1, *p2;
    printf("Enter source string: ");
    gets(s1);
    p1 = s1;
    p2 = s2;
    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("Copied string: %s\n", s2);
    return 0;
}
