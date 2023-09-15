#include <stdio.h>
#include <stdlib.h>

int main()
{float fahrenheit, celsius;
    char sensation[20];

    printf("Entrez la temp�rature en Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    if (celsius < 0) {
        strcpy(sensation, "tr�s froid");
    } else if (celsius >= 0 && celsius < 10) {
        strcpy(sensation, "froid");
    } else if (celsius >= 10 && celsius < 25) {
        strcpy(sensation, "chaud");
    } else {
        strcpy(sensation, "tr�s chaud");
    }

    printf("La temp�rature en degr�s Celsius est : %.2f\n", celsius);
    printf("Sensation ressentie : %s\n", sensation);

    printf("Hello world!\n");
    return 0;
}
