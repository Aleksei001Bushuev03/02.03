#include <iostream>
#include <string>
#include <Windows.h>

struct Address {
    std::string city;            
    std::string street;          
    int houseNumber;             
    int apartmentNumber;        
    int postalCode;              
};

void printAddress(const Address& addr) {
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Номер дома: " << addr.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
    std::cout << "Индекс: " << addr.postalCode << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Address addr1;

    std::cout << "Введите данные первого адреса:" << std::endl;
    std::cout << "Город: ";
    std::getline(std::cin, addr1.city);
    std::cout << "Улица: ";
    std::getline(std::cin, addr1.street);
    std::cout << "Номер дома: ";
    std::cin >> addr1.houseNumber;
    std::cout << "Номер квартиры: ";
    std::cin >> addr1.apartmentNumber;
    std::cout << "Индекс: ";
    std::cin >> addr1.postalCode;
    std::cin.ignore(); 

    Address addr2;

    std::cout << "\nВведите данные второго адреса:" << std::endl;
    std::cout << "Город: ";
    std::getline(std::cin, addr2.city);
    std::cout << "Улица: ";
    std::getline(std::cin, addr2.street);
    std::cout << "Номер дома: ";
    std::cin >> addr2.houseNumber;
    std::cout << "Номер квартиры: ";
    std::cin >> addr2.apartmentNumber;
    std::cout << "Индекс: ";
    std::cin >> addr2.postalCode;
    std::cin.ignore(); 

    
    std::cout << "\nПервый адрес:\n";
    printAddress(addr1);

    std::cout << "\nВторой адрес:\n";
    printAddress(addr2);

    return 0;
}
