#include <stdio.h>

int main() {
    int a = 10;
    double b = 3.14;
    float c = 2.71f;
    char d = 'A';

    printf("aの値は%d、大きさは%zu byte、アドレスは%p\n", a, sizeof(int), (void*)&a);
    printf("bの値は%lf、大きさは%zu byte、アドレスは%p\n", b, sizeof(double), (void*)&b);
    printf("cの値は%f、大きさは%zu byte、アドレスは%p\n", c, sizeof(float), (void*)&c);
    printf("dの値は%c、大きさは%zu byte、アドレスは%p\n", d, sizeof(char), (void*)&d);

    return 0;
}
