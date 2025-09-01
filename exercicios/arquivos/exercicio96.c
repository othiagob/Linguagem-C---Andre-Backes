#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arq;
    arq = fopen("naoExiste.txt", "r");
    if (arq == NULL) {
        perror("O seguinte erro aconteceu!\n");
    } else {
        fclose(arq);
    }

    return 0;
}
