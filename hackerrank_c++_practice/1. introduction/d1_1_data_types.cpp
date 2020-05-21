#include <iostream>
using namespace std;

// You can also use cin and cout instead of scanf and printf; however,
// if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n", a, b, c, d, e);
    return 0;
}