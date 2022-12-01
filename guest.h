#pragma once
#include <string>

using namespace std;

//enum {Male, Famale, Non_binary};
//string eGender[]{"Male", "Famale", "Non_binary"};

class guest {
private:
    int id;
    std::string name;
    int age;
    std::string city;
    int phone_number;
    std::string gender;
public:
    guest(int id, std::string name, int age, std::string city, int phone_number, std::string gender);
    void printList();
    int getId();
    std::string getName();
    int getAge();
    std::string getCity();
    int getPhone_number();
    std::string getGender();
    };
