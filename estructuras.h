#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED

typedef struct{
    char nombre[30];
    char apellido [30];
    int dni;
    int edad;
}persona;

/*typedef struct{
    int luz;
    int gas;
    int agua;
    int expensa;
}consumos;*/

typedef struct{
    int alquilado; //TRUE OR FALSE (1 o 0)
    persona inquilino;
    //consumos gastos;
    int ambientes;
    float costoPorMes;
    float deuda;
}departamento;

typedef struct{
    departamento vivienda;
    struct nodoDepartamentoArbol*derecha;
    struct nodoDepartamentoArbol*izquierda;
}nodoDepartamentoArbol;

typedef struct{
    int cantidadDepartamentos;
    char estado[30]; //HABILITADO - DESHABILITADO
    int nroPlanta;
}piso;

typedef struct{
    struct nodoDepartamentoArbol*hogar;
    piso planta;
    struct NodoPiso*siguiente;
    struct NodoPiso*anterior;
}NodoPiso;



#endif // ESTRUCTURAS_H_INCLUDED
