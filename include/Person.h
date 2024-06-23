#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person();
    Person(std::string n, int a);
    virtual ~Person();

    virtual void input();
    virtual void output() const;
};

#endif // PERSON_H
