#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int tirer_nombre(int min, int max) {
    int secret = (rand() % (max + 1 - min)) + min;
    return secret; 
}

int comparer(int proposition, int secret) {
    printf("Ton essai : %d", proposition);
    if (proposition>secret){
        printf("plus petit ! \r\n");
        return 1;
    }
    else if (proposition<secret){
        printf("plus grand ! \r\n");
        return -1;
    }
    printf("Bonne réponse");
    return 0;
}

int main(){
    srand(time(NULL));
    
    int compteur = 0;
    int proposition = 0;
    scanf("%d",&proposition);
    while(propositon!=secret){
        comparer(proposition,secret);
        compteur +=1;
    }
}

