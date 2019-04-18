#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, a, b, c;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    a = x2-x1;
    b = y2-y1;
    c = sqrt((a*a)+(b*b));
    printf("%.4lf\n",c);
    return 0;
}
