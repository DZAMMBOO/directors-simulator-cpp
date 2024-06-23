#include "Person.h"

#include <iostream>
#include <limits>

Person::Person() : name(""), age(0) {
    std::cout << "Person default constructor called\n";
}

Person::Person(std::string n, int a) : name(n), age(a) {
    std::cout << "Person parameterized constructor called\n";
}

Person::~Person() {
    std::cout << "Person destructor called\n";
}

void Person::input() {
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода
}

void Person::output() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
}
