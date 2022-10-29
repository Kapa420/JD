#ifndef ACADEMIA.HPP

#define ACADEMIA.HPP

#include <iostream>

class Academia
{
public:
    Academia(std::string nombre, std::string direccion, std::string telefono, std::string correo, int nit);
    std::string get_nombre();
    std::string get_direccion();
    std::string get_telefono();
    std::string get_correo();
    int get_nit();
    void set_nombre(std::string nombre);
    void set_direccion(std::string direccion);
    void set_telefono(std::string telefono);
    void set_correo(std::string correo);
    void set_nit(int nit);
    void atencion_cliente();
    void base_datos();
    void segmentar_clientes();


private:
    std::string nombre;
    std::string direccion;
    std::string telefono;
    std::string correo;
    int nit;
};

// Constructor de clase Academia

Academia::Academia(std::string nombre, std::string direccion, std::string telefono, std::string correo, int nit)
{
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
    this->correo = correo;
    this->nit = nit;
}

// Getter y Setter de nombre Clase Academia

std::string Academia::get_nombre()
{
    return this->nombre;
}

void Academia::set_nombre(std::string nombre)
{
    this->nombre = nombre;
}

// Getter y Setter de direccion Clase Academia

std::string Academia::get_direccion()
{
    return this->direccion;
}

void Academia::set_direccion(std::string direccion)
{
    this->direccion = direccion;
}

// Getter y Setter de telefono Clase Academia

std::string Academia::get_telefono()
{
    return this->telefono;
}

void Academia::set_telefono(std::string telefono)
{
    this->telefono = telefono;
}

// Getter y Setter de correo Clase Academia

std::string Academia::get_correo()
{
    return this->correo;
}

void Academia::set_correo(std::string correo)
{
    this->correo = correo;
}

// Getter y Setter de nit Clase Academia

int Academia::get_nit()
{
    return this->nit;
}

void Academia::set_nit(int nit)
{
    this->nit = nit;
}





#endif // !ACADEMIA.HPP