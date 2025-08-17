#include <stdio.h>

int main() {

//Variaveis da primeira carta 01 
    char pais[50];
    char estado[50];
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
    printf("Nome do PAÍS: ");
    scanf("%s", pais);
    printf("Código da Carta: ");
    scanf("%s", codigo);

//informações da primeira cidade
    printf("Nome do Estado: ");
    scanf("%s", estado);
    
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
    printf("\n   Carta 1 Apresentada\n");
    printf("CÓDIGO: %s\n", codigo);
    printf("PAÍS: %s\n", pais);
    printf("ESTADO: %s\n", estado);
    printf("POPULAÇÃO: %lu\n", Populacao);
    printf("ÁREA: %.2lf km²\n", Area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DP);
    printf("PIB PER CAPITA: %.2f reais\n", PIBpc);
    printf("SUPER PODER: %.2f\n", superpoder1);

//Variaveis da segunda carta 02
    char pais2[50];
    char estado2[50];
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
    printf("Nome do PAÍS: ");
    scanf("%s", pais2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);

//informações da segunda cidade
    printf("Nome do Estado: ");
    scanf("%s", estado2);
    
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

//super poder carta 2
    float superpoder2;
    double inversodaDP2 = Area2 / Populacao2;
    superpoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBpc2 + inversodaDP2;


//carta apresentada
    printf("\n   Carta 2 Apresentada\n");
    printf("CÓDIGO: %s\n", codigo2);
    printf("PAÍS: %s\n", pais2);
    printf("ESTADO: %s\n", estado2);
    printf("POPULAÇÃO: %lu\n", Populacao2);
    printf("ÁREA: %.2lf km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", DP2);
    printf("PIB PER CAPITA: %.2f reais\n", PIBpc2);
    printf("SUPER PODER: %.2f\n", superpoder2);

//Comaparação das duas cartas
    int resulatadoP = (Populacao > Populacao2);
    int resulatadoA = (Area > Area2); 
    int resulatadoPIB = (PIB > PIB2);  
    int resulatadoPT = (PontosTuristicos > PontosTuristicos2); 
    int resulatadoDP = (inversodaDP > inversodaDP2);
    int resulatadoPIBpc = (PIBpc > PIBpc2);
    int resulatadoSP = (superpoder1 > superpoder2);


    printf("\n-- RESULTADO: CARTA 1 >(1) E CARTA 2 >(0) --\n");
    printf("POPULAÇÃO, CARTA ( %d ) VENCEU!\n", resulatadoP );
    printf("ÁREA, CARTA ( %d ) VENCEU!\n", resulatadoA );
    printf("PIB, CARTA ( %d ) VENCEU!\n", resulatadoPIB );
    printf("PONTOS TURISTICOS, CARTA ( %d ) VENCEU!\n", resulatadoPT );
    printf("DENSIDADE DEMOGRAFICA, CARTA ( %d ) VENCEU!\n", resulatadoDP);
    printf("PIB PER CAPTA, CARTA ( %d ) VENCEU!\n", resulatadoPIBpc );
    printf("SUPER PODER, CARTA ( %d ) VENCEU!\n", resulatadoSP );

//variaveis para armazenar a escolha do usuario
int escolha1 , escolha2;

//ESCOLHA 1    
printf("\n- MENU DE COMPARAÇÃO -\n");
printf("(1) -> Países\n");
printf("(2) -> População\n");
printf("(3) -> Área\n");
printf("(4) -> PIB\n");
printf("(5) -> Pontos Turisticos\n");
printf("(6) -> Densidade demografica\n");
printf("Digite a opção desejada -> ");
scanf("%d", &escolha1);//Jogador escolhendo um atributo para comparar")

//ESCOLHA 2   
printf("\n- MENU DE COMPARAÇÃO -\n");
printf("(1) -> Países\n");
printf("(2) -> População\n");
printf("(3) -> Área\n");
printf("(4) -> PIB\n");
printf("(5) -> Pontos Turisticos\n");
printf("(6) -> Densidade demografica\n");
printf("Digite a opção desejada -> ");
scanf("%d", &escolha2);//Jogador escolhendo um atributo para comparar")

if (escolha1 == escolha2) {
    printf("Você não pode selecionar o mesmo atributo duas vezes, tente novamente!\n");
}

//switicg para o menu
switch (op)
{
case 1:
    printf("- COMPARAÇÃO ENTRE\n %s (%s) <-> %s (%s)\n", pais, estado, pais2, estado2);
break;
case 2:
    printf("A População de %s são de: %lu <-> A População de %s são de: %lu \n", estado, Populacao, estado2, Populacao2);
    if (Populacao > Populacao2){
    printf("O estado de %s Tem a população MAIOR que o estado de %s.\n",estado, estado2);
    printf("PAIS %s VENCEU", pais);
    }else if (Populacao == Populacao2) {
    printf("- O JOGO EMPATOU -\n");
    } else {
     printf("O estado de %s Tem a população MAIOR que o estado de %s.\n",estado2, estado);
    printf("PAIS %s VENCEU", pais2);
    }
break;
case 3:
    printf("A área de %s é de: %.2lf <-> A área de %s é de: %.2lf \n", estado, Area, estado2, Area2);
    if (Area > Area2){
    printf("O estado de %s Tem a área MAIOR que o estado de %s.\n",estado, estado2);
    printf("PAIS %s VENCEU", pais);
    } else if (Area == Area2){ 
    printf("- O JOGO EMPATOU -\n");
    } else {
     printf("O estado de %s Tem a área MAIOR que o estado de %s.\n",estado2, estado);
    printf("PAIS %s VENCEU", pais2);
    }
break;
case 4:
    printf("O PIB de %s é de: %.2f <-> O PIB de %s é de: %.2f \n", estado, PIB, estado2, PIB2);
    if (PIB > PIB2){
    printf("O estado de %s Tem o PIB MAIOR que o estado de %s.\n",estado, estado2);
    printf("PAIS %s VENCEU", pais);
    } else if (PIB == PIB2) {
    printf("- O JOGO EMPATOU -\n"); 
    } else {
     printf("O estado de %s Tem o PIB MAIOR que o estado de %s.\n",estado2, estado);
    printf("PAIS %s VENCEU", pais2);
    }
break;
case 5:
    printf("%s tem: %d Pontos turisticos <-> %s tem: %d Pontos turisticos\n", estado, PontosTuristicos, estado2, PontosTuristicos2);
    if (PontosTuristicos > PontosTuristicos2){
    printf("O estado de %s Tem MAIS pontos turisticos que o estado de %s.\n",estado, estado2);
    printf("PAIS %s VENCEU", pais);
    } else if (PontosTuristicos == PontosTuristicos2) {
    printf("- O JOGO EMPATOU -\n");
    } else {
    printf("O estado de %s Tem MAIS pontos turisticos que o estado de %s.\n",estado2, estado);
    printf("PAIS %s VENCEU", pais2);
    }
break;
case 6:
    printf("O estado de %s tem densidade demografica: %.2f <-> O estado de %s tem densidade demografica: %.2f\n", estado, DP, estado2, DP2);
    if (DP < DP2){
    printf("O estado de %s Tem o Densidade demografica MENOR que o estado de %s.\n",estado, estado2);
    printf("PAIS %s VENCEU", pais);
    } else if (DP == DP2) {
    printf("- O JOGO EMPATOU -\n");
    } else {
    printf("O estado de %s Tem o Densidade demografica MENOR que o estado de %s.\n",estado2, estado);
    printf("PAIS %s VENCEU", pais2);
    }
break;
default:
    printf("- OPÇÃO INVALIDA -\n");
break;    
}
//FIM DE JOGO    
printf("\n===  FIM DO JOGO  ===\n");

return 0;
}