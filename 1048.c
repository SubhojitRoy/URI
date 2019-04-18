#include <stdio.h>
int main()
{
    double salary;
    scanf("%lf",&salary);
    if(salary>=0&&salary<=400.00){
        printf("Novo salario: %.2lf\n",((salary * 15) / 100) + salary );
        printf("Reajuste ganho: %.2lf\n",(salary * 15) / 100 );
        printf("Em percentual: 15 %%\n");
    }else if(salary>=400.01&&salary<=800.00){
        printf("Novo salario: %.2lf\n",((salary * 12) / 100) + salary );
        printf("Reajuste ganho: %.2lf\n",(salary * 12) / 100 );
        printf("Em percentual: 12 %%\n");
    }else if(salary>=800.01&&salary<=1200.00){
        printf("Novo salario: %.2lf\n",((salary * 10) / 100) + salary );
        printf("Reajuste ganho: %.2lf\n",(salary * 10) / 100 );
        printf("Em percentual: 10 %%\n");
    }else if(salary>=1200.01&&salary<=2000.00){
        printf("Novo salario: %.2lf\n",((salary * 7) / 100) + salary );
        printf("Reajuste ganho: %.2lf\n",(salary * 7) / 100 );
        printf("Em percentual: 7 %%\n");
    }else if(salary>=2000){
        printf("Novo salario: %.2lf\n",((salary * 4) / 100) + salary );
        printf("Reajuste ganho: %.2lf\n",(salary * 4) / 100 );
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
