#include <stdio.h>
#include <math.h>

int pedirnumero(int *num2);
void calculadora(int *num1,int *num2);

int main()
{
    int numero1, numero2;
    int opcion = 1 ;
    while (opcion==1)
    {
        numero1 = pedirnumero(&numero2);
        calculadora(&numero1, &numero2);
        printf("Que deseas hacer\n");
        printf("Opcion 1:Continuar la calculadora\n");
        printf("Opcion 2:Salir\n");
        scanf("%d",&opcion);
        if(opcion<1 ||	opcion>2)
        printf("Opcion incorrecta \n");
    }

    return 0;
}

int pedirnumero(int *num2)
{
    int num1;
    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", & *num2);
    return num1;
}

void calculadora(int *num1,int *num2)
{
    int resultado;
    char cont;
    float resultadoflotante,cambio1,cambio2,res2sqrt;
    printf("Que operacion desea hacer\n");
    printf("+:Suma\n");
    printf("-:Resta\n");
    printf("*:Multiplicacion\n");
    printf("/:Division\n");
    printf("^:Potencia\n");
    printf("%:Modulo\n");
    printf("r:Raiz cuadrada\n");
    scanf("%s",&cont);
    switch (cont)
    {
    case '+':
        resultado=*num1 + *num2;
        printf("El resultado es: %d \n",resultado);
        break;
    case '-':
        resultado = *num1 - *num2;
        printf("El resultado es: %d \n",resultado);
        break;
    case '*':
        resultado = *num1 * *num2;
        printf("El resultado es: %d \n",resultado);
        break;
    case '/':
        cambio1 = *num1+0.00;
        cambio2 = *num2+0.00;
        resultadoflotante = cambio1 / cambio2;
        printf("El resultado es: %.2f \n",resultadoflotante);
        break;
    case '^':
        resultado = pow(*num1,*num2);
        printf("El resultado es: %d \n",resultado);
        break;
    case '%':
        resultado = *num1 % *num2;
        printf("El resultado es: %d \n",resultado);
        break;
    case 'r':
        cambio1 = *num1+0.00;
        cambio2 = *num2+0.00; 
        resultadoflotante = sqrt(cambio1);
        res2sqrt = sqrt(cambio2);
        printf("El resultado de la 1er raiz es: %.2f \n",resultadoflotante);
        printf("El resultado de la 2da raiz es: %.2f \n",res2sqrt);
        break;
    default:
            printf("Operacion incorrecta\n");
        break;
    }
}