#include <stdio.h>

int power(int base, int exp){
    int erg = 1;
    for (int i = 0; i < exp; i++){
        erg = erg * base;
    }return erg;

}
// Hier wird mit einer for schleife die länge des eingegebenens Strings berechnet 
int strlenght(char* zahl){
    // i muss außerhalb der schleife stehen damit wir es returnen können
    int i = 0;
    for (; zahl[i] != '\0'; i++ ){
        ;
    }return i; 
}


int main(int argc, char* argv[]){
    // hier wird kontrolliert ib nur ein Argument eingelsen wird wir nehmen grösser 2 weil der dateiname auch ein argument ist
    if(argc > 2){
        return -1;
    }
    // hier sagen wir das das argument zahl in den zweiten platz der liste argv gespeichert wird  
    char* zahl = argv[1];

    printf("%d\n", power(3,3));

    int eq = strlenght(zahl);
    printf("%d\n", eq );

    return 0;
}