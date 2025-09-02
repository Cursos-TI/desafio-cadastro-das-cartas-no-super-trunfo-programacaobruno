
     #include <stdio.h>

     int main(){

          printf("Desafio cartas super trunfo!\n ");
          printf("Novo Commit\n\n");
          printf("******CADASTRO DA CARTA 1******\n");

          char Estado_1[20] = "Bahia";
          char Código_1[20] = "A01";
          char Nomedacidade_1[20] = "Salvador";
          int População_1 = 14850511;
          float Área_1 = 567.295;
          float PIB_1 = 352.618;
          int Pontosturisticos_1 = 13;

          char Estado_2[20] = "Ceará";
          char Código_2[20] = "B02";
          char Nomedacidade_2[20] = "Fortaleza";
          int População_2 = 9233656;
          float Área_2 = 148.886;
          float PIB_2 = 213.603;
          int Pontosturisticos_2 = 14;

          printf("Estado:\n ");
          scanf("%s", Estado_1);

          printf("Código:\n ");
          scanf("%s", Código_1);

          printf("Nome da Cidade:\n ");
          scanf("%s", Nomedacidade_1);

          printf("População:\n ");
          scanf("%d", &População_1);

          printf("Area Total:\n ");
          scanf("%f", &Área_1);

          printf("PIB:\n ");
          scanf("%f", &PIB_1);

          printf("Numeros de pontos turisticos:\n ");
          scanf("%d", &Pontosturisticos_1);

          printf("******CADASTRO DA CARTA 2******\n");

          printf("Estado:\n ");
          scanf("%s", Estado_2);

          printf("Código:\n ");
          scanf("%s", Código_2);

          printf("Nome da Cidade:\n ");
          scanf("%s", Nomedacidade_2);

          printf("População:\n ");
          scanf("%d", &População_2);

          printf("Area Total:\n ");
          scanf("%f", &Área_2);

          printf("PIB:\n ");
          scanf("%f", &Área_2);

          printf("Numeros de pontos turisticos:\n ");
          scanf("%d", &Pontosturisticos_2);

          printf("******DADOS DA CARTA 1******\n");
          printf("Estado: %s - Código da carta: %s\n", Estado_1, Código_1);
          printf("nome da Cidade: %s - População: %d\n", Nomedacidade_1, População_1);
          printf("Área Total: %.3f - PIB: %.3f\n", Área_1, PIB_1);
          printf("Numeros de pontos turisticos: %d\n", Pontosturisticos_1);

          printf("******DADOS DA CARTA 2******\n");
          printf("Estado: %s - Código da Carta: %s\n", Estado_2, Código_2);
          printf("Nome da cidade: %s - População: %d\n", Nomedacidade_2, População_2);
          printf("Area total: %.3f - PIB: %.3f\n", Área_2, PIB_2);
          printf("Numeros de pontos turisticos: %d", Pontosturisticos_2);

          return 0;

     }






          






   


     
