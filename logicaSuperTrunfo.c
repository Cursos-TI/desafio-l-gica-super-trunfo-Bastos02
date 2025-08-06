#include <stdio.h>

int main() {

//Variaveis da primeira carta 01 
    char Estado[50];
    char Cidade[50];
    unsigned long int Populacao;
    double Area;
    float PIB;
    int PontosTuristicos;
    char codigo[50];


//Titulo do programa
    printf("\nCadastro das Cartas\n   super trunfo\n");

//Informações da primeira carta 
    printf("\n   Carta 01\n");

//Informações do primeiro Estado
    printf("Nome do Estado: ");
    scanf("%s", Estado);
    printf("Código da Carta: ");
    scanf("%s", codigo);

//informações da primeira cidade
    printf("Nome da Cidade: ");
    scanf("%s", Cidade);
    
    printf("População: ");
    scanf("%lu", &Populacao);

    printf("Área: ");
    scanf("%lf", &Area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos turísticos: ");
    scanf("%d", &PontosTuristicos);

// Variáveis Densidade Populacional(DP), PIB per Capita (PIBpc)
    float DP = Populacao / Area;
    float PIBpc = (PIB *1e9) / (float)Populacao;

//super poder
    float superpoder1;
    double inversodaDP = Area / Populacao;
    superpoder1 = Populacao + Area + PIB + PontosTuristicos + PIBpc + inversodaDP;

//carta apresentada
    printf("\n   Carta Apresentada\n");
    printf("CÓDIGO: %s\n", codigo);
    printf("ESTADO: %s\n", Estado);
    printf("CIDADE: %s\n", Cidade);
    printf("POPULAÇÃO: %lu\n", Populacao);
    printf("ÁREA: %.2lf km²\n", Area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DP);
    printf("PIB PER CAPITA: %.2f reais\n", PIBpc);
    printf("SUPER PODER: %f\n", superpoder1);

//Variaveis da segunda carta 02
    char Estado2[50];
    char Cidade2[50];
    unsigned long int Populacao2;
    double Area2;
    float PIB2;
    int PontosTuristicos2;
    char codigo2[50];

//Titulo do programa
    printf("\n Cadastro das Cartas\n   super trunfo\n");

//Informações da segunda carta 
    printf("\n   Carta 02\n");

//Informações do segundo Estado
    printf("Nome do Estado: ");
    scanf("%s", Estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);

//informações da segunda cidade
    printf("Nome da Cidade: ");
    scanf("%s", Cidade2);
    
    printf("População: ");
    scanf("%lu", &Populacao2);

    printf("Área: ");
    scanf("%lf", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

// Variáveis Densidade Populacional(DP), PIB per Capita (PIBpc) carta 2
    float DP2 = Populacao2 / Area2;
    float PIBpc2 = (PIB2 * 1e9) / (float)Populacao2;

//super poder
    float superpoder2;
    double inversodaDP2 = Area2 / Populacao2;
    superpoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBpc2 + inversodaDP2;


//carta apresentada
    printf("\n   Carta Apresentada\n");
    printf("CÓDIGO: %s\n", codigo2);
    printf("ESTADO: %s\n", Estado2);
    printf("CIDADE: %s\n", Cidade2);
    printf("POPULAÇÃO: %lu\n", Populacao2);
    printf("ÁREA: %.2lf km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DP2);
    printf("PIB PER CAPITA: %.2f reais\n", PIBpc2);
    printf("SUPER PODER: %f\n", superpoder2);

//Comaparação das duas cartas







return 0;
}