#include <stdio.h>

int main() {
    char pais1[20], pais2[20];
    int pontos1, pontos2, escolha1, escolha2;
    float densidade1, pib1, area1, densidade2, pib2, area2;
    unsigned long int populacao1, populacao2;

    // Entrada de dados do primeiro país
    printf("Digite o nome do primeiro país: \n");
    scanf(" %s", pais1);
    printf("Informe a população desse país: \n");
    scanf(" %lu", &populacao1);
    printf("Informe a área desse país em km²: \n");
    scanf(" %f", &area1);
    printf("Informe o PIB desse país: \n");
    scanf(" %f", &pib1);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;

    // Entrada de dados do segundo país
    printf("\nDigite o nome do segundo país: \n");
    scanf(" %s", pais2);
    printf("Informe a população desse país: \n");
    scanf(" %lu", &populacao2);
    printf("Informe a área desse país em km²: \n");
    scanf(" %f", &area2);
    printf("Informe o PIB desse país: \n");
    scanf(" %f", &pib2);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;

    // ----- MENU 1 -----
    printf("\nMENU PRINCIPAL:\n");
    printf("Selecione o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha1);

    // ----- MENU 2 -----
    printf("\nSelecione o SEGUNDO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha2);

    // trava se repetiu
    if (escolha1 == escolha2) {
        printf("Você já selecionou esse atributo anteriormente. Reinicie e escolha outro!\n");
        return 0; // encerra o programa
    }

    // variáveis para guardar valores comparados
    float valor1_a = 0, valor2_a = 0, valor1_b = 0, valor2_b = 0;

    // ----- ATRIBUTO 1 -----
    switch (escolha1) {
        case 1: valor1_a = populacao1; valor2_a = populacao2; break;
        case 2: valor1_a = area1; valor2_a = area2; break;
        case 3: valor1_a = pib1; valor2_a = pib2; break;
        case 4: valor1_a = pontos1; valor2_a = pontos2; break;
        case 5: valor1_a = densidade1; valor2_a = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ----- ATRIBUTO 2 -----
    switch (escolha2) {
        case 1: valor1_b = populacao1; valor2_b = populacao2; break;
        case 2: valor1_b = area1; valor2_b = area2; break;
        case 3: valor1_b = pib1; valor2_b = pib2; break;
        case 4: valor1_b = pontos1; valor2_b = pontos2; break;
        case 5: valor1_b = densidade1; valor2_b = densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ----- COMPARA ATRIBUTO 1 -----
    printf("\n===== RESULTADO PARCIAL =====\n");
    if (escolha1 == 5) { // densidade: menor vence
        printf("Densidade Populacional:\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, valor1_a, pais2, valor2_a);
        if (valor1_a < valor2_a) {
            printf("Vencedor neste atributo: %s\n", pais1);
        } else if (valor2_a < valor1_a) {
            printf("Vencedor neste atributo: %s\n", pais2);
        } else {
            printf("Empate neste atributo!\n");
        }
    } else {
        printf("Atributo escolhido:\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, valor1_a, pais2, valor2_a);
        printf("Vencedor neste atributo: %s\n", valor1_a > valor2_a ? pais1 : (valor2_a > valor1_a ? pais2 : "Empate"));
    }

    // ----- COMPARA ATRIBUTO 2 -----
    if (escolha2 == 5) { // densidade: menor vence
        printf("\nDensidade Populacional:\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, valor1_b, pais2, valor2_b);
        if (valor1_b < valor2_b) {
            printf("Vencedor neste atributo: %s\n", pais1);
        } else if (valor2_b < valor1_b) {
            printf("Vencedor neste atributo: %s\n", pais2);
        } else {
            printf("Empate neste atributo!\n");
        }
    } else {
        printf("\nAtributo escolhido:\n");
        printf("%s: %.2f | %s: %.2f\n", pais1, valor1_b, pais2, valor2_b);
        printf("Vencedor neste atributo: %s\n", valor1_b > valor2_b ? pais1 : (valor2_b > valor1_b ? pais2 : "Empate"));
    }

    // ----- SOMA DOS ATRIBUTOS -----
    float soma1 = valor1_a + valor1_b;
    float soma2 = valor2_a + valor2_b;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s -> Soma dos atributos = %.2f\n", pais1, soma1);
    printf("%s -> Soma dos atributos = %.2f\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("\nO país vencedor é: %s!\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nO país vencedor é: %s!\n", pais2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}