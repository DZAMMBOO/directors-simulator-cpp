#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager();
    Manager(std::string n, int a, std::string p, double s, int t);
    ~Manager() override;

    void input() override;
    void output() const override;
};

#endif // MANAGER_H
