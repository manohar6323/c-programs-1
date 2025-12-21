#include <stdio.h>
#include <string.h>
int length(char s[], int i)
{
    if (s[i] == '\0')
        return 0;
    return length(s, i + 1) + 1;
}
int main()
{
    char s[] = "GeeksforGeeks";
    int len = strlen(s);
    printf("length using strlen:%d\n", len);
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        continue;
    }
    printf("length using iteration:%d\n", i);
    int ans = length(s, 0);
    printf("length using recursion:%d\n", ans);
    return 0;
}
