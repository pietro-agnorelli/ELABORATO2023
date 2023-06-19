//
// Created by Pietro on 12/06/2023.
//

#include <iostream>
#include "ProductList.h"

void ProductList::notify() const {
    for(auto observer : observers){
        observer->update();
    }
}

void ProductList::subscribe(Observer *observer) {
    observers.push_back(observer);
    observer->update();
}

void ProductList::unsubscribe(Observer *observer) {
    observers.remove(observer);
}

void ProductList::addProduct(Product *prod) {
    auto itr=searchList(prod);
    if(itr!=products.end()){
        (*itr)->setQuantity((*itr)->getQuantity() + prod->getQuantity());
    }
    else{
        products.push_back(prod);
    }
    notify();
}

void ProductList::removeProduct(Product *prod) {
    auto itr = searchList(prod);
    if(itr!=products.end()){
        products.remove((*itr));
    }
    notify();
}

int ProductList::getTotalNum() const{
    int total=0;
    for(auto each : products){
        total += each->getQuantity();
    }
    return total;
}

std::list<Product *>::iterator ProductList::searchList(Product *prod) {
    bool found = false;
    auto itr = products.begin();
    while (itr != products.end() && !found) {
        if ((*itr)->getName()==(prod->getName())) {
            found = true;
        }
        else{
            itr++;
        }
    }
    return itr;
}

void ProductList::viewProducts() const {
    for(auto each : products){
        std::cout << each->getName() << "   " << each->getQuantity() << "   " << "Item Type: " << each->getType() << std::endl;
    }
}

ProductList::~ProductList() {
    for(auto product: products){
        products.remove(product);
    }
}

