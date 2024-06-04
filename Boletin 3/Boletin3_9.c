#include <stdio.h>

typedef enum {
    ENERO,
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
} tMes;

tMes mesSiguiente(tMes mes){
    return (mes + 1) % 12;
}

char* obtenerNombreMes(tMes mes){
    switch (mes) {
        case ENERO: return "Enero";
        case FEBRERO:return "Febrero";
        case MARZO: return "Marzo";
        case ABRIL: return "Abril";
        case MAYO: return "Mayo";
        case JUNIO: return "Junio";
        case JULIO: return "Julio";
        case AGOSTO: return "Agosto";
        case SEPTIEMBRE: return "Septiembre";
        case OCTUBRE: return "Octubre";
        case NOVIEMBRE: return "Noviembre";
        case DICIEMBRE: return "Diciembre";
        default: return "Desconocido";

    }

}

int main(){
    tMes(mes) = FEBRERO;
    printf("")

    return 0;
}