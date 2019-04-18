#include<stdio.h>
#include <stdlib.h>
int main()
{
    float N1,N2,N3,N4;
    float nota,mediafinal,media;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);

    N1*=2;
    N2*=3;
    N3*=4;
    N4*=1;
    media=(N1+N2+N3+N4)/(2+3+4+1);
    printf("Media: %.1f\n",media);
    if(media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if((media>=5.0)&&(media<7.0))
    {
        printf("Aluno em exame.\n");

        scanf("%f",&nota);
        printf("Nota do exame: %.1f\n",nota);

        mediafinal = (nota+media) / 2;

        if(mediafinal>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(mediafinal<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",mediafinal);
    }
    return 0;
}
