#include<stdio.h>
#include<stdint.h>

#include"productos.h"

int main(){
    //imprimirProductos();
    printf("\n");
    tproducto productos[CANT];
    int opcion;
        cargarProductos(productos);

    do{
        printf("1-Carga  productos \n");
        printf("2-Lista productos \n");
        printf("3-Finalizar programa \n\n");
        printf("Elija su opcion: ");
        scanf("%i",&opcion);
        printf("\n");
        switch(opcion){
        case 1:
            cargar(productos);
            break;
        case 2:
            imprimir(productos);
            break;
        }
    }while(opcion!=3);
    return 0;
}
