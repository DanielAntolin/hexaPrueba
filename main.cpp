#include <iostream>
#include "hexa.h"

using namespace std;

int main()
{
    HexMessage mensaje;
    mensaje.cabecera = CABECERA;
    mensaje.destino = ALUMNO_DEST;
    mensaje.comando = HABILITAR_MOVIMIENTO;
    mensaje.argumento = SIN_ARGUMENTO;
    hexa clase;

    std::vector<unsigned char> array =  mensaje.generar_mensaje();

    if(clase.validad_respuesta(array,mensaje.comando)){
        std::cout<<"Todo perfecto";
}
    else{
        std::cout<< "Hay algo mal";

    }
}
