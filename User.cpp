//
// Created by Pietro on 13/06/2023.
//

#include <iostream>
#include "User.h"

void User::update() {
    totalItems=list->getTotalNum();
    viewList();
}

void User::viewList() const {
    std::cout << name << "'s list: " << std::endl;
    list->viewProducts();
    std::cout << "Total items: " << totalItems << std::endl;
}

void User::addToList(std::string name, std::string type, int quantity) {
    list->addProduct(new Product(name, type, quantity));
}

void User::removeFromList(std::string name) {
    list->removeProduct(new Product(name));
}






