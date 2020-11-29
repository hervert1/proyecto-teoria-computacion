#ifndef MENUCLIENTES_H_INCLUDED
#define MENUCLIENTES_H_INCLUDED

#include "cliente.h"

class MenuClientes {
    Cliente *c;
public:
    MenuClientes(Cliente* &cliente);
    void agregarCliente();
    void mostrarCliente();
    void editarCliente();
    void buscarCliente();
    void eliminarCliente();
};



#endif // MENUCLIENTES_H_INCLUDED
