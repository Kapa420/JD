#ifndef PASTELERIA.HPP
#define PASTELERIA.HPP

#include <iostream>

class Pasteleria
{
    public:

        Pasteleria(std::string nombre, std::string direccion, std::string telefono);
        std::string get_nombre();
        std::string get_direccion();
        std::string get_telefono();
        void set_nombre(std::string nombre);
        void set_direccion(std::string direccion);
        void set_telefono(std::string telefono);
    
    private:

    std::string nombre;
    std::string direccion;
    std::string telefono;
};

// Constructor de clase Pasteleria

Pasteleria::Pasteleria(std::string nombre, std::string direccion, std::string telefono)
{
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
}

// Getter y Setter de nombre Clase Pasteleria

std::string Pasteleria::get_nombre()
{
    return this->nombre;
}

void Pasteleria::set_nombre(std::string nombre)
{
    this->nombre = nombre;
}

// Getter y Setter de direccion Clase Pasteleria

std::string Pasteleria::get_direccion()
{
    return this->direccion;
}

void Pasteleria::set_direccion(std::string direccion)
{
    this->direccion = direccion;
}

// Getter y Setter de telefono Clase Pasteleria

std::string Pasteleria::get_telefono()
{
    return this->telefono;
}

void Pasteleria::set_telefono(std::string telefono)
{
    this->telefono = telefono;
}

#endif


#endif // !PASTELERIA.HPP
