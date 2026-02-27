#include <stdio.h>

int main() {
    int idadeAnos, idadeSegundos;
    
    scanf("%d", &idadeAnos);
    
    idadeSegundos = 365 * idadeAnos * 86400;
    
    printf("%d", idadeSegundos);
    
	return 0;
}