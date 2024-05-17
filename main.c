#include <stdio.h>

void move_disco(int disco, char origem, char destino, char auxiliar) {
    if (disco == 1) {   
        printf("Move o disco %d da torre %c para a torre %c\n", disco, origem, destino);
    } else {
        move_disco(disco - 1, origem, auxiliar, destino);
        printf("Move o disco %d da torre %c para a torre %c\n", disco, origem, destino);
        move_disco(disco - 1, auxiliar, destino, origem);
    }
}

int main() {
    int discos = 64;
    move_disco(discos, 'A', 'C', 'B');
    //a = origem
    //c = destino
    //b = pino auxiliar/meio
    return 0;
}
//2^n-1
//2^3-1=7
