#include <stdio.h>
typedef struct complexNumber {
    int real;
    int img;
} complex;
complex add(complex x, complex y)
{
    complex add;
    add.real = x.real + y.real;
    add.img = x.img + y.img;
    return (add);
}
int main()
{
    complex x, y, sum;
    x.real = 4;
    x.img = 5;
    y.real = 7;
    y.img = 11;
    printf(" x = %d + %di\n", x.real, x.img);
    printf(" y = %d + %di\n", y.real, y.img);
    sum = add(x, y);
    printf("\n sum = %d + %di", sum.real, sum.img);
    return 0;
}
