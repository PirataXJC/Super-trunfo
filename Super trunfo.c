#include <stdio.h>

int main () {

 //informações sobre as cartas  
    
    //CARTA1
    char estado1;       //estado a qual a carta pertençe
    char code1[4];         //codigo escolido para se referir a carta
    char cidade1[50];       //a cidade que a carta faz referencia
    int populacao1;     //a população desta carta
    float area1;        //area desta carta
    float pib1;         //PIB desta carta
    int pturisticos1;   //quantidade de pontos turisticos destas cartas


    //CARTA2
    char estado2;       //estado a qual a carta pertençe
    char code2[4];         //codigo escolido para se referir a carta
    char cidade2[50];       //a cidade que a carta faz referencia
    int populacao2;     //a população desta carta
    float area2;        //area desta carta
    float pib2;         //PIB desta carta
    int pturisticos2;   //quantidade de pontos turisticos destas cartas

    //CARTA 1
    printf("Digite o Estado (A a Z): ");            //digitar somente a inical do estado e verificar ela
    scanf(" %c", &estado1);                  

    printf("Digite um Codigo (ex: A01): ");      //digitar um codido de ate 4 caracteres para se referir a carta
    scanf("%s", code1);

    printf("Digite o Nome da Cidade: ");         //escrever o nome da cidade
    scanf(" %[^\n]", cidade1);

    printf("DIgite a População: ");              //escrever a população da cidade
    scanf("%d", &populacao1);

    printf("Digite a Area: ");                   //escrever a area da cidade
    scanf("%f", &area1);

    printf("Digite o PIB: ");                    //escrever o PIB da cidade
    scanf("%f", &pib1);

    printf("Digite os Pontos Turisticos: ");     //digitar a quantidade de pontos turisticos da cidade
    scanf("%d", &pturisticos1);


    //CARTA 2
        printf("Digite o Estado (A a Z): ");
    scanf(" %c", &estado2);

    printf("Digite um Codigo (ex: A01): ");
    scanf("%s", code2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("DIgite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pturisticos2);
 

    //Cálculo dos novos atributos derivados (densidade populacional e PIB per capita), e uma divisáo que eu não sei fazer direito mais funcionou 
    float densidade1 = (area1 != 0) ? (populacao1 / area1) : 0;
    float densidade2 = (area2 != 0) ? (populacao2 / area2) : 0;

    float pib_per_capita1 = (populacao1 != 0) ? ((pib1 * 1000000000) / populacao1) : 0;
    float pib_per_capita2 = (populacao2 != 0) ? ((pib2 * 1000000000) / populacao2) : 0;


 // Cálculo do Super Poder  
    float super_poder1 = populacao1 + area1 + pib1 + pturisticos1 + pib_per_capita1 + ((densidade1 != 0) ? (1 / densidade1) : 0);
    float super_poder2 = populacao2 + area2 + pib2 + pturisticos2 + pib_per_capita2 + ((densidade2 != 0) ? (1 / densidade2) : 0);


        // Exibir Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", code1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
     printf("Super Poder: %.2f\n", super_poder1);

     // Exibir Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", code2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Decisão automática pelo Super Poder
    printf("\nResultado final da comparação pelo Super Poder:\n");
    if (super_poder1 > super_poder2)
        printf("Carta 1 venceu com maior Super Poder!\n");
    else if (super_poder2 > super_poder1)
        printf("Carta 2 venceu com maior Super Poder!\n");
    else
        printf("Empate no Super Poder.\n");

    return 0;

}
