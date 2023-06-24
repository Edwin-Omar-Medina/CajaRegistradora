#include<stdio.h>
#include<string.h>
#include"productos.h"


void cargarProductos(tproducto productos[CANT]){
    productos[0].codigo=1;
    char nuevoa[40]="papa";
    printf("%s\n",nuevoa);
    productos[0].descripcion;
    productos[0].precio=23.03;

    productos[1].codigo=2;
    productos[1].descripcion[40]= 'H';
    productos[1].precio=53.03;
}


void imprimirProductos(){
    FILE *arch=fopen("DespensaProductos.dat","wb");
    if (arch==NULL)
        exit(1);
    int v1;
    fread(&v1, sizeof(int), 1, arch);
    printf("entero: %i\n",v1);
    char c[40];
    fread(&c,sizeof(char),1,arch);
    printf("caracter: %c\n",c);
    float f1;
    fread(&f1, sizeof(float), 1, arch);
    printf("float: %0.3f\n",f1);
    fclose(arch);

}

void copiar (char destino[], char origen[])
{  int i=0;
   while (origen[i]!= 0)
    { destino[i] = origen[i];  // copiamos caracter a caracter
      i++;
    }
   destino[i] = 0;  // no se debe olvidar de colocar el caracter de terminación
}
