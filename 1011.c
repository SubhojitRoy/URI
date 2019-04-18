#include <stdio.h>
int main()
{
    double pi, R, total;
    pi=3.14159;
    scanf("%lf",&R);
    total=(4/3.0)*(pi*(R*R*R));
    printf("VOLUME = %.3lf\n",total);
    return 0;
}
