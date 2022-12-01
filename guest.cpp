#include <iostream>
#include "guest.h"

using namespace std;

guest::guest (int id, std::string name, int age, std::string city, int phone_number, std::string gender) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->city = city;
    this->phone_number = phone_number;
    this->gender = gender;
}

int guest::getId(){
    return this->id;
}
std::string guest::getName(){
    return this->name;
}
int guest::getAge() {
    return this->age;
}
std::string guest::getCity(){
return this->city;
}
int guest::getPhone_number() {
    return this->phone_number;
}
std::string guest::getGender() {
    return this->gender;
}
void guest::printList(){
    std::cout<<"Id:"<<this->id<<"  Name:"<<this->name<<"  Age:"<<this->age<<"  City:"<<this->city<<"  Phone number:"<<this->phone_number<<"  Gender:"<<this->gender<<endl;
}





