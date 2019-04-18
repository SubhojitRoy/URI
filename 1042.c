#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&b<c&&a<c)
    {
        printf("%d\n%d\n%d\n",a,b,c);
    }
    else if(c>a&&c<b&&a<b)
    {
        printf("%d\n%d\n%d\n",a,c,b);
    }
    else if(a>b&&a<c&&b<c)
    {
        printf("%d\n%d\n%d\n",b,a,c);
    }
    else if(c>b&&c<a&&b<a)
    {
        printf("%d\n%d\n%d\n",b,c,a);
    }
    else if(a>c&&a<b&&c<b)
    {
        printf("%d\n%d\n%d\n",c,a,b);
    }
    else if(b>c&&b<a&&c<a)
    {
        printf("%d\n%d\n%d\n",c,b,a);
    }
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;

}
