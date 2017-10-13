#include <cstdio>
#include <math.h>

int main()
{
    std::puts("please enter a, b and c for 'ax^2+bx+c=0':");
    float a = 0;
    float b = 0;
    float c = 0;
    std::scanf("%f %f %f", &a, &b, &c);
    float D = b * b - 4 * a * c;
    double DD = sqrt(D);
    float x1 = (-b + DD) / 2 * a;
    float x2 = (-b - DD) / 2 * a;
    std::printf("solution: %f %f\n", x1, x2);
}