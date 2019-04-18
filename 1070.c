#include<stdio.h>
int main()
{
    int i,n,c=0,d;
    scanf("%d",&n);
    for(i=n+1;i<=n+6;i++){

        if(n!=0){
            c++;
        }
    }
    printf("%d valores pares\n",c);
    return 0;

}
