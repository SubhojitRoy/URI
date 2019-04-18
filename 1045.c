#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double A,B,C,X;
    double d,e,f;
    scanf("%lf%lf%lf",&A,&B,&C);
    if (A > B && A > C && B > C)
    {
        A=A;
        B=B;
        C=C;
    }
    if (A > B && A > C && C > B)
    {
        X = B;
        A = A;
        B = C;
        C = X;
    }
    if (B > A && B > C && A > C)
    {
        X = A;
        A = B;
        B = X;
        C = C;
    }
    if (B > A && B > C && C > A)
    {
        X = A;
        A = B;
        B = C;
        C = X;
    }
    if (C > A && C > B && A > B)
    {
        X = A;
        A = C;
        C = B;
        B = X;

    }
    if (C > A && C > B && B > A)
    {
        X = A;
        A = C;
        B = B;
        C = X;
    }
    d=B + C;
    e=A*A;
    f=B*B+C*C;
    //printf("%.2lf\n%.2lf\n%.2lf\n",A,B,C);

    if(A >= d)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(e==f)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(e>f)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(e<f)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((A==B)||(B==C)||(C==A))
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
