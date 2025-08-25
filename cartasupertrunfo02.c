#include <stdio.h>
int main(){
    printf("Desafio Cartas Super Trunfo!\n ");
    printf("NOVO commit\n");
    printf("carta 02\n");

    char estado[20] = "Ceará";
    char Código[20] = "B02";
    char Nomedacidade[20] = "Fortaleza";
    int População = 9233656;
    float Área =148.886;
    float PIB = 213.602;
    int Pontosturisticos = 14;
    
    printf("Estado:\n ");
    scanf("%s", estado);

    printf("Código:\n ");
    scanf("%s", Código);
    
    printf("Nome da Cidade:\n ");
    scanf("%s", Nomedacidade);

    printf("População:\n ");
    scanf("%d", &População);

    printf("Area total:\n ");
    scanf("%f", &Área);

    printf("PIB:\n ");
    scanf("%f", &PIB);

    printf("Numeros de pontos turisticos:\n ");
    scanf("%d", &Pontosturisticos);

    printf("Estado: %s - Código da carta: %s\n", estado, Código);
    printf("Nome da cidade: %s - População: %d\n",Nomedacidade, População);
    printf("area total: %.3f - PIB: %.3f\n", Área, PIB);
    printf("Numeros de pontos turisticos: %d", Pontosturisticos);


    return 0;

}