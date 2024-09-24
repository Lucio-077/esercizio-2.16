#include <stdio.h>

int main(void) {
    float biglietto,provvigione,prezzof;
    printf("calcolo biglietto\ninserire prezzo biglietto");
    scanf("%f",&biglietto);
    provvigione = 0.15*biglietto;
    prezzof = provvigione+biglietto;
    printf("il prezzo finale del biglietto è : %f",prezzof);
}
