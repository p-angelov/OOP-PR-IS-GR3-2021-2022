/*
Задача 4:
а) Създайте структура Doctor, който има фамилия, години стаж, име на болница, в която работи и пол.
Структурата да притежава методи за изкарване на цялата информация на конкретен лекар, метод за
смяна на фамилията и метод за смяна на името на болницата.

б) Създайте масив от 10 доктора, след което ги сортирайте по години стаж.
*/

#include <iostream>
#include <cstring>

struct Doctor
{
    char name[32];
    int yearsExperience;
    char hospital[32];
    char gender;

    void print() const
    {
        std::cout << "-------------------------------" << std::endl;
        std::cout << "Name: Dr. " << name << std::endl;
        std::cout << "Experience: " << yearsExperience << " years" << std::endl;
        std::cout << "Hospital: " << hospital << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "-------------------------------" << std::endl;
    }

    void changeName()
    {
        std::cout << "New name: ";
    }

    void changeHospital()
    {
    }
};

void sortByExperience(Doctor *tenDoctors)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (tenDoctors[i].yearsExperience > tenDoctors[j].yearsExperience)
            {
                std::swap(tenDoctors[i], tenDoctors[j]);
            }
        }
    }
}

void printDoctorInfo(const Doctor *tenDoctors)
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "****************" << std::endl;
        tenDoctors[i].print();
        std::cout << "****************" << std::endl;
    }
}

int main()
{
    Doctor tenDoctors[9];
    int specific;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "============" << std::endl;

        std::cout << "Enter a last name of the doctor: ";
        std::cin.getline(tenDoctors[i].name, 32);

        std::cout << "Enter years of experience: ";
        std::cin >> tenDoctors[i].yearsExperience;
        std::cin.ignore();

        std::cout << "Enter a hospital: ";
        std::cin.getline(tenDoctors[i].hospital, 32);

        std::cout << "Enter gender ([F] - for female, [M] - for male): ";
        std::cin >> tenDoctors[i].gender;

        std::cout << "============" << std::endl;
        std::cin.ignore();
    }

    std::cout << "Choose a doctor from 1-10 to display info: ";
    std::cin >> specific;
    tenDoctors[specific - 1].print();

    int nameChanger;
    std::cout << "1 - change name \n2 - change hospital: ";
    std::cin >> nameChanger;
    if (nameChanger == 1)
    {

    }
    else if (nameChanger == 2)
    {

    }
    else
    {
        
    }

    return 0;
}
