//
// Created by Pietro on 12/06/2023.
//

#include "productList.h"

void productList::notify() const {
    for(auto observer : observers){
        observer->update();
    }
}

void productList::subscribe(Observer *observer) {
    observers.push_back(observer);
}

void productList::unsubscribe(Observer *observer) {
    observers.remove(observer);
}
