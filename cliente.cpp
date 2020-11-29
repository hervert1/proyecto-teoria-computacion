#include "cliente.h"

Cliente::Cliente()
{

}

string Cliente::getNombre() const
{
    return nombre;
}

void Cliente::setNombre(const string& value)
{
    nombre = value;
}

string Cliente::getRFC() const
{
    return rfc;
}

void Cliente::setRFC(const string& value)
{
    rfc = value;
}

string Cliente::getDireccion() const
{
    return direccion;
}

void Cliente::setDireccion(const string& value)
{
    direccion = value;
}

int Cliente::getCodigoPostal() const
{
    return codigoPostal;
}

void Cliente::setCodigoPostal(int value)
{
    codigoPostal = value;
}

string Cliente::getColonia() const
{
    return colonia;
}

void Cliente::setColonia(const string& value)
{
    colonia = value;
}

string Cliente::getMunicipio() const
{
    return municipio;
}

void Cliente::setMunicipio(const string& value)
{
    municipio = values;
}

string Cliente::getEstado() const
{
    return estado;
}

void Cliente::setEstado(const string& value)
{
    estado = value;
}

int Cliente::getTelefono() const
{
    return telefono;
}

void Cliente::setTelefono(int value)
{
    telefono = value;
}

string Cliente::getCorreoElectronico() const
{
    return correoElectronico;
}

void Cliente::setCorreoElectronico(const string& value)
{
    correoElectronico = value;
}

string Cliente::getGenero() const
{
    return genero;
}

void Cliente::setGenero(const string& value)
{
    genero = value;
}

int Cliente::getEdad() const
{
    return edad;
}

void Cliente::setEdad(int value)
{
    edad = value;
}

int Cliente::getTipoCliente() const
{
    return tipoCliente;
}

void Cliente::setTipoCliente(int value)
{
    tipoCliente = value;
}
