#include "party.h"
#include <vector>
#include <iostream>
party::party(guest *list){
    this->list=list;
}
guest party::getLuckyNumber(int phone_number) {
    for(int i=0;i<5;i++){
        if(this->getList(i).getPhone_number()==phone_number){
            return getLuckyNumber(i);
        }
    }
}

guest party::getList(int i){
    return this->list[i];
}
void party::printList() {
    for(int i=0; i<5;i++){
        getList(i).printList();
    }
}

void party::findAverageAge(vector<int>Average_age) {
    int aId = 0;
    for(int i=0;i<Average_age.size(),i++;){
        aId+=Average_age[i];
    }
    int average_age=(aId+Average_age.size())/2;
    cout<<"Average Age: "<<average_age<<endl;
}
