
     #include <stdio.h>

     int main(){

          printf("Desafio cartas super trunfo!\n ");
          printf("Novo Commit\n\n");
          printf("******CADASTRO DA CARTA 1******\n");

          char Estado_1[20] = "Bahia";
          char Código_1[20] = "A01";
          char Nomedacidade_1[20] = "Salvador";
          int População_1 = 1485051;
          float Área_1 = 56.729500;
          float PIB_1 = 35261.800;
          int Pontosturisticos_1 = 13;
          float densidadepopulacional_1;
          float PIBpercapita_1;
         

          char Estado_2[20] = "Ceará";
          char Código_2[20] = "B02";
          char Nomedacidade_2[20] = "Fortaleza";
          int População_2 = 9233656;
          float Área_2 = 14.886000;
          float PIB_2 = 21360.300;
          int Pontosturisticos_2 = 14;
          float densidadepopulacional_2;
          float PIBpercapita_2;

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

          printf("Numeros de pontos turisticos:\n\n ");
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

          printf("Numeros de pontos turisticos:\n\n ");
          scanf("%d", &Pontosturisticos_2);

          printf("******DADOS DA CARTA 1******\n\n");
          printf("Estado: %s - Código da carta: %s\n", Estado_1, Código_1);
          printf("nome da Cidade: %s - População: %d\n", Nomedacidade_1, População_1);
          printf("Área Total: %f - PIB: %.2f\n", Área_1, PIB_1);
          printf("Numeros de pontos turisticos: %d\n\n", Pontosturisticos_1);

          printf("******DADOS DA CARTA 2******\n\n");
          printf("Estado: %s - Código da Carta: %s\n", Estado_2, Código_2);
          printf("Nome da cidade: %s - População: %d\n", Nomedacidade_2, População_2);
          printf("Area total: %.3f - PIB: %.3f\n", Área_2, PIB_2);
          printf("Numeros de pontos turisticos: %d\n\n", Pontosturisticos_2);

          printf("*****Valor densidade populacional carta 1*****\n\n");
          densidadepopulacional_1 = (float)(População_1 / Área_1);
          printf("A densidade populacional da carta 1 é: %f\n\n", densidadepopulacional_1);

          printf("*****PIB per Capita da carta 1*****\n\n");
          PIBpercapita_1 = (float)(PIB_1 / População_1);
          printf("O PIB per capita da carta 1 é: %f\n\n", PIBpercapita_1);

          printf("*****Valor densidade populacional carta 2*****\n\n");
          densidadepopulacional_2 = (float)(População_2 / Área_2);
          printf("A densidade populacional da carta 2 é: %f\n\n", densidadepopulacional_2);

          printf("*****PIB per Capita da carta 2*****\n\n");
          PIBpercapita_2 = (float)(PIB_2 / População_2);
          printf("O PIB per capita da carta 2 é: %f\n\n", PIBpercapita_2);

          


        

          return 0;

     }






          






   


     
