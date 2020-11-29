
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include "menuclientes.h"
#include "lista.h"
#ifdef _WIN32
#define COLOR "color 4f"
#define TITULO "title Indices"
#else
#define COLOR ;
#define TITULO ;
#endif // _WIN32

using namespace std;

typedef enum {AGREGAR=1,MOSTRAR,EDITAR,BUSCAR,ELIMINAR,SALIR}Menu;
MenuClientes::MenuClientes(Cliente*& cliente)
{
    c = cliente;
    int op;

    while(true) {
        system("cls");
        cout << "[1]: Agregar Cliente" << endl;
        cout << "[2]: Mostrar Cliente" << endl;
        cout << "[3]: Editar Cliente" << endl;
        cout << "[4]: Buscar Cliente" << endl;
        cout << "[5]: Eliminar Cliente" << endl;
        cout << "[0]: Salir" << endl;
        cin >> op;

        switch (op) {
        case AGREGAR:
            break;
        case MOSTRAR:
            break;
        case EDITAR:
            break;
        case BUSCAR:
            break;
        case ELIMINAR:
            break;
        case SALIR:
            break;
        default:
            cout << "Opcion no valida..." << endl;
            break;
        }
        system("pause");
        system("cls");
        cin.ignore();
    }
}

void MenuClientes::agregarCliente()
{

}

void MenuClientes::mostrarCliente()
{

}

void MenuClientes::editarCliente()
{

}

void MenuClientes::buscarCliente()
{

}

void MenuClientes::eliminarCliente()
{

}
