#include <iostream>
#include <string>

int int main(int argc, const char** argv) {

    class Cliente
    {
    public:
        Cliente();
    private:
        std::string Names;
        std::string LastNames;
        std::string Address;
        int ID;
        int Phone;
    };
    
    Cliente::Cliente(std::string Names, std::string LastNames, std::string Address, int ID, int Phone)
    {
        this->Names = Names;
        this->LastNames = LastNames;
        this->Address = Address;
        this->ID = ID;
        this->Phone = Phone;
    }
    
    return 0;
}