#include "Employee.h"

#include <iostream>
#include <limits>

Employee::Employee() : Person(), position(""), salary(0.0) {
    std::cout << "Employee default constructor called\n";
}

Employee::Employee(std::string n, int a, std::string p, double s)
    : Person(n, a), position(p), salary(s) {
    std::cout << "Employee parameterized constructor called\n";
}

Employee::~Employee() {
    std::cout << "Employee destructor called\n";
}

void Employee::input() {
    Person::input();
    std::cout << "Enter position: ";
    std::getline(std::cin, position);
    std::cout << "Enter salary: ";
    std::cin >> salary;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода
}

void Employee::output() const {
    Person::output();
    std::cout << "Position: " << position << "\n";
    std::cout << "Salary: " << salary << "\n";
}
