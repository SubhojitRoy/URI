#include<stdio.h>
int main()
{
    double A,B,C,B2,R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);
    B2=(B*B)-(4*A*C);
    R1=(-B+sqrt(B2))/(2*A);
    R2=(-B-sqrt(B2))/(2*A);
    if(A!=0&&B2>0)
    {
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;

}
