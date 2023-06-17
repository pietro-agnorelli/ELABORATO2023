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

const std::string &User::getName() const {
    return name;
}

ProductList *User::getList() const {
    return list;
}

int User::getTotalItems() const {
    return totalItems;
}

void User::setName(const std::string &n) {
    User::name = n;
}

void User::setList(ProductList *l) {
    list = l;
}

void User::setTotalItems(int total) {
    totalItems = total;
}







