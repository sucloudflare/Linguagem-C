#include <stdio.h>

int main() {
    int linhas, espacos, asteriscos;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++) {
        for (espacos = 1; espacos <= linhas - i; espacos++) {
            printf(" ");
        }
        for (asteriscos = 1; asteriscos <= 2 * i - 1; asteriscos++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int linhas, espacos, asteriscos;

    printf("Digite o número de linhas das pirâmides: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++) {
        for (espacos = 1; espacos <= linhas - i; espacos++) {
            printf(" ");
        }
        for (asteriscos = 1; asteriscos <= 2 * i - 1; asteriscos++) {
            printf("*");
        }
        for (int j = 1; j <= linhas - i; j++) {
            printf(" ");
        }
        printf(" ");
        for (int k = 1; k <= linhas - i; k++) {
            printf(" ");
        }
        for (asteriscos = 1; asteriscos <= 2 * i - 1; asteriscos++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
