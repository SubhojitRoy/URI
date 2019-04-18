/*
#include<stdio.h>
int main()
{
    double N;
    int a;

    scanf("%lf",&N);
    a=N/100;

    printf("NOTAS:\n");


    printf("%d nota(s) de R$ 100.00\n",a);
    N=N-(a*100);

    a=N/50;
    printf("%d nota(s) de R$ 50.00\n",a);
    N=N-(a*50);

    a=N/20;
    printf("%d nota(s) de R$ 20.00\n",a);
    N=N-(a*20);

    a=N/10;
    printf("%d nota(s) de R$ 10.00\n",a);
    N=N-(a*10);

    a=N/5;
    printf("%d nota(s) de R$ 5.00\n",a);
    N=N-(a*5);

    a=N/2;
    printf("%d nota(s) de R$ 2.00\n",a);
    N=N-(a*2);

    printf("MOEDAS:\n");

    a=N/1;
    printf("%d moeda(s) de R$ 1.00\n",a);
    N=N-(a*1);

    a=N/0.50;
    printf("%d moeda(s) de R$ 0.50\n",a);
    N=N-(a*.50);

    a=N/.25;
    printf("%d moeda(s) de R$ 0.25\n",a);
    N=N-(a*.25);

    a=N/.10;
    printf("%d moeda(s) de R$ 0.10\n",a);
    N=N-(a*.10);

    a=N/.05;
    printf("%d moeda(s) de R$ 0.05\n",a);
    N=N-(a*.05);

    a=N/.01;
    printf("%d moeda(s) de R$ 0.01\n",a);



    return 0;



}
*/


#include<stdio.h>
int main()
{
    double N;
    int a,b;

    scanf("%lf",&N);
    b=N*100;
    printf("NOTAS:\n");

    a=b/10000;
    printf("%d nota(s) de R$ 100.00\n",a);
    b=b%10000;

    a=b/5000;
    printf("%d nota(s) de R$ 50.00\n",a);
    b=b%5000;

    a=b/2000;
    printf("%d nota(s) de R$ 20.00\n",a);
    b=b%2000;

    a=b/1000;
    printf("%d nota(s) de R$ 10.00\n",a);
    b=b%1000;

    a=b/500;
    printf("%d nota(s) de R$ 5.00\n",a);
    b=b%500;

    a=b/200;
    printf("%d nota(s) de R$ 2.00\n",a);
    b=b%200;

    printf("MOEDAS:\n");

    a=b/100;
    printf("%d moeda(s) de R$ 1.00\n",a);
    b=b%100;

    a=b/50;
    printf("%d moeda(s) de R$ 0.50\n",a);
    b=b%50;

    a=b/25;
    printf("%d moeda(s) de R$ 0.25\n",a);
    b=b%25;

    a=b/10;
    printf("%d moeda(s) de R$ 0.10\n",a);
    b=b%10;

    a=b/05;
    printf("%d moeda(s) de R$ 0.05\n",a);
    b=b%05;

    a=b/01;
    printf("%d moeda(s) de R$ 0.01\n",a);



    return 0;

}

