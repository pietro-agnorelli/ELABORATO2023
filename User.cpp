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
    std::cout << list->viewProducts().str();
    std::cout << "Total items: " << totalItems << std::endl;
}

void User::addToList(const std::string& n, const std::string& t, int quantity, bool bought) {
    list->addProduct(Product(n, t, quantity, bought));
}

void User::removeFromList(const std::string& n) {
    list->removeProduct(Product(n));
}


int User::getTotalItems() const {
    return totalItems;
}







