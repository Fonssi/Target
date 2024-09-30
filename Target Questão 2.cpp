#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
    int a = 0, b = 1, aux, i, n;
    
    printf("Digite o numero de elementos da sequencia: ");
    scanf("%d", &n);
    
    printf("\nFibonacci ate o %d elemento:\n\n", n);
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        aux = a + b;
        a = b;
        b = aux;

        printf("%d\n", aux);
    }
}