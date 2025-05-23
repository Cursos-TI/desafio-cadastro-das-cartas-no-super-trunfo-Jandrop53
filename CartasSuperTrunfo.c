#include <stdio.h>

int main() {
    
    //Variaveis da primeira carta.
    char estado1[50], cod1[50], nome_cidade1 [50], turisticos1[50];
    float km1, pib1;
    int popu_cidade1;

    //Variaveis da segunda carta.
    char estado2[50], cod2[50], nome_cidade2 [50], turisticos2[50];
    float km2, pib2;
    int popu_cidade2;

    printf("Olá jogador, vamos cadastrar duas cartas do Super Trunfo Paises, para começarmos a jogar ? \n");
    printf("Começe personalizando a carta número 01 \n");

        //Colhendo dados da carta 01.
        printf("Qual estado a sua cidade pertence: \n");
        scanf ("%s", estado1);
        printf("Agora de um código para sua carta, utilizando a letra do estado mais um numero de 01 a 04: \n");
        scanf("%s", cod1);
        printf("Escolha um nome para sua cidade: \n");
        scanf("%s", nome_cidade1);
        printf("A carta esta ficando muito legal, agora me fale a população da cidade: \n");
        scanf("%d", &popu_cidade1);
        printf("Me diga também a área em km da cidade: \n");
        scanf("%f", &km1);
        printf("Qual o PIB da cidade: \n");
        scanf("%f", &pib1);
        printf("Agora quero saber uma parte muito importante da sua cidade, a quantidade de pontos turisticos: \n");
        scanf("%s", turisticos1);

            printf("Pronto, primeira carta concluida! Agora vô te mostrar como ela ficou a seguir: \n");

        //Mostrando dados carta 01.
        printf("Carta 1 Super Trunfo Cidades: \n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", cod1);
        printf("Nome da Cidade: %s\n", nome_cidade1);
        printf("População de: %d\n", popu_cidade1);
        printf("Área em KM Quadrados: %f\n", km1);
        printf("PIB em Bilhões de Reais: %f\n", pib1);
        printf("Número de Pontos Turisticos %s\n", turisticos1);
            
            printf("Agora, vamos criar a segunda carta! \n");

        //Colhendo dados da carta 02..
        printf("Qual estado a sua cidade pertence: \n");
        scanf ("%s", estado2);
        printf("Agora de um código para sua carta, utilizando a letra do estado mais um numero de 01 a 04: \n");
        scanf("%s", cod2);
        printf("Escolha um nome para sua cidade: \n");
        scanf("%s", nome_cidade2);
        printf("A carta esta ficando muito legal, agora me fale a população da cidade: \n");
        scanf("%d", &popu_cidade2);
        printf("Me diga também a área em km da cidade: \n");
        scanf("%f", &km2);
        printf("Qual o PIB da cidade: \n");
        scanf("%f", &pib2);
        printf("Agora quero saber uma parte muito importante da sua cidade, a quantidade de pontos turisticos: \n");
        scanf("%s", turisticos2);

            printf("Finalizamos aqui, a seguir você vera os dado da carta 02 \n");

        //Mostrando dados carta 02.
        printf("Carta 2 Super Trunfo Cidades: \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", cod2);
        printf("Nome da Cidade: %s\n", nome_cidade2);
        printf("População de: %d\n", popu_cidade2);
        printf("Área em KM Quadrados: %f\n", km2);
        printf("PIB em Bilhões de Reais: %f\n", pib2);
        printf("Número de Pontos Turisticos %s\n", turisticos2);
        

        


}
