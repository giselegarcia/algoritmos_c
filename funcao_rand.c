#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int segundos = time(0);
    srand(segundos);

    int n1 = rand();

    printf("%d", n1);
return 0;
}