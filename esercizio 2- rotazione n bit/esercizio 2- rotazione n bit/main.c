//
//  main.c
//  esercizio 2- rotazione n bit
//
//  Created by Roberto Vecchio on 06/03/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>

char rotate(char,int);
void calc_bin(int);

int main(int argc, const char * argv[]) {
    char lettera;
    int n_bit;
    
    printf("inserisci una lettera: ");
    scanf("%c", &lettera);
    
    printf("\ndi quanti bit vuoi spostarti: ");
    scanf("%d", &n_bit);
    
    lettera = rotate(lettera, n_bit);
    
    printf("\nlettera ruotata = %c\n", lettera);
    return 0;
}

char rotate(char lettera, int n_bit){
    printf("lettera in binario = ");
    calc_bin(lettera);
    char a = lettera >> n_bit;
    printf("\n");
    printf("shift a destra in binario = ");
    calc_bin(a);
    char b = lettera << (8 - n_bit);
    printf("\n");
    printf("shift a sinistra in binario = ");
    calc_bin(b);
    lettera = a | b;
    printf("\n");
    printf("lettera ruotata in binario = ");
    calc_bin(lettera);
    return lettera;
}

void calc_bin(int n){
    int k,c;
    for (c = 7; c >= 0; c--)
    {
        k = n >> c;
        
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    
    printf("\n");
}
