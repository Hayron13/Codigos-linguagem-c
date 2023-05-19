/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float alt, base, area;
    
    printf(" Informe a Altura: ");
    scanf("%f", &alt);
    printf(" Informe a Base: ");
    scanf("%f", &base);

    area = (alt * base)/2;
    
    printf(" A area do Triangulo e %f",area);
    return 0;
}
