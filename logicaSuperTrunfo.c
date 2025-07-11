#include <stdio.h>

int main(){

//Variáveis Carta 1

    char carta1_estado;
    char carta1_codigo [4];
    char carta1_cidade [50];
    int carta1_populacao;
    float carta1_area_total;
    float carta1_pib;
    int carta1_pontos_turisticos;
    float carta1_dens_populacional;
    float carta1_pib_per_capita;
    float carta1_super_poder;

//Variáveis Carta 2 x

    char carta2_estado;
    char carta2_codigo [4];
    char carta2_cidade [50];
    int carta2_populacao;
    float carta2_area_total;
    float carta2_pib;
    int carta2_pontos_turisticos;
    float carta2_dens_populacional;
    float carta2_pib_per_capita;
    float carta2_super_poder;

/*Variáveis Auxiliares - Utilizei estas variáveis, que irão armazenar apenas a carta vencedora, pois isso facilita na hora das comparações
e me facilita na hora de atualizar o código. Além de deixar o código mais organizado, pois eu realizo todas as comparações antes de exibir
os vencedores.
*/

    int vencedor_populacao;
    int vencedor_area;
    int vencedor_pib;
    int vencedor_pontos_turisticos;
    int vencedor_densidade;
    int vencedor_pib_per_capita;
    int vencedor_super_poder;


//Inicilização do programa:

    printf("\n\n\n");
    printf("███████╗██╗   ██╗██████╗ ███████╗██████╗             \n");
    printf("██╔════╝██║   ██║██╔══██╗██╔════╝██╔══██╗            \n");
    printf("███████╗██║   ██║██████╔╝█████╗  ██████╔╝            \n");
    printf("╚════██║██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗            \n");
    printf("███████║╚██████╔╝██║     ███████╗██║  ██║            \n");
    printf("╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝            \n");
    printf("                                                     \n");
    printf("████████╗██████╗ ██╗   ██╗███╗   ██╗███████╗ ██████╗ \n");
    printf("╚══██╔══╝██╔══██╗██║   ██║████╗  ██║██╔════╝██╔═══██╗\n");
    printf("   ██║   ██████╔╝██║   ██║██╔██╗ ██║█████╗  ██║   ██║\n");
    printf("   ██║   ██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ██║   ██║\n");
    printf("   ██║   ██║  ██║╚██████╔╝██║ ╚████║██║     ╚██████╔╝\n");
    printf("   ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝      ╚═════╝ \n");
    printf("\n\n\n");

    printf("Bem Vindo ao SUPER TRUNFO PAÍSES!\n\n");
    printf("Aqui, você poderá cadastrar duas cartas para o seu jogo. \n\n");
    printf("Por favor, atente-se às instruções abaixo:\n\n");
    printf("1.Para o estado, utilize apenas uma letra. Ex: A, B, C \n");
    printf("2.Para o código, utilize, a mesma letra do estado, seguida de um número de 01 a 04. Ex: A01 \n");
    printf("3.Para o nome da cidade, dê preferência para nomes simples, em caso de nomes compostos, utilize '_', Ex: Fortaleza, Porto_Alegre \n");
    printf("4.Para a população, digite um número inteiro, sem pontos ou vírgulas. Ex: 100000 \n");
    printf("5.Para a área, insira o valor em km². O número pode conter decimais, neste caso, utilize ponto, ao invés de vírgula. Ex: 5523.52 \n");
    printf("6.Para o PIB, o número pode conter decimais, neste caso, utilize ponto ao invés de vírgula. Insira o valor em bilhões. Ex: 2.540 (2 bilhões e 540 milhões) \n");
    printf("7.Para os pontos turisticos, utilize um número inteiro, sem pontos ou virgulas. \n");

//Inserir dados da carta 1

    printf("========================================\n");
    printf("==      SUPER TRUNFO - CARTA 1        ==\n");
    printf("========================================\n");    
    //Solicita e armazena nas variáveis os dados do estado da carta 1
    printf("Digite o estado: ");
    scanf(" %c", &carta1_estado);
    
    //Solicita e armazena nas variáveis os dados do codigo da carta 1
    printf("Digite o codigo: ");
    scanf(" %s", &carta1_codigo);
    
    //Solicita e armazena nas variáveis os dados da cidade da carta 1
    printf("Digite a cidade: ");
    scanf(" %s", &carta1_cidade);
    
    //Solicita e armazena nas variáveis os dados da populacao da carta 1
    printf("Digite a população: ");
    scanf("%d", &carta1_populacao);
    
    //Solicita e armazena nas variáveis os dados da area total da carta 1
    printf("Digite a área total em km²: ");
    scanf("%f", &carta1_area_total);
    
    //Solicita e armazena nas variáveis os dados do PIB da carta 1
    printf("Digite o PIB: ");
    scanf("%f", &carta1_pib);
    
    //Solicita e armazena nas variáveis os dados de pontos turísticos da carta 1
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta1_pontos_turisticos);
    printf("\n");
    
    //mensagem de encerramento da carta 1
    printf("Ótimo! Agora, vamos para a CARTA 2 \n\n");

//Inserir dados da carta 2
    printf("========================================\n");
    printf("==      SUPER TRUNFO - CARTA 2        ==\n");
    printf("========================================\n");    
    //Solicita e armazena nas variáveis os dados do estado da carta 2
    printf("Digite o estado: ");
    scanf(" %c", &carta2_estado);
    
    //Solicita e armazena nas variáveis os dados do codigo da carta 2
    printf("Digite o codigo: ");
    scanf(" %s", &carta2_codigo);
    
    //Solicita e armazena nas variáveis os dados da cidade da carta 2
    printf("Digite a cidade: ");
    scanf(" %s", &carta2_cidade);
    
    //Solicita e armazena nas variáveis os dados da populacao da carta 2
    printf("Digite a população: ");
    scanf("%d", &carta2_populacao);
    
    //Solicita e armazena nas variáveis os dados da area total da carta 2
    printf("Digite a área total em km²: ");
    scanf("%f", &carta2_area_total);
    
    //Solicita e armazena nas variáveis os dados do PIB da carta 2
    printf("Digite o PIB: ");
    scanf("%f", &carta2_pib);
    
    //Solicita e armazena nas variáveis os dados de pontos turísticos da carta 2
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta2_pontos_turisticos);

    printf("\n");
    printf("========================================\n");
    printf("==          FIM DAS CARTAS            ==\n");
    printf("========================================\n");
    printf("\n");    

    //Cálculo das novas variáveis da primeira carta

    carta1_dens_populacional = carta1_populacao / carta1_area_total;
    carta1_pib_per_capita = (carta1_pib * 1000000000) / carta1_populacao; 
    /*
    O PIB da cidade é solicitado em bilhões de reais, para exibir um resultado correto, 
    eu pego o valor que o usuário digitou e multiplico por 1 bilhão, para após dividir pela população, 
    já que ela é inserida em unidades.
    */

    //Cálculo das novas variáveis da segunda carta

    carta2_dens_populacional = carta2_populacao / carta2_area_total;
    carta2_pib_per_capita = (carta2_pib * 1000000000) / carta2_populacao; 

    //Cálculo do super poder das cartas

    carta1_super_poder = 
        (float)carta1_populacao + 
        carta1_area_total + 
        carta1_pib + 
        (float)carta1_pontos_turisticos + 
        carta1_pib_per_capita + 
        (1.0f / carta1_dens_populacional);

    carta2_super_poder = 
        (float)carta2_populacao + 
        carta2_area_total + 
        carta2_pib + 
        (float)carta2_pontos_turisticos + 
        carta2_pib_per_capita + 
        (1.0f / carta2_dens_populacional);


    /*CÁLCULO DA CARTA GANHADORA

    Aqui serão realizados todos os cálculos de qual carta foi a ganhadora em todas as categorias. Considerei também a possibilidade de empate.
    
    Caso uma variável receba 0, significa que gerou um empate.

    */

    //CÁLCULO DO VENCEDOR DE POPULAÇÃO

    if(carta1_populacao > carta2_populacao){
        vencedor_populacao = 1;
    }else if(carta2_populacao > carta1_populacao){
        vencedor_populacao = 2;
    }else{
        vencedor_populacao = 0;
    }

    //CÁLCULO DE VENCEDOR DE ÁREA TOTAL

    if(carta1_area_total > carta2_area_total){
        vencedor_area = 1;
    }else if(carta2_area_total > carta1_area_total){
        vencedor_area = 2;
    }else{
        vencedor_area = 0;
    }

    //CÁLCULO DE VENCEDOR PIB

    if(carta1_pib > carta2_pib){
         vencedor_pib = 1;
    }else if(carta2_pib > carta1_pib){
        vencedor_pib = 2;
    }else{
        vencedor_pib = 0;
    }

    //CÁLCULO VENCEDOR PONTOS TURÍSTICOS

    if(carta1_pontos_turisticos > carta2_pontos_turisticos){
        vencedor_pontos_turisticos = 1;
    }else if(carta2_pontos_turisticos > carta1_pontos_turisticos){
        vencedor_pontos_turisticos = 2;
    }else{
        vencedor_pontos_turisticos = 0;
    }

    //CÁLCULO VENCEDOR DENSIDADE POPULACIONAL (MENOR VENCE)

    if(carta1_dens_populacional < carta2_dens_populacional){
        vencedor_densidade = 1;
    }else if(carta2_dens_populacional < carta1_dens_populacional){
        vencedor_densidade = 2;
    }else{
        vencedor_densidade = 0;
    }

    //CÁLCULO VENCEDOR PIB PER CAPITA

    if(carta1_pib_per_capita > carta2_pib_per_capita){
         vencedor_pib_per_capita = 1;
    }else if(carta2_pib_per_capita > carta1_pib_per_capita){
        vencedor_pib_per_capita = 2;
    }else{
        vencedor_pib_per_capita = 0;
    }

    //CÁLCULO VENCEDOR SUPER PODER

    if(carta1_super_poder > carta2_super_poder){
        vencedor_super_poder = 1;
    }else if(carta2_super_poder > carta1_super_poder){
        vencedor_super_poder = 2;
    }else{
        vencedor_super_poder = 0;
    }

    //Com ambas as cartas armazenadas e todas as variáveis calculadas, elas são exibidas ao usuário antes de encerrar o programa.

    printf("Todas as cartas foram armazenadas. Vamos ver as cartas inseridas no jogo: \n\n");

    /*
    A exibição das cartas foi alterada visando uma melhor escalabilidade, da forma anterior, era complexo
    adicionar novas variáveis, tendo que alinhar tudo manualmente.
    */

    //Exibe uma "carta" do jogo na tela do usuário.
   
    printf("========================================\n");
    printf("==      SUPER TRUNFO - CARTA 1        ==\n");
    printf("========================================\n");                               
    printf("Estado:              %c\n", carta1_estado);
    printf("Código:              %s\n", carta1_codigo);
    printf("Cidade:              %s\n", carta1_cidade);
    printf("População:           %d\n", carta1_populacao);
    printf("Área Total:          %.2f km²\n", carta1_area_total);
    printf("PIB:                 R$ %.2f bi\n", carta1_pib);
    printf("Pontos Turísticos:   %d\n", carta1_pontos_turisticos);
    printf("Densidade Popul.:    %.2f hab/km²\n", carta1_dens_populacional);
    printf("PIB per Capita:      R$ %.2f\n", carta1_pib_per_capita);
    printf("Super Poder:         %.2f \n", carta1_super_poder);

    printf("\n\n");

    //Exibe uma "carta" do jogo na tela do usuário.
    printf("========================================\n");
    printf("==      SUPER TRUNFO - CARTA 2        ==\n");
    printf("========================================\n"); 
    printf("Estado:              %c\n", carta2_estado);
    printf("Código:              %s\n", carta2_codigo);
    printf("Cidade:              %s\n", carta2_cidade);
    printf("População:           %d\n", carta2_populacao);
    printf("Área Total:          %.2f km²\n", carta2_area_total);
    printf("PIB:                 R$ %.2f bi\n", carta2_pib);
    printf("Pontos Turísticos:   %d\n", carta2_pontos_turisticos);
    printf("Densidade Popul.:    %.2f hab/km²\n", carta2_dens_populacional);
    printf("PIB per Capita:      R$ %.2f\n", carta2_pib_per_capita);
    printf("Super Poder:         %.2f \n", carta2_super_poder);

    printf("\n\n");

    printf("██╗   ██╗███████╗███╗   ██╗ ██████╗███████╗██████╗  ██████╗ ██████╗ ███████╗███████╗\n");
    printf("██║   ██║██╔════╝████╗  ██║██╔════╝██╔════╝██╔══██╗██╔═══██╗██╔══██╗██╔════╝██╔════╝\n");
    printf("██║   ██║█████╗  ██╔██╗ ██║██║     █████╗  ██║  ██║██║   ██║██████╔╝█████╗  ███████╗\n");
    printf("╚██╗ ██╔╝██╔══╝  ██║╚██╗██║██║     ██╔══╝  ██║  ██║██║   ██║██╔══██╗██╔══╝  ╚════██║\n");
    printf(" ╚████╔╝ ███████╗██║ ╚████║╚██████╗███████╗██████╔╝╚██████╔╝██║  ██║███████╗███████║\n");
    printf("  ╚═══╝  ╚══════╝╚═╝  ╚═══╝ ╚═════╝╚══════╝╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝\n");

    printf("\n\n");

    if(vencedor_populacao == 1){
        printf("População:           Carta 1 venceu! \n");
    }else if(vencedor_populacao == 2){
        printf("População:           Carta 2 venceu! \n");
    }else{
        printf("População:           Empate! \n");
    }

    if(vencedor_area == 1){
        printf("Área Total:          Carta 1 venceu! \n");
    }else if(vencedor_area == 2){
        printf("Área Total:          Carta 2 venceu! \n");
    }else{
        printf("Área Total:          Empate! \n");
    }

    if(vencedor_pib == 1){
        printf("PIB:                 Carta 1 venceu! \n");
    }else if(vencedor_pib == 2){
        printf("PIB:                 Carta 2 venceu! \n");
    }else{
        printf("PIB:                 Empate! \n");
    }  

    if(vencedor_pontos_turisticos == 1){
        printf("Pontos Turísticos:   Carta 1 venceu! \n");
    }else if(vencedor_pontos_turisticos == 2){
        printf("Pontos Turísticos:   Carta 2 venceu! \n");
    }else{
        printf("Pontos Turísticos:   Empate! \n");
    }
    
    if(vencedor_densidade == 1){
        printf("Densidade Popul.:    Carta 1 venceu! \n");
    }else if(vencedor_densidade == 2){
        printf("Densidade Popul.:    Carta 2 venceu! \n");
    }else{
        printf("Densidade Popul.:    Empate! \n");
    }

    if(vencedor_pib_per_capita == 1){
        printf("PIB per Capita:      Carta 1 venceu! \n");
    }else if(vencedor_pib_per_capita == 2){
        printf("PIB per Capita:      Carta 2 venceu! \n");
    }else{
        printf("PIB per Capita:      Empate! \n");
    }

    if(vencedor_super_poder == 1){
        printf("Super Poder:         Carta 1 venceu! \n");
    }else if(vencedor_super_poder == 2){
        printf("Super Poder:         Carta 2 venceu! \n");
    }else{
        printf("Super Poder:         Empate! \n");
    }

    printf("\n\n");

    return 0;


}
