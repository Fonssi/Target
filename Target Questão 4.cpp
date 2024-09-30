#include <stdio.h>

int main() {
	
    
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;
   
    double total = sp + rj + mg + es + outros;
	
	double porcentagem_sp = (sp / total) * 100;
    double porcentagem_rj = (rj / total) * 100;
    double porcentagem_mg = (mg / total) * 100;
    double porcentagem_es = (es / total) * 100;
    double porcentagem_outros = (outros / total) * 100;

   
    printf("Valor total mensal: R$%.2f\n", total);
    printf("Percentual de representacao por estado:\n");
    
    printf("  SP: %.2f%%\n", porcentagem_sp);
    printf("  RJ: %.2f%%\n", porcentagem_rj);
    printf("  MG: %.2f%%\n", porcentagem_mg);
    printf("  ES: %.2f%%\n", porcentagem_es);
    printf("  Outros: %.2f%%\n", porcentagem_outros);

    return 0;
}