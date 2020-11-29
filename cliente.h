#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <iostream>
using namespace std;

class Cliente{
private:
    string nombre;
    string rfc;
    string direccion;
    int codigoPostal;
    string colonia;
    string municipio;
    string estado;
    int telefono;
    string correoElectronico;
    string genero;
    int edad;
    int tipoCliente;
public:
    Cliente();
    string getNombre() const;
    void setNombre(const string &value);
    string getRFC() const;
    void setRFC(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    int getCodigoPostal() const;
    void setCodigoPostal(int value);
    string getColonia() const;
    void setColonia(const string &value);
    string getMunicipio() const;
    void setMunicipio(const string &value);
    string getEstado() const;
    void setEstado(const string &value);
    int getTelefono() const;
    void setTelefono(int value);
    string getCorreoElectronico() const;
    void setCorreoElectronico(const string &value);
    string getGenero() const;
    void setGenero(const string &value);
    int getEdad() const;
    void setEdad(int value);
    int getTipoCliente() const;
    void setTipoCliente(int value);
};



#endif // CLIENTE_H_INCLUDED
