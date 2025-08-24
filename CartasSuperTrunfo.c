#include <stdio.h>
int main(){
     printf(" Desafio cartas super trunfo!\n ");
     printf("NOVO commit\n");
     printf("Carta 01\n" );

     char Estado[20] = "Bahia";
     char Código[20] = "A01";
     char Nomedacidade[20] = "salvador";
     int População = 14850513;
     float Área = 567.295;
     float PIB = 352.618;
     int Pontosturisticos =13;

     printf("Estado: ");
     scanf("%s", Estado);

     printf("Código: ");
     scanf("%s", Código);

     printf("Nome da cidade: ");
     scanf("%s", Nomedacidade);

     printf("População: ");
     scanf("%d", &População);

     printf("Area total: ");
     scanf("%f", &Área);

     printf("PIB: ");
     scanf("%f", &PIB);

     printf("Numeros de pontos turisticos: ");
     scanf("%d", &Pontosturisticos);

     printf("Estado: %s - Código da carta: %s\n", Estado, Código);
     printf("Nome da cidade: %s - População: %d\n", Nomedacidade, População);
     printf("Area total: %.3f - PIB: %.3f\n", Área, PIB);
     printf("Numeros de pontos turisticos: %d", Pontosturisticos);

     
     
     

}