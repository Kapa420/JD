#ifndef PEDIDO.HPP
#define PEDIDO.HPP
#include <iostream>

class Pedido
{
public:
    Pedido(int precio, 
           int abono, 
           std::string fecha, 
           std::string numero_pedido, 
           std::string especificaiones, 
           std::string direccion_cliente, 
           std::string hora_entrega, 
           std::string requisitos_devolucion);
    int get_precio();
    int get_abono();
    std::string get_fecha();
    std::string get_numero_pedido();
    std::string get_especificaciones();
    std::string get_direccion_cliente();
    std::string get_hora_entrega();
    std::string get_requisitos_devolucion();
    void set_precio(int precio);
    void set_abono(int abono);
    void set_fecha(std::string fecha);
    void set_numero_pedido(std::string numero_pedido);
    void set_especificaciones(std::string especificaciones);
    void set_direccion_cliente(std::string direccion_cliente);
    void set_hora_entrega(std::string hora_entrega);
    void set_requisitos_devolucion(std::string requisitos_devolucion);


private:
    int precio;
    int abono;
    std::string fecha;
    std::string numero_pedido;
    std::string especificaiones;
    std::string direccion_cliente;
    std::string hora_entrega;
    std::string requisitos_devolucion;

};

// Constructor de clase Pedido

Pedido::Pedido(int precio, 
               int abono, 
               std::string fecha, 
               std::string numero_pedido, 
               std::string especificaciones, 
               std::string direccion_cliente, 
               std::string hora_entrega, 
               std::string requisitos_devolucion)
{
    this->precio = precio;
    this->abono = abono;
    this->fecha = fecha;
    this->numero_pedido = numero_pedido;
    this->especificaiones = especificaciones;
    this->direccion_cliente = direccion_cliente;
    this->hora_entrega = hora_entrega;
    this->requisitos_devolucion = requisitos_devolucion;
}

// Getter y Setter de precio Clase Pedido

int Pedido::get_precio()
{
    return this->precio;
}

void Pedido::set_precio(int precio)
{
    this->precio = precio;
}

// Getter y Setter de abono Clase Pedido

int Pedido::get_abono()
{
    return this->abono;
}

void Pedido::set_abono(int abono)
{
    this->abono = abono;
}

// Getter y Setter de fecha Clase Pedido

std::string Pedido::get_fecha()
{
    return this->fecha;
}

void Pedido::set_fecha(std::string fecha)
{
    this->fecha = fecha;
}

// Getter y Setter de numero_pedido Clase Pedido

std::string Pedido::get_numero_pedido()
{
    return this->numero_pedido;
}

void Pedido::set_numero_pedido(std::string numero_pedido)
{
    this->numero_pedido = numero_pedido;
}

// Getter y Setter de especificaciones Clase Pedido

std::string Pedido::get_especificaciones()
{
    return this->especificaiones;
}

void Pedido::set_especificaciones(std::string especificaciones)
{
    this->especificaiones = especificaciones;
}

// Getter y Setter de direccion_cliente Clase Pedido

std::string Pedido::get_direccion_cliente()
{
    return this->direccion_cliente;
}

void Pedido::set_direccion_cliente(std::string direccion_cliente)
{
    this->direccion_cliente = direccion_cliente;
}

// Getter y Setter de hora_entrega Clase Pedido

std::string Pedido::get_hora_entrega()
{
    return this->hora_entrega;
}

void Pedido::set_hora_entrega(std::string hora_entrega)
{
    this->hora_entrega = hora_entrega;
}

// Getter y Setter de requisitos_devolucion Clase Pedido

std::string Pedido::get_requisitos_devolucion()
{
    return this->requisitos_devolucion;
}

void Pedido::set_requisitos_devolucion(std::string requisitos_devolucion)
{
    this->requisitos_devolucion = requisitos_devolucion;
}

#endif


#endif // !PEDIDO.HPP