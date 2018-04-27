#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Usuario.h"

#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);

    mostrarListaSeries(listaDeSeries, TAMSERIE);

    mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);

    mostrarSerieConUsuarios(listaDeSeries, TAMSERIE, listaDeUsuarios, TAMUSUARIO);

/*  X 1. Mostrar el listado de series
    X 2. Mostrar el listado de usuarios
    X 3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    X 4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}
