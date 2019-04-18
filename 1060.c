#include<stdio.h>
int main()
{
    double a;
    int b,c=0;
    for(b=0;b<=5;b++){
        scanf("%lf",&a);
        if(a>0){
            c++;
        }
    }
    printf("%d valores positivos\n",c);
    return 0;

}
