#include <stdio.h>
#include <stdlib.h>
#include <string.h>         
#include <locale.h>


int main() {
    setlocale(LC_ALL, "PORTUGUESE");
    unsigned long int numero_grande_posi = 4000000000; // Exemplo de número fora do intervalo de int
    unsigned int numero_positivo = 4000000000; // Exemplo de número fora do intervalo de unsigned int
    long int numero_grande = 4000000000; // Exemplo de número dentro do intervalo de unsigned int
    int numero = 4000000000; // Exemplo de número fora do intervalo de int
    double numero_double = 3.141592653589793; // Exemplo de número dentro do intervalo de double
    long double numero_long_double = 3.14159265358979323846; // Exemplo de número dentro do intervalo de long double    

    printf("Número positivo grande: %lu\n", numero_grande_posi);
    printf("Número positivo: %u\n", numero_positivo);
    printf("Número grande: %ld\n", numero_grande);  
    printf("Número: %d\n", numero); // Isso pode causar comportamento indefinido
    printf("Número double: %.15f\n", numero_double);
    printf("Número long double: %.21Lf\n", numero_long_double);
    