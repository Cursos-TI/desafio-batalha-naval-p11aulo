#include <stdio.h>

int main(){

int index;

int tabuleiro [5][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
};
// posicionar o navio na horizontalmente
tabuleiro [0][2] = 1;
tabuleiro [1][2] = 1;
tabuleiro [2][2]= 1;

printf("cordenadas do navio vertical:\n");
printf("(%d,%d)\n", 0,2);
printf("(%d,%d)\n", 1,2);
printf("(%d,%d)\n", 2,2);

 printf("cordenada do navio horizontal:\n");
 printf("(%d,%d)\n", 2,0);
 printf("(%d,%d)\n", 2,1);
 printf("(%d,%d)\n", 2,2);

    return 0;
}