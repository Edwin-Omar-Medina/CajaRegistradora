typedef struct {
    int codigo;
    char descripcion[40];
    float precio;
}tproducto;

#define CANT 4

void cargarProductos(tproducto productos[CANT]);
void imprimirProductos();

void cargar(tproducto productos[CANT]);
void imprimir (tproducto productos[CANT]);
