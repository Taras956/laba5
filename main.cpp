
#include <iostream>
#include "guest.h"
#include "party.h"

int main() {
    guest member1(1,"Max", 17,"Lviv", 385, "Male");
    guest member2(2, "Tania", 17, "Donbas", 777, "Famale");
    guest member3(3, "noname", 18, "Rivne", 923, "Non_binary");
    guest member4(4, "Den", 18, "Btinda", 342, "Male");
    guest member5(5, "Maria", 18, "Kyuiv", 835, "Famale");
    guest list[5]={member1, member2, member3, member4, member5};
    party gg(list);
    gg.printList();
    party party;
    party.findAverageAge(Average_age);
    std::cout<<"LUCKY NUMBER IS: "<<endl;
    gg.getLuckyNumber(777).printList();
    return 0;
}

