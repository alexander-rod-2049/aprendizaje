#include <stdio.h>
#include <stddef.h>
typedef struct Integer_Pair {
    int number;
    int expected;
} pair;

typedef struct {
	char c;
	int x;
} mezcla;

pair par_prueba = {3,6};
mezcla mix_prueba = {'r',7};

int main (void){

printf("El tamaño de par de ints es: %zu \n",sizeof(par_prueba));
printf("El tamaño de char e int en struct es: %zu \n",sizeof(mix_prueba));
printf("Offset de int x en struct es: %zu \n",offsetof(mezcla,x));
return 0;
}
