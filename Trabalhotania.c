#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x,y;
    printf("aten��o!! o jogo deve funcionar da seguinte forma: \n mande aqui a localiza�ao das suas cordenadas!\n");
    printf("digite o valor de x :");
    scanf("%d",&x);
    printf("digite o valor de y :");
    scanf("%d",&y);
    if ((x>10 || x>-10) && (y>10 || y<-10))
    {printf("voce � ruinzinho de pontaria em meu fi");}
        else if ((x<=1 && x>=-1)&& (y<=1 && y>=-1))
    {printf("parabens!!! ganhou 10 pontos voce acertou o menor circulo!\n");}
        else if ((x<=5 && x>=-5) && (y<=5 && y>=-5))
    {printf("parabens!!! ganhou 5 pontos voce acertou o circulo meio!\n");}
        else if((x<=10 && x>=-10) && (y<=10 && y>=-10))
    {printf("parabens!!! ganhou 1 ponto voce acertou o circulo de fora!!\n");}
    return 0;
}
