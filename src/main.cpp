#include <iostream>
#include <limits>
#include <vector>

#include "Person.h"
#include "Employee.h"
#include "Manager.h"

void displayMenu() {
    std::cout << "\n--- Menu ---\n";
    std::cout << "1. Add Person\n";
    std::cout << "2. Add Employee\n";
    std::cout << "3. Add Manager\n";
    std::cout << "4. Display All\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

void displayAll(const std::vector<Person*>& database) {
    std::cout << "\n--- Database ---\n";
    for (const auto& entry : database) {
        entry->output();
        std::cout << "----------------\n";
    }
}

int main() {
    std::vector<Person*> database;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода

        switch (choice) {
            case 1: {
                auto* person = new Person();
                person->input();
                database.push_back(person);
                break;
            }
            case 2: {
                auto* employee = new Employee();
                employee->input();
                database.push_back(employee);
                break;
            }
            case 3: {
                auto* manager = new Manager();
                manager->input();
                database.push_back(manager);
                break;
            }
            case 4: {
                displayAll(database);
                break;
            }
            case 5: {
                std::cout << "Exiting...\n";
                break;
            }
            default: {
                std::cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 5);

    // Удаление всех объектов из базы данных
    for (const auto entry : database) {
        delete entry;
    }

    return 0;
}
