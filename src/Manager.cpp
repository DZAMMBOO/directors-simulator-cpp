#include "Manager.h"

#include <iostream>
#include <limits>

Manager::Manager() : Employee(), teamSize(0) {
    std::cout << "Manager default constructor called\n";
}

Manager::Manager(std::string n, int a, std::string p, double s, int t)
    : Employee(n, a, p, s), teamSize(t) {
    std::cout << "Manager parameterized constructor called\n";
}

Manager::~Manager() {
    std::cout << "Manager destructor called\n";
}

void Manager::input() {
    Employee::input();
    std::cout << "Enter team size: ";
    std::cin >> teamSize;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода
}

void Manager::output() const {
    Employee::output();
    std::cout << "Team size: " << teamSize << "\n";
}
