#ifndef TIPO.HPP
#define TIPO.HPP

#include <iostream>

class Tipo
{   
public:
    Tipo(std::string nombre, std::string categoria);
    std::string get_nombre();
    std::string get_categoria();
    void set_nombre(std::string nombre);
    void set_categoria(std::string categoria);
    void obtener_categoria();


private:
    std::string nombre;
    std::string categoria;
};

// Constructor de clase Tipo

Tipo::Tipo(std::string nombre, std::string categoria)
{
    this->nombre = nombre;
    this->categoria = categoria;
}

// Getter y Setter de nombre Clase Tipo

std::string Tipo::get_nombre()
{
    return this->nombre;
}

void Tipo::set_nombre(std::string nombre)
{
    this->nombre = nombre;
}

// Getter y Setter de categoria Clase Tipo

std::string Tipo::get_categoria()
{
    return this->categoria;
}

void Tipo::set_categoria(std::string categoria)
{
    this->categoria = categoria;
}

// Funciones de clase Tipo

void Tipo::obtener_categoria()
{
    std::cout << "Categoria" << std::endl;
}



#endif // !TIPO.HPP
