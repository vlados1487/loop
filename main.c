#include <stdio.h>
#include <math.h>

/*<postuslovie>
do{
    <blok koda>
}while (<uslovie>);
*/
/*
for (int index = 0; uslovie vixoda is cikla; index++){
    <blok koda>;
}
continue;

*/

void main(){
    int nach = 0, kon = 1000;
    int a, b;
    printf("vvedite 2 chisla\n");
    scanf("%d %d", &a, &b);
    do{
        if(a < nach || b < nach || a > kon || b > kon){
            printf("nesootvetstvie prome3shutku");
        }

    }while(a > nach && a < kon && b > nach && b < kon);
        for(int nod = 1000; ; nod--){
        if(a % nod == 0 && b % nod == 0){
            printf("%d\n", nod);
            break;
        }

    }
    }

