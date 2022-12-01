#include "guest.h"
#include <vector>

class party{
private:
    guest* list;
public:
    party(guest list[5]);
    guest getList(int i);
    guest getLuckyNumber(int phone_number);
    void printList();
    void findAverageAge(vector<int>Average_age);
};