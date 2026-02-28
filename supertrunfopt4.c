#include <stdio.h>

int main(){
    char carta = '1', carta2 = '2';
    char pais[30], pais2[30];
    int pturisticos, pturisticos2, escolha, escolha2;
    unsigned long int populacao, populacao2;
    float area, pib, area2, pib2, densidadep, pibpc, densidadep2, pibpc2;
    float valor1_attr1, valor1_attr2;
    float valor2_attr1, valor2_attr2;

    // Carta 1

    //pede para o usuário digitar o nome do país da carta 1
    printf("Digite o nome do país da carta: ");
    scanf("%s", pais); 
    //pede para o usuário digitar a quantia populacional da carta 1
    printf("Digite a quantia populacional da carta: ");
    scanf("%lu", &populacao); 
    //pede para o usuário digitar a área da carta 1
    printf("Digite a área da carta: ");
    scanf("%f", &area); 
    //pede para o usuário digitar o PIB da carta 1
    printf("Digite o PIB da carta: ");
    scanf("%f", &pib); 
    //pede para o usuário digitar a quantia de pontos turisticos da carta 1
    printf("Digite a quantia de pontos turisticos da carta: ");
    scanf("%d", &pturisticos);

    // Carta 2

    printf("\nAgora digite para a carta 2\n\n");

    //pede para o usuário digitar o nome do país da carta 2
    printf("Digite o nome do país da carta 2: ");
    scanf("%s", pais2); 
    //pede para o usuário digitar a quantia populacional da carta 2
    printf("Digite a quantia populacional da carta 2: ");
    scanf("%lu", &populacao2); 
    //pede para o usuário digitar a área da carta 2
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2); 
    //pede para o usuário digitar o PIB da carta 2
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2); 
    //pede para o usuário digitar a quantia de pontos turisticos da carta 2
    printf("Digite a quantia de pontos turisticos da carta 2: ");
    scanf("%d", &pturisticos2);

    densidadep = populacao / area; // vai calcular a densidade populacional da carta 1
    densidadep2 = populacao2 / area2; // vai calcular a densidade populacional da carta 2
    pibpc = pib / populacao; // vai calcular o pib per capita da carta 1
    pibpc2 = pib2 / populacao2; // vai calcular o pib per capita da carta 2

    //carta 1 resultados
    
    printf("\nCarta: %c\n", carta);
    printf("País: %s\n", pais); // vai ler o país da carta 1
    printf("População: %lu \n", populacao); // vai ler a quandia populacional da carta 1
    printf("Área: %.2fkm² \n", area); // vai ler a área da carta 1
    printf("PIB: %.2f bilhões de reais \n", pib); // vai ler o PIB da carta 1
    printf("Número de Pontos Turísticos: %d \n", pturisticos); // vai ler a quantia de pontos turisticos
    printf("Densidade Populacional: %.2fhab/km²\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibpc);

    //carta 2 resultados

    printf("\nCarta: %c\n", carta2);
    printf("pais: %s\n", pais2); // vai ler o país da carta 2
    printf("População: %lu \n", populacao2); // vai ler a quandia populacional da carta 2
    printf("Área: %.2fkm² \n", area2); // vai ler a área da carta 2
    printf("PIB: %.2f bilhões de reais \n", pib2);// vai ler o PIB da carta 2 
    printf("Número de Pontos Turísticos: %d \n", pturisticos2); 
    printf("Densidade Populacional: %.2fhab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n\n", pibpc2);

    // menu de seleção para o usuário escolher qual atributo ele vai comparar
    printf("Agora que você definiu os atributos para as suas cartas\n");
    printf("escolha 2 atributos das duas cartas que você ira comparar.\n"); 
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos turísticos\n");
    printf("Escolha 1 atributo para a carta 1: \n");
    scanf("%d", &escolha);
    //vai ler a escolha do usuário e vai mandar para o switch

    //switch verifica qual opção o usuário escolheu
    switch (escolha)
    {
    case 1:
        printf("\nVocê escolheu População\n\n");
        valor1_attr1 = populacao;
        valor2_attr1 = populacao2;
        break;
    case 2:
        printf("\nVocê escolheu Área\n\n");
        valor1_attr1 = area;
        valor2_attr1 = area2;
        break;
    case 3:
        printf("\nVocê escolheu PIB\n\n");
        valor1_attr1 = pib;
        valor2_attr1 = pib2;
        break;
    case 4:
        printf("\nVocê escolheu Pontos turísticoso\n\n");
        valor1_attr1 = pturisticos;
        valor2_attr1 = pturisticos2 ;
        break;    
    
    default:
        printf("\nSeleção inválida\n\n");
        break;
    }
    
    // escolha 2
    // Menu de escolhas para o usuário
    printf("*** Segunda escolha ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos turísticos\n");
    printf("Escolha 1 atributo para a carta 2: \n");
    scanf("%d", &escolha2);
    // O usuário escolhe qual atributo quer usar primeiro.

    // Impede o usuário de escolher o mesmo atributo duas vezes.
    if (escolha == escolha2)
    {
        printf("Não escolha duas opções exatamente iguais.");
        return 0;
    } else {
        //switch verifica qual opção o usuário escolheu
        switch (escolha2) 
        {
        case 1:
            printf("\nVocê escolheu População 2\n");
            valor1_attr2 = populacao;
            valor2_attr2 = populacao2;
            break;
        case 2:
            printf("\nVocê escolheu Área 2\n");
            valor1_attr2 = area;
            valor2_attr2 = area2;
            break;
        case 3:
            printf("\nVocê escolheu PIB 2\n");
            valor1_attr2 = pib;
            valor2_attr2 = pib2;
            break;
        case 4:
            printf("\nVocê escolheu Pontos turísticos 2\n");
            valor1_attr2 = pturisticos;
            valor2_attr2 = pturisticos2;
            break;    
        
        default:
            printf("\nSeleção inválida\n");
            return 0;
            break;
        }
    }

    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    if(soma1 > soma2){
        printf("\n*** COMPARANDO OS DOIS ATRIBUTOS ***\n");
        //ler o nome dos dois paises
        printf("\nPaís (%s) e País 2 (%s)\n", pais, pais2);
        //mostrando cada atributo para cada carta   
        printf("%s: %.2f - %.2f\n", pais, valor1_attr1, valor1_attr2);
        printf("%s: %.2f - %.2f\n", pais2, valor2_attr1, valor2_attr2);
        printf("Soma Atributo (%.2f) e Soma Atributo 2 (%.2f)\n", soma1, soma2);
        printf("País 1 Venceu!\n");
    } else if(soma2 > soma1){
        printf("\n*** COMPARANDO OS DOIS ATRIBUTOS ***\n");
        //ler o nome dos dois paises
        printf("País (%s) e País 2 (%s)\n", pais, pais2);
        //mostrando cada atributo para cada carta 
        printf("%s: %.2f - %.2f\n", pais, valor1_attr1, valor1_attr2);
        printf("%s: %.2f - %.2f\n", pais2, valor2_attr1, valor2_attr2);
        printf("Soma Atributo (%.2f) e Soma Atributo 2 (%.2f)\n", soma1, soma2);
        printf("País 2 Venceu!\n");
    } else {
        printf("Empate\n");
    }
}
