#include <stdio.h>
#include <string.h>

struct Pais {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
};

void mostrarMenu() {
    printf("\n=== SUPER TRUNFO - ESCOLHA O ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
}

void mostrarPais(struct Pais pais, int numero) {
    printf("\n--- CARTA %d ---\n", numero);
    printf("País: %s\n", pais.nome);
    printf("População: %d habitantes\n", pais.populacao);
    printf("Área: %.2f km²\n", pais.area);
    printf("PIB: %.2f bilhões\n", pais.pib);
    printf("Pontos Turísticos: %d\n", pais.pontos_turisticos);
    printf("Densidade Demográfica: %.2f hab/km²\n", pais.densidade_demografica);
}

void compararCartas(struct Pais pais1, struct Pais pais2, int opcao) {
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    
    mostrarPais(pais1, 1);
    mostrarPais(pais2, 2);
    
    printf("\n--- COMPARANDO ---\n");
    
    switch(opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", pais1.nome, pais1.populacao);
            printf("%s: %d habitantes\n", pais2.nome, pais2.populacao);
            
            if(pais1.populacao > pais2.populacao) {
                printf("VENCEDOR: %s (maior população)\n", pais1.nome);
            } else if(pais2.populacao > pais1.populacao) {
                printf("VENCEDOR: %s (maior população)\n", pais2.nome);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", pais1.nome, pais1.area);
            printf("%s: %.2f km²\n", pais2.nome, pais2.area);
            
            if(pais1.area > pais2.area) {
                printf("VENCEDOR: %s (maior área)\n", pais1.nome);
            } else if(pais2.area > pais1.area) {
                printf("VENCEDOR: %s (maior área)\n", pais2.nome);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", pais1.nome, pais1.pib);
            printf("%s: %.2f bilhões\n", pais2.nome, pais2.pib);
            
            if(pais1.pib > pais2.pib) {
                printf("VENCEDOR: %s (maior PIB)\n", pais1.nome);
            } else if(pais2.pib > pais1.pib) {
                printf("VENCEDOR: %s (maior PIB)\n", pais2.nome);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", pais1.nome, pais1.pontos_turisticos);
            printf("%s: %d pontos turísticos\n", pais2.nome, pais2.pontos_turisticos);
            
            if(pais1.pontos_turisticos > pais2.pontos_turisticos) {
                printf("VENCEDOR: %s (mais pontos turísticos)\n", pais1.nome);
            } else if(pais2.pontos_turisticos > pais1.pontos_turisticos) {
                printf("VENCEDOR: %s (mais pontos turísticos)\n", pais2.nome);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", pais1.nome, pais1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", pais2.nome, pais2.densidade_demografica);
            printf("ATENÇÃO: Neste atributo, vence quem tem MENOR valor!\n");
            
            if(pais1.densidade_demografica < pais2.densidade_demografica) {
                printf("VENCEDOR: %s (menor densidade demográfica)\n", pais1.nome);
            } else if(pais2.densidade_demografica < pais1.densidade_demografica) {
                printf("VENCEDOR: %s (menor densidade demográfica)\n", pais2.nome);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }
}

int main() {
    struct Pais brasil = {
        "Brasil",
        215000000,
        8515767.0,
        2055.0,
        7,
        25.23
    };
    
    struct Pais japao = {
        "Japão",
        125800000,
        377975.0,
        4940.0,
        12,
        332.89
    };
    
    int opcao;
    
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Você vai comparar duas cartas de países.\n");
    
    mostrarMenu();
    scanf("%d", &opcao);
    
    compararCartas(brasil, japao, opcao);
    
    printf("\nObrigado por jogar!\n");
    
    return 0;
}