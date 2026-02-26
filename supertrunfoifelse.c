#include <stdio.h>

int main(){
    char carta = '1', carta2 = '2';
    char pais[30], pais2[30];
    int pturisticos, pturisticos2, escolha;
    unsigned long int populacao, populacao2;
    float area, pib, area2, pib2, densidadep, pibpc, densidadep2, pibpc2;

    // Carta 1

    //pede para o usuário digitar o nome do país da carta 1
    printf("Digite o nome do país da carta: ");
    scanf("%s", &pais); 
    //pede para o usuário digitar a quantia populacional da carta 1
    printf("Digite a quantia populacional da carta: ");
    scanf("%u", &populacao); 
    //pede para o usuário digitar a área da carta 1
    printf("Digite a área da carta: ");
    scanf("%f", &area); 
    //pede para o usuário digitar o PIB da carta 1
    printf("Digite o PIB da carta: ");
    scanf("%f", &pib); 
    //pede para o usuário digitar a quantia de pontos turisticos da carta 1
    printf("Digite a quantia de pontos turisticos da carta: ");
    scanf("%d", &pturisticos);

    densidadep = (populacao + area) / 2;
    pibpc = (pib + populacao) / 2;

    // Carta 2

    printf("\n\n\bAgora digite para a carta 2\n\n");

    //pede para o usuário digitar o nome do país da carta 2
    printf("Digite o nome do país da carta 2: ");
    scanf("%s", &pais2); 
    //pede para o usuário digitar a quantia populacional da carta 2
    printf("Digite a quantia populacional da carta 2: ");
    scanf("%u", &populacao2); 
    //pede para o usuário digitar a área da carta 2
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2); 
    //pede para o usuário digitar o PIB da carta 2
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2); 
    //pede para o usuário digitar a quantia de pontos turisticos da carta 2
    printf("Digite a quantia de pontos turisticos da carta 2: ");
    scanf("%d", &pturisticos2);

    densidadep2 = (populacao2 + area2) / 2;
    pibpc2 = (pib2 + populacao2) / 2;

    //carta 1 resultados
    
    printf("\nCarta: %c\n", carta);
    printf("País: %c\n", pais); // vai ler o país da carta 1
    printf("População: %d \n", populacao); // vai ler a quandia populacional da carta 1
    printf("Área: %.2fkm² \n", area); // vai ler a área da carta 1
    printf("PIB: %.2f bilhões de reais \n", pib); // vai ler o PIB da carta 1
    printf("Número de Pontos Turísticos: %d \n", pturisticos);
    printf("Densidade Populacional: %.2fhab/km²\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibpc);

    //carta 2 resultados

    printf("\nCarta: %c\n", carta2);
    printf("pais: %c\n", pais2); // vai ler o país da carta 2
    printf("População: %d \n", populacao2); // vai ler a quandia populacional da carta 2
    printf("Área: %.2fkm² \n", area2); // vai ler a área da carta 2
    printf("PIB: %.2f bilhões de reais \n", pib2);// vai ler o PIB da carta 2 
    printf("Número de Pontos Turísticos: %d \n", pturisticos2); 
    printf("Densidade Populacional: %.2fhab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n\n", pibpc2);

    // menu de seleção para o usuário escolher qual atributo ele vai comparar
    printf("Agora que você definiu os atributos para as suas cartas\n");
    printf("escolha qual atributo das duas cartas você ira comparar.\n"); 
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos turísticos\n");
    printf("Faça a sua escolha: ");
    scanf("%d", &escolha);
    //vai ler a escolha do usuário e vai mandar para o switch

    switch (escolha)
    {
    case 1:
        // Ler e comparar a população de cada uma das cartas
        // caso população 1 ganhe
        if(populacao > populacao2){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo população foi usado para comparação\n");
            printf("Valores da população 1 (%u) e população 2 (%u)\n", populacao, populacao2);
            printf("População 1 venceu!!\n");
        // caso população 2 ganhe
        } else if(populacao2 > populacao){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo população foi usado para comparação\n");
            printf("Valores da população 1 (%u) e população 2 (%u)\n", populacao, populacao2);
            printf("População 2 venceu!!\n");
        } else{
            printf("Empate\n"); // caso os atributos sejam iguais
        }
        break;
    case 2:
        // Ler e área 1 ganhe
        if(area > area2){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo área foi usado para comparação\n");
            printf("Valores da área 1 (%.2f) e área 2 (%.2f)\n", area, area2);
            printf("Área 1 venceu!!\n");
        // Ler e área 2 ganhe
        } else if(area2 > area){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo área foi usado para comparação\n");
            printf("Valores da área 1 (%.2f) e área 2 (%.2f)\n", area, area2);
            printf("Área 2 venceu!!\n");
        } else{
            printf("\n\nEmpate\n"); // caso os atributos sejam iguais
        }
        break;
    case 3:
        // Ler e comparar PIB de cada uma das cartas
        // caso PIB 1 ganhe
        if(pib > pib2){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo PIB foi usado para comparação\n");
            printf("Valores da PIB 1 (%.2f) e PIB 2 (%.2f)\n", pib, pib2);
            printf("PIB 1 venceu!!\n");
        // caso PIB 2 ganhe
        } else if(pib2 > pib){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo PIB foi usado para comparação\n");
            printf("Valores da PIB 1 (%.2f) e PIB 2 (%.2f)\n", pib, pib2);
            printf("PIB 2 venceu!!\n");
        } else{
            printf("\n\nEmpate\n"); // caso os atributos sejam iguais
        }
        break;
    case 4:
        // Ler e comparar PIB de cada uma das cartas
        // caso Pontos Turistícos 1 ganhe
        if(pturisticos > pturisticos2){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo Pontos Turistícos foi usado para comparação\n");
            printf("Valores da Pontos Turistícos 1 (%.2f) e Pontos Turistícos 2 (%.2f)\n", pturisticos, pturisticos2);
            printf("Pontos Turistícos 1 venceu!!\n");
        // caso Pontos Turistícos 2 ganhe
        } else if(pturisticos2 > pturisticos){
            printf("\n\nPaís 1 (%s) e País 2 (%s)\n", pais, pais2); // vai ler o país da carta 1 e 2
            printf("O atributo Pontos Turistícos foi usado para comparação\n");
            printf("Valores de Pontos Turistícos 1(%.2f) e Pontos Turistícos 2 (%.2f)\n", pturisticos, pturisticos2);
            printf("Pontos Turistícos 2 venceu!!\n");
        } else{
            printf("\n\nEmpate\n"); // caso os atributos sejam iguais
        }
        break;
    default:
        printf("Opção inexistente."); // caso o usuário selecione um número fora do menu
        break;
    }
}
