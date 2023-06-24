//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_PRODUCTLIST_H
#define ELABORATO2023_PRODUCTLIST_H


#include <list>
#include "Subject.h"
#include "Product.h"

class ProductList: public Subject{
public:
    ProductList(){};
    ~ProductList() override{};
    void notify() const override;
    void subscribe(Observer *observer) override;
    void unsubscribe(Observer *observer) override;
    void addProduct(const Product& prod);
    void removeProduct(const Product& prod);
    int getTotalNum() const;
    std::list<Product>::iterator searchList(const Product& prod);
    std::stringstream viewProducts() const;

private:
    std::list<Observer*> observers;
    std::list<Product> products;

};


#endif //ELABORATO2023_PRODUCTLIST_H
