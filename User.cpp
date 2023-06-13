//
// Created by Pietro on 13/06/2023.
//

#include "User.h"

void User::update() {
    totalItems=list->getTotalNum();
}

void User::addToList(std::string name, std::string type, int quantity) {
    list->addProduct(new Product(name, type, quantity));
}

void User::removeFromList(std::string name) {
    list->removeProduct(new Product(name));
}






