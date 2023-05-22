#include <stdio.h>

int main(){
    int num_matrices;

    // se empieza definiendo las variables y leyendo los datos del usuario

    printf("Ingrese la cantidad de matrices a imprimir: ");
    scanf("%d", &num_matrices);

    int tamano_filas, tamano_columnas;

    printf("Ingrese el tamano de filas de las matrices: ");
    scanf("%d", &tamano_filas);

    printf("Ingrese el tamano de columnas de las matrices: ");
    scanf("%d", &tamano_columnas);

    for (int k = 0; k < num_matrices; k++){
        printf("Matriz %d:\n", k+1);
        for (int i = 0; i < tamano_filas; i++) {
            for (int j = 0; j < tamano_columnas; j++) {
                int contenido = (k == num_matrices - 1) ? 1 : 0;
                printf("%d ", contenido); 
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
