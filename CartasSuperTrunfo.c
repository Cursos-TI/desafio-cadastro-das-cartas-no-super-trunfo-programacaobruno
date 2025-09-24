
     #include <stdio.h>

     int main(){

          printf("Desafio cartas super trunfo!\n ");
          printf("Novo Commit\n\n");
          printf("******CADASTRO DA CARTA 1******\n");

          char Estado_1[20] = "Bahia";
          char Código_1[20] = "A01";
          char Nomedacidade_1[20] = "Salvador";
          unsigned long int População_1 = 2485051;
          float Área_1 = 567294.50;
          float PIB_1 = 3526180.0;
          int Pontosturisticos_1 = 13;
          float densidadepopulacional_1 = (float) População_1 / Área_1;
          float PIBpercapita_1 = (float) PIB_1 / População_1;
          float SuperPoder_1;

          char Estado_2[20] = "Ceará";
          char Código_2[20] = "B02";
          char Nomedacidade_2[20] = "Fortaleza";
          unsigned long int População_2 = 1233656;
          float Área_2 = 148803.60;
          float PIB_2 = 2136030.0;
          int Pontosturisticos_2 = 14;
          float densidadepopulacional_2 = (float) População_2 / Área_2;
          float PIBpercapita_2 = (float) PIB_2 / População_2;
          float SuperPoder_2;

          printf("Estado:\n ");
          scanf("%s", Estado_1);

          printf("Código:\n ");
          scanf("%s", Código_1);

          printf("Nome da Cidade:\n ");
          scanf("%s", Nomedacidade_1);

          printf("População:\n ");
          scanf("%lu", &População_1);

          printf("Area Total:\n ");
          scanf("%f", &Área_1);

          printf("PIB:\n ");
          scanf("%f", &PIB_1);

          printf("Numeros de pontos turisticos:\n ");
          scanf("%d", &Pontosturisticos_1);

          printf("Densidade populacional:\n ");
          printf("%.3fhab/km2\n", densidadepopulacional_1);

          printf("PIB per Capita\n ");
          printf("%freais\n\n", PIBpercapita_1);

          printf("******CADASTRO DA CARTA 2******\n");

          printf("Estado:\n ");
          scanf("%s", Estado_2);

          printf("Código:\n ");
          scanf("%s", Código_2);

          printf("Nome da Cidade:\n ");
          scanf("%s", Nomedacidade_2);

          printf("População:\n ");
          scanf("%lu", &População_2);

          printf("Area Total:\n ");
          scanf("%f", &Área_2);

          printf("PIB:\n ");
          scanf("%f", &Área_2);

          printf("Numeros de pontos turisticos:\n ");
          scanf("%d", &Pontosturisticos_2);

          printf("densidade populacional:\n ");
          printf("%.3fhab/km2\n", densidadepopulacional_2);

          printf("PIB per Capita:\n ");
          printf("%freais\n\n", PIBpercapita_2);

          printf("******DADOS DA CARTA 1******\n\n");
          printf("Estado: %s - Código da carta: %s\n", Estado_1, Código_1);
          printf("nome da Cidade: %s - População: %lu\n", Nomedacidade_1, População_1);
          printf("Área Total: %.2fkm2 - PIB: %.2fbilhoes de reais\n", Área_1, PIB_1);
          printf("Numeros de pontos turisticos: %d\n", Pontosturisticos_1);
          printf("Densidade populacional: %.3fhab/km2\n", densidadepopulacional_1);
          printf("PIB per capita: %freais\n", PIBpercapita_1);
          SuperPoder_1 =(float) População_1 + Área_1 + PIB_1 + Pontosturisticos_1 + densidadepopulacional_1 + PIBpercapita_1;
          printf("SUPER PODER DA CARTA 1 É: %f\n\n", SuperPoder_1);
      

     
          printf("******DADOS DA CARTA 2******\n\n");
          printf("Estado: %s - Código da Carta: %s\n", Estado_2, Código_2);
          printf("Nome da cidade: %s - População: %lu\n", Nomedacidade_2, População_2);
          printf("Area total: %.2fkm2 - PIB: %.2fbilhoes de reais\n", Área_2, PIB_2);
          printf("Numeros de pontos turisticos: %d\n", Pontosturisticos_2);
          printf("Densidade populacional: %.3fhab/km2\n", densidadepopulacional_2);
          printf("PIB per capita: %freais\n", PIBpercapita_2);
          SuperPoder_2 =(float) População_2 + Área_2 + PIB_2 + Pontosturisticos_2 + densidadepopulacional_2 + PIBpercapita_2;
          printf("SUPER PODER DA CARTA 2 É: %f\n\n", SuperPoder_2);

          printf("*******Comparação das cartas*******\n ");
          printf("População_1 > População_2: %u\n", População_1 > População_2);
          printf("Área_1 > Área_2: %d\n", Área_1 > Área_2);
          printf("PIB_1 > PIB_2: %d\n", PIB_1 > PIB_2);
          printf("pontos tursiticos_1 > pontos turisticos_2: %d\n", Pontosturisticos_1 > Pontosturisticos_2);
          printf("desidade populacional_1 < densidade populacional_2: %d\n", densidadepopulacional_1 < densidadepopulacional_2);
          printf("pib per capita_1 > pib per capita_2: %d\n", PIBpercapita_1 > PIBpercapita_2);
          printf("Super Poder_1 > Super Poder_2: %d", SuperPoder_1 >SuperPoder_2);
      


        

          return 0;

     }






          






   


     
