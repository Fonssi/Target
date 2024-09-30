#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int tamanho;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    tamanho = strlen(str);
    
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}