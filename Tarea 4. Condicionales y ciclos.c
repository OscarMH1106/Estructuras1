#include <stdio.h>

void cicloFor(int *num1,int *num2);
void cicloWhile(int *num1,int *num2);
void cicloDoWhile(int *num1,int *num2);


int main()
{ 
    int numero1 , numero2;
    printf("Ingrese el primer numero\n");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numero2);
    if(numero1<numero2)
    {
        cicloFor(&numero1,&numero2);
        cicloWhile(&numero1,&numero2);
        cicloDoWhile(&numero1,&numero2);
    }else{
        printf("Parametro incorrecto\n");
    }    
    return 0;
}

void cicloFor(int *num1,int *num2)
{
    int i = 0;
    printf("Los numeros son:\n");
    for (i = *num1; i <= *num2; i++)
    {
        printf("%d\n",i);
    }
    
}
    



void cicloWhile(int *num1, int *num2)
{
    int i;
    i = *num1;
    printf("Los numeros son:\n");
    while (i <= *num2)
    {
        printf("%d\n",i);
        i++;
    }
    
}

void cicloDoWhile(int *num1, int *num2)
{
    int i;
    i = *num1;
    printf("Los numeros son:\n");
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<= *num2);
    
}