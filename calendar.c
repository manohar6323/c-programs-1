#include <stdio.h>
int isLeap(int y) {
    return (y%4==0 && y%100!=0)
}
int main() {
    int year = 2026;
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *m[] = {"Jan","Feb","Mar","Apr","May","Jun",
                 "Jul","Aug","Sep","Oct","Nov","Dec"};
    int d = 1; 
    for (int i = 0; i < 12; i++) {
        printf("\n  %s %d\nSun Mon Tue Wed Thu Fri Sat\n", m[i], year);
        if (i == 1 && isLeap(year)) days[i] = 29;
        for (int s = 0; s < d; s++) printf("    ");
        for (int day = 1; day <= days[i]; day++) {
            printf("%3d ", day);
            if (++d % 7 == 0) printf("\n");
        }
        d %= 7;
        printf("\n");
    }
    return 0;
}
