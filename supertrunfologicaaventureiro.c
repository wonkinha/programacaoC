#include <stdio.h>

int main(){

//char estado1[4], estado2[4];
//char codigo1[5];
//char codigo2[5];
char pais1[20];
char pais2[20];
int pontos1, pontos2, escolha;
float densidade1, pib1, pibper1, area1, densidade2, pib2, pibper2, area2, superpoder1, superpoder2;
unsigned long int populacao1, populacao2;

//printf("Informe as letras que representam a sigla estado da cidade da PRIMEIRA CARTA: \n");
//scanf("%s",&estado1);
/*printf("Informe o codigo da cidade com tres caracteres: \n");
scanf(" %s", codigo1);*/
printf("Digite o nome do país: \n");
scanf(" %s",pais1);
printf("Informe a população desse país: \n");
scanf(" %lu",&populacao1);
printf("Informe a área desse país em km²: \n");
scanf(" %f" ,&area1);
printf("Informe o PIB desse país: \n");
scanf(" %f",&pib1);
printf("Informe a quantidade de pontos turísticos: \n");
scanf("%d", &pontos1);


densidade1 = (float) (populacao1 / area1);
//pibper1 = (float) (pib1 / populacao1);

/*printf("Estado: %s\n",estado1);
printf("Código: %s\n",codigo1);
printf("Cidade: %s\n",cidade1);
printf("População: %d\n",populacao1);
printf("Área: %.1f\n",area1);
printf("PIB: %.2f\n",pib1);
printf("Densidade populacional: %.2f\n",densidade1);
printf("PIB per cápita: %.2f\n",pibper1);*/



//printf("Informe as letras que representam a sigla do o estado da cidade da SEGUNDA CARTA: \n");
//scanf(" %s",&estado2);
/*printf("Informe o código do estado com tres caracteres: \n");
scanf(" %s", codigo2);*/
printf("Digite o nome do SEGUNDO país: \n");
scanf(" %s",pais2);
printf("Informe a população dessa cidade: \n");
scanf(" %lu",&populacao2);
printf("Informe a área dessa cidade em km²: \n");
scanf(" %f" ,&area2);
printf("Informe o PIB dessa cidade: \n");
scanf(" %f",&pib2);
printf("Informe a quantidade de pontos turísticos: \n");
scanf("%d", &pontos2);

densidade2 = (float) (populacao2 / area2);
//pibper2 = (float) (pib2 / populacao2);

//superpoder1 = (float) (populacao1 + area1 + pib1 + pibper1 + 1/densidade1);
//superpoder2 = (float) (populacao2 + area2 + pib2 + pibper2 + 1/densidade2);

printf("MENU PRINCIPAL: \n");
printf("Selecione qual atributo deseja comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numeros de pontos turísticos\n");
printf("5. Densidade Populacional.\n");
printf("Escolha um numero: \n");
scanf("%d", &escolha);

switch (escolha){
case 1:
printf("Vamos comparar a população dos dois países!\n");
    printf("O país %s tem a população de: %lu. \n", pais1, populacao1);
    printf("O país %s tem a população de: %lu. \n", pais2, populacao2);

    if(populacao1 > populacao2){
        printf("O país %s venceu!\n", pais1);
    } else if (populacao1 < populacao2){
        printf("o país %s venceu!\n", pais2);
    } else {
        printf("Os dois países empataram no atributo população. \n");
    }
break;

case 2:
    printf("Vamos comparar a área dos dois países!\n");
    printf("O país %s tem a área de: %f. \n", pais1, area1);
    printf("O país %s tem a área de: %f. \n", pais2, area2);

    if (area1 > area2){
        printf("O país %s venceu!\n", pais1);
    } else if (area1 < area2){
        printf("O país %s venceu!\n", pais2);
    } else {
        printf("Os dois países empataram no atributo área.\n");
    }
    break;

    case 3:
    printf("Vamos comparar o PIB dos dois países!\n");
    printf("O país %s tem o PIB de: %.2f. \n", pais1, pib1); 
    printf("O país %s tem o PIB de: %.2f. \n", pais2, pib2);

    if (pib1 > pib2){
        printf("O país %s venceu!\n", pais1);
    } else if (pib1 < pib2){
        printf("O país %s venceu!\n", pais2);
    } else {
        printf("Os dois países empataram no atributo área.\n");
    }
    break;

    case 4:
    printf("Vamos comparar o numero de pontos turisiticos dos dois países!\n");
    printf("O país %s tem o PIB de: %d. \n", pais1, pontos1); 
    printf("O país %s tem o PIB de: %d. \n", pais2, pontos2);

    if (pontos1 > pontos2){
        printf("O país %s venceu!\n", pais1);
    } else if (pontos1 < pontos2){
        printf("O país %s venceu!\n", pais2);
    } else {
        printf("Os dois países empataram no atributo pontos turísticos.");
    }
    break;

    case 5:
    printf("Vamos comparar a densidade populacional dos dois países!\n");
    printf("O país %s tem a densidade populacional de: %d. \n", pais1, densidade1); 
    printf("O país %s tem a densidade populacional de: %d. \n", pais2, densidade2);

    if (densidade1 > densidade2){
        printf("O país %s venceu!\n", pais2);
    } else if (densidade1 < densidade2){
        printf("O país %s venceu!\n", pais1);
    } else {
        printf("Os dois países empataram no atributo densidade populacionaç.");
    }
    break;

default: 
printf("Valor inválido, digite um numero de 1 a 4. \n");
}
}