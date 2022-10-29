#ifndef PASTEL.HPP
#define PASTEL.HPP

#include <iostream>

class Pastel
{
public:

    Pastel(std::string peso, std::string sabor, std::string porciones, std::string diseno);
    std::string get_peso();
    std::string get_sabor();
    std::string get_porciones();
    std::string get_diseno();
    void set_peso(std::string peso);
    void set_sabor(std::string sabor);
    void set_porciones(std::string porciones);
    void set_diseno(std::string diseno);

private:

    std::string peso;
    std::string sabor;
    std::string porciones;
    std::string diseno;

};

// Constructor de clase Pastel

Pastel::Pastel(std::string peso, std::string sabor, std::string porciones, std::string diseno)
{
    this->peso = peso;
    this->sabor = sabor;
    this->porciones = porciones;
    this->diseno = diseno;
}

// Getter y Setter de peso Clase Pastel

std::string Pastel::get_peso()
{
    return this->peso;
}

void Pastel::set_peso(std::string peso)
{
    this->peso = peso;
}

// Getter y Setter de sabor Clase Pastel

std::string Pastel::get_sabor()
{
    return this->sabor;
}

void Pastel::set_sabor(std::string sabor)
{
    this->sabor = sabor;
}

// Getter y Setter de porciones Clase Pastel

std::string Pastel::get_porciones()
{
    return this->porciones;
}

void Pastel::set_porciones(std::string porciones)
{
    this->porciones = porciones;
}

// Getter y Setter de diseno Clase Pastel

std::string Pastel::get_diseno()
{
    return this->diseno;
}

void Pastel::set_diseno(std::string diseno)
{
    this->diseno = diseno;
}

#endif



#endif // !PASTEL.HPP




