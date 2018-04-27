#ifndef ESTRUCTURAGENERICA_H_INCLUDED
#define ESTRUCTURAGENERICA_H_INCLUDED
typedef struct
{
    char nombre[50];
    //------------
    int idGenerica;
    int estado;
}eGenerica;
#endif // ESTRUCTURAGENERICA_H_INCLUDED

int eGen_init(eGenerica[],int limite);
int eGen_buscarPorId(eGenerica[] ,int limite, int id);
int eGen_siguienteId(eGenerica[] ,int limite);
int eGen_buscarLugarLibre(eGenerica listado[],int limite);

int eGen_mostrarUno(eGenerica parametro);
int eGen_mostrarListado(eGenerica[] ,int limite);
int eGen_mostrarListadoConBorrados(eGenerica[] ,int limite);

int eGen_alta(eGenerica[] ,int limite);
int eGen_baja(eGenerica[] ,int limite, int id);
int eGen_modificacion(eGenerica[] ,int limite, int id);

int eGen_ordenar(eGenerica[] ,int limite, int orden);
