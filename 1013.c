#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, MaiorAB, MaiorCD;
    scanf("%d %d %d",&a,&b,&c);
    MaiorAB = (a+b+abs(a-b))/2;
    MaiorCD = (MaiorAB+c+abs(MaiorAB-c))/2;
    printf("%d eh o maior\n",MaiorCD);
    return 0;
}
