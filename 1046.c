#include<stdio.h>
int main()
{
    int st,et,tt;
    scanf("%d%d",&st,&et);
    tt = et - st;
    if(tt<=0){
        tt = 24 + tt;
        printf("O JOGO DUROU %d HORA(S)\n",tt);
    }else {
        printf("O JOGO DUROU %d HORA(S)\n",tt);
    }
    return 0;
}
