#include <stdio.h>
int main() {
    int age, yr_Coti;
    float iddikhar;
  printf(" Age\nAnn�es de cotisation\nMontant total �pargn� (en euros)");

    scanf("%d %d %f", &age, &yr_Coti, &iddikhar);

    if (age >= 65 && yr_Coti >= 30 && iddikhar >= 100000)
        printf("Plan complet avec pension �lev�e");
    else if (age >= 65 && yr_Coti >= 20 && iddikhar >= 50000)
        printf("Plan partiel avec pension moyenne");
    else
        printf("Plan �pargne non encore disponible");

    if (iddikhar > 50000)
        printf(" avec bonus de %.2f", (iddikhar - 50000) * 0.05);

    return 0;
}
