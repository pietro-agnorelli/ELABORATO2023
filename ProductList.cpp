//
// Created by Pietro on 12/06/2023.
//

#include <iostream>
#include <sstream>
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

void ProductList::addProduct(const Product& prod) {
    auto itr=searchList(prod);
    if(itr!=products.end()){
        (*itr).setQuantity((*itr).getQuantity() + prod.getQuantity());
        (*itr).setBought(prod.isBought());
    }
    else{
        products.push_back(prod);
    }
    notify();
}

void ProductList::removeProduct(const Product& prod) {
    auto itr = searchList(prod);
    if(itr!=products.end()){
        products.erase(itr);
    }
    notify();
}

int ProductList::getTotalNum() const {
    return products.size();
}


std::list<Product>::iterator ProductList::searchList(const Product& prod) {
    bool found = false;
    auto itr = products.begin();
    while (itr != products.end() && !found) {
        if ((*itr).getName()==(prod.getName())) {
            found = true;
        }
        else{
            itr++;
        }
    }
    return itr;
}

std::stringstream ProductList::viewProducts() const {
    std::stringstream output;
    for(const auto& each : products){
        output<< each.getName() << "   " << each.getQuantity() << "   " ;
        if(each.isBought()){
            output<<"Bought";
        }
        else{
            output<<"To buy";
        }
        output<< "    Item Type: " << each.getType()<< '\n';
    }
    return output;
}