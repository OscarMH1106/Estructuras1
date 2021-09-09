#include <stdio.h>
#include <math.h>

float pedirnumero(float *num2);
void calculadora(float *num1,float *num2);

int main()
{
    float numero1, numero2;
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

float pedirnumero(float *num2)
{
    float num1;
    printf("Ingrese el primer numero\n");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%f", & *num2);
    return num1;
}

void calculadora(float *num1,float *num2)
{
    int cont,nume1,nume2;
    float resultado,res2sqrt;
    printf("Que operacion desea hacer\n");
    printf("1:Suma\n");
    printf("2:Resta\n");
    printf("3:Multiplicacion\n");
    printf("4:Division\n");
    printf("5:Potencia\n");
    printf("6:Modulo\n");
    printf("7:Raiz cuadrada\n");
    scanf("%d",&cont);
    switch (cont)
    {
    case 1:
        resultado=*num1 + *num2;
        printf("El resultado es: %.2f \n",resultado);
        break;
    case 2:
        resultado = *num1 - *num2;
        printf("El resultado es: %.2f \n",resultado);
        break;
    case 3:
        resultado = *num1 * *num2;
        printf("El resultado es: %.2f \n",resultado);
        break;
    case 4:
        resultado = *num1 / *num2;
        printf("El resultado es: %.2f \n",resultado);
        break;
    case 5:
        resultado = pow(*num1,*num2);
        printf("El resultado es: %.2f \n",resultado);
        break;
    case 6:
        nume1 = ceil(*num1);
        nume2 = ceil(*num2);
        resultado = nume1 % nume2;
        printf("El resultado es: %.2f \n",resultado);
        break;
    case 7:
        resultado = sqrt(*num1);
        res2sqrt = sqrt(*num2);
        printf("El resultado de la 1er raiz es: %.2f \n",resultado);
        printf("El resultado de la 2da raiz es: %.2f \n",res2sqrt);
        break;
    default:
        if(cont>7)
        {
            printf("Operacion incorrecta\n");
        }else{
            printf("Operacion incorrecta\n");
        }
        break;
    }
}