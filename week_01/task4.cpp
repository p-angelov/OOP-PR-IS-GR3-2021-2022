/*
Задача 4:
а) Създайте структура Doctor, който има фамилия, години стаж, име на болница, в която работи и пол.
Структурата да притежава методи за изкарване на цялата информация на конкретен лекар, метод за
смяна на фамилията и метод за смяна на името на болницата.
-структура Доктор
-метод за конкретен доктор
-метод за смяна на фамилията
-метод за смяна на болницата

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

    //doctor search function
    int specific;
    
    void searchDoctor(Doctor doctor[])
    {
        std::cout << "Choose a doctor from 1-10 to display info: ";
        std::cin >> specific;
        doctor[specific - 1].print();
    }
    /*
    int index = specific - 1;
    void changeName(Doctor doctor[index])
    {
        char newName[32];
        std::cout << "New name: ";
        std::cin.getline(newName, 32);
        *tenDoctors[specific - 1].name = *newName;
    }

    void changeHospital()
    {
        char newHospital[32];
        std::cout << "New hospital: ";
        std::cin.getline(newHospital, 32);
        *tenDoctors[specific - 1].hospital = *newHospital;
    }
    */
};

void sortByExperience(Doctor *tenDoctors)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i + 1; j < 3; ++j)
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
    for (int i = 0; i < 3; ++i)
    {
        tenDoctors[i].print();
    }
}

int main()
{
    Doctor tenDoctors[9];

    for (int i = 0; i < 3; ++i)
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

    tenDoctors -> searchDoctor(tenDoctors);

    //name and hopsital changer
    // int nameChanger;
    // std::cout << "1 - change name \n2 - change hospital: ";
    // std::cin >> nameChanger;

    std::cout << "All doctors sorted by years of experience: " << std::endl;
    sortByExperience(tenDoctors);
    printDoctorInfo(tenDoctors);

    

    return 0;
}
