#include <stdio.h>
int main()
{
    double salary,a;
    scanf("%lf",&salary);
    if(salary<=2000.00){
        printf("Isento\n");
    }else if(salary<=3000.00){
        a=(salary-2000)*0.08;
        printf("R$ %.2lf\n",a);
    }else if(salary<=4500.00){
        a=(1000*.08)+(salary-3000)*.18;
        printf("R$ %.2lf\n",a);
    }else if(salary>4500.00){
        a=(1000*0.08)+(1500*.18)+(salary-4500)*.28;
        printf("R$ %.2lf\n",a);
    }

    return 0;
}
