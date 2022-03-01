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
        std::cout << "Last name: " << name << std::endl;
        std::cout << "Years of experience: " << yearsExperience << std::endl;
        std::cout << "Hospital: " << hospital << std::endl;
        std::cout << "Gender ([F] - for female, [M] - for male): " << gender << std::endl;
    }
};

struct Collective
{
    Doctor doctors[9];

    void sortByExperience()
    {
        for (int i = 0; i < 4; ++i)
        {
            for (int j = i + 1; j < 4; ++j)
            {
                if (doctors[i].yearsExperience > doctors[j].yearsExperience)
                {
                    std::swap(doctors[i], doctors[j]);
                }
            }
        }
    }
};

void printDoctorInfo(const Collective &doctors)
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "****************" << std::endl;
        sortByExperience();
        doctors.doctors[i].print();
        std::cout << "****************" << std::endl;
    }
}

int main()
{
    Collective tenDoctors;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "============" << std::endl;
        std::cout << "Enter a last name of the doctor: ";
        std::cin.getline(tenDoctors.doctors[i].name, 32);
        std::cout << "Enter years of experience: ";
        std::cin >> tenDoctors.doctors[i].yearsExperience;
        std::cout << "Enter a hospital: ";
        std::cin.getline(tenDoctors.doctors[i].hospital, 32);
        std::cout << "Enter gender ([F] - for female, [M] - for male): ";
        std::cin >> tenDoctors.doctors[i].gender;
        std::cout << "============" << std::endl;
        std::cin.ignore();
    }

    return 0;
}
