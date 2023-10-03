#include <stdio.h>
#include<math.h>

int main()
{
    float num = 0, result = 0;

    int band = 0;

    while (!band)
    {
        printf("ingrese un valor: ");
        scanf("%f", &num);

        if(num > 0){
            result = num * log(num);
            printf("el resultado de f(x) = x*log(x) es: %f \n", result);
        } else {
            printf("Dato no valido;");
        }
        
        band = (num <= 0);
    }

    return 0;
}