#include <stdio.h>
int main(){
     printf(" Desafio cartas super trunfo!\n ");
     printf("NOVO commit\n");
     printf("Carta 01\n" );

     char Estado[20] = "Bahia";
     char Código[20] = "A01";
     char Nomedacidade[20] = "salvador";
     int População = 14850512;
     float Área = 567.295;
     float PIB = 352.618;
     int Pontosturisticos =13;

     printf("Estado:\n ");
     scanf("%s", Estado);

     printf("Código:\n ");
     scanf("%s", Código);

     printf("Nome da cidade:\n ");
     scanf("%s", Nomedacidade);

     printf("População:\n ");
     scanf("%d", &População);

     printf("Area total:\n ");
     scanf("%f", &Área);

     printf("PIB:\n ");
     scanf("%f", &PIB);

     printf("Numeros de pontos turisticos:\n ");
     scanf("%d", &Pontosturisticos);

     printf("Estado: %s - Código da carta: %s\n", Estado, Código);
     printf("Nome da cidade: %s - População: %d\n", Nomedacidade, População);
     printf("Area total: %.3f - PIB: %.3f\n", Área, PIB);
     printf("Numeros de pontos turisticos: %d\n", Pontosturisticos);

     
     
     
     

}