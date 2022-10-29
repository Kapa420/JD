#ifndef MAESTRO.HPP
#define MAESTRO.HPP

#include <iostream>

class Maestro
{
public:
    Maestro(std::string nombre, int id, std::string telefono);
    int get_id();
    std::string get_nombre();
    std::string get_telefono();
    std::string get_clase();
    void set_id(int id);
    void set_nombre(std::string nombre);
    void set_telefono(std::string telefono);
    void set_clase(std::string clase);
    void programar_clase(std::string clase);
    void programar_clase();


private:
    std::string nombre;
    std::string telefono;
    int id;
};

//Constructor de clase Maestro

Maestro::Maestro(std::string nombre, int id, std::string telefono)
{
    this->nombre = nombre;
    this->id = id;
    this->telefono = telefono;
}

// Getter y Setter de id Clase Maestro

int Maestro::get_id()
{
    return this->id;
}

void Maestro::set_id(int id)
{
    this->id = id;
}

// Getter y Setter de nombre Clase Maestro

std::string Maestro::get_nombre()
{
    return this->nombre;
}

void Maestro::set_nombre(std::string nombre)
{
    this->nombre = nombre;
}

// Getter y Setter de telefono Clase Maestro

std::string Maestro::get_telefono()
{
    return this->telefono;
}

void Maestro::set_telefono(std::string telefono)
{
    this->telefono = telefono;
}

// Getter y Setter de clase Clase Maestro

std::string Maestro::get_clase()
{
    return this->clase;
}

void Maestro::set_clase(std::string clase)
{
    this->clase = clase;
}

// Metodo programar clase Clase Maestro

void Maestro::programar_clase(std::string clase)
{
    this->clase = clase;
    std::cout << "Al maestro " << Maestro.get_nombre << " se le ha asignado la clase "<< clase << "." << std::endl;
}

void Maestro::programar_clase()
{
    std::cout << "Clase invalida. No se ha asignado clase." <<std::endl;
}



#endif // !MAESTRO.
