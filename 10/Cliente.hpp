#ifndef CLIENTE.HPP
#define CLIENTE.HPP

#include <iostream>

class Cliente
{
public:
    Cliente(std::string nombre, std::string apellido, std::string telefono, std::string direccion, int id);
    std::string get_nombre();
    std::string get_apellido();
    std::string get_telefono();
    std::string get_direccion();
    int get_id();
    void set_nombre(std::string nombre);
    void set_apellido(std::string apellido);
    void set_telefono(std::string telefono);
    void set_direccion(std::string direccion);
    void set_id(int id);
    void escoger_categoria(std::string categoria);
    void programar_clase(std::string clase);

private:
    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string direccion;
    int id;
};

// Constructor de clase Cliente

Cliente::Cliente(std::string nombre, std::string apellido, std::string telefono, std::string direccion, int id)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->telefono = telefono;
    this->direccion = direccion;
    this->id = id;
}

// Getter y Setter de nombre Clase Cliente

std::string Cliente::get_nombre()
{
    return this->nombre;
}

void Cliente::set_nombre(std::string nombre)
{
    this->nombre = nombre;
}

// Getter y Setter de apellido Clase Cliente

std::string Cliente::get_apellido()
{
    return this->apellido;
}

void Cliente::set_apellido(std::string apellido)
{
    this->apellido = apellido;
}

// Getter y Setter de telefono Clase Cliente

std::string Cliente::get_telefono()
{
    return this->telefono;
}

void Cliente::set_telefono(std::string telefono)
{
    this->telefono = telefono;
}

// Getter y Setter de direccion Clase Cliente

std::string Cliente::get_direccion()
{
    return this->direccion;
}

void Cliente::set_direccion(std::string direccion)
{
    this->direccion = direccion;
}

// Getter y Setter de id Clase Cliente

int Cliente::get_id()
{
    return this->id;
}

void Cliente::set_id(int id)
{
    this->id = id;
}

// Funcion para escoger categoria

void Cliente::escoger_categoria(std::string categoria)
{
    std::cout << "Escogio la categoria: " << categoria << std::endl;
}

// Funcion para programar clase

void Cliente::programar_clase(std::string clase)
{
    std::cout << "Programo la clase: " << clase << std::endl;
}

#endif



#endif // !CLIENTE.HPP
