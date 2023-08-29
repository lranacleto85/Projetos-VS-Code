#include <stdlib.h>

int main()
{
    char nome[10];
    char nomeproduto[10];
    int quantidade;
    int valorunitario;
    int continua;
    int contador;
    float valortotal;
    float desconto;
    float valortotaldesconto;
    float valortotalfinal;
    float parcela;
    continua = "s";
    contador = 0;
    printf("\n Informe seu nome: ");
    scanf("%s", &nome);
    printf("\n Informe o produto adquirido: ");
    scanf("%s", &nomeproduto);
    printf("\n Informe a quantidade comprada: ");
    scanf("%i", &quantidade);
    printf("\n Informe o valor unitário do produto adquirido: R$ ");
    scanf("%i", &valorunitario);
    printf("\n\n");
    valortotal = quantidade * valorunitario;
    scanf("%f", &valortotal);
    printf("\n O valor total da compra foi de: R$ %.2f", valortotal);
    printf("\n\n");
    while (continua == 0)
    {
        printf("\n Informe o produto adquirido: ");
        scanf("%s", &nomeproduto);
        printf("\n Informe a quantidade comprada: ");
        scanf("%i", &quantidade);
        printf("\n Informe o valor unitário do produto adquirido: R$ ");
        scanf("%i", &valorunitario);
        printf("\n\n");
        valortotal = quantidade * valorunitario;
        printf("\n O valor total da compra foi de: R$ %.2f", valortotal);
        printf("\n\n");
        printf("Tecle 's' se deseja continuar\n");
        continua = getch();
    }
    if (contador == 0)
        printf("O bloco NAO foi repetido.");
    else
        printf("O bloco foi repetido %d vezes", contador);

    return 0;
}
