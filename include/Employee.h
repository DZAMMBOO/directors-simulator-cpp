#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>

class Employee : public Person {
protected:
    std::string position;
    double salary;

public:
    Employee();
    Employee(std::string n, int a, std::string p, double s);
    ~Employee() override;

    void input() override;
    void output() const override;
};

#endif // EMPLOYEE_H
