#include <stdio.h>

int main()
{
    int p1, p2, np1, np2;
    float up1, up2, total;
    scanf("%d", &p1);
    scanf("%d", &np1);
    scanf("%f", &up1);
    scanf("%d", &p2);
    scanf("%d", &np2);
    scanf("%f", &up2);

    total = (np1*up1)+(np2*up2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
