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
    observer->update();
}

void ProductList::unsubscribe(Observer *observer) {
    observers.remove(observer);
}

void ProductList::addProduct(Product *prod) {
    auto itr=searchList(prod);
    if(itr!=products.end()){
        (*itr)->quantity+=prod->quantity;
    }
    else{
        products.push_back(prod);
    }
    notify();
}

void ProductList::removeProduct(Product *prod) {
    auto itr=searchList(prod);
    if(itr!=products.end()){
        products.remove(*itr);
        notify();
    }
}

int ProductList::getTotalNum() {
    int total;
    for(auto each : products){
        total += each->quantity;
    }
    return total;
}

std::list<Product *>::iterator ProductList::searchList(Product *prod) {
    bool found=false;
    auto itr = products.begin();
    do{
        if((*itr)->name.compare(prod->name)){
            found= true;
        }
        itr++;
    }while(itr!=products.end() && !found);
    return itr;
}

