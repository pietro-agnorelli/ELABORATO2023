//
// Created by Pietro on 12/06/2023.
//

#include "ProductList.h"

void ProductList::notify() const {
    for(auto observer : observers){
        observer->update();
    }
}

void ProductList::subscribe(Observer *observer) {
    observers.push_back(observer);
}

void ProductList::unsubscribe(Observer *observer) {
    observers.remove(observer);
}

void ProductList::addProduct(Product *prod) {
    products.push_back(prod);
    notify();
}

void ProductList::removeProduct(Product *prod) {
    products.push_back(prod);

    notify();
}

