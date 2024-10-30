#include <stdio.h>
#include <math.h>

void soma() {
    double a, b;
    printf("digite dois numeros: ");
        scanf("%lf %lf", &a, &b);
    printf("resultado: %.2lf\n", a + b);
}

void subtracao() {
    double a, b;
    printf("digite dois numeros: ");
     scanf("%lf %lf", &a, &b);
    printf("resultado: %.2lf\n", a - b);
}

void multiplicacao() {
    double a, b;
    printf("digite dois numeros: ");
        scanf("%lf %lf", &a, &b);
    printf("resultado: %.2lf\n", a * b);
}

void divisao() {
    double a, b;
    printf("digite dois numeros: ");
        scanf("%lf %lf", &a, &b);
    printf("resultado: %.2lf\n", a / b);
}

void exponenciacao() {
    double base, exp;
    printf("digite a base e o expoente: ");
        scanf("%lf %lf", &base, &exp);
    printf("resultado: %.2lf\n", pow(base, exp));
}

void raiz_quadrada() {
    double num;
    printf("digite um numero: ");
        scanf("%lf", &num);
    printf("resultado: %.2lf\n", sqrt(num));
}

void modulo() {
    int a, b;
    printf("digite dois numeros inteiros: ");
        scanf("%d %d", &a, &b);
    printf("Resultado: %d\n", a % b);
}

void bhaskara() {
    double a, b, c;
    printf("digite os coeficientes a, b e c: ");
        scanf("%lf %lf %lf", &a, &b, &c);
    double delta = b * b - 4 * a * c;
    printf("Raizes: %.2lf e %.2lf\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
}

int main() {
    int opcao;

   printf("Calculadora do maverson e do reinatinho\n"); do {
        printf("\n1. soma\n2. subtracao\n3. multiplicacao\n4. divisao\n");
        
        printf("5. exponenciacao\n6. raiz quadrada\n7. modulo\n8. Bhaskara\n9. Sair\n");
        
        printf("Escolha uma operacao: ");
            scanf("%d", &opcao);

          switch (opcao) {
            
            case 1: soma(); 
            break;
            case 2: subtracao(); 
            break;
            case 3: multiplicacao(); 
            break;
            case 4: divisao(); 
            break;
            case 5: exponenciacao(); 
            break;
            case 6: raiz_quadrada(); 
            break;
            case 7: modulo(); 
            break;
            case 8: bhaskara(); 
            break;
            case 9: printf("Saindo...\n");
            break;
        
        }
    } while (opcao != 9);

    return 0;
}
