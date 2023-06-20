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
    ProductList()= default;;
    ~ProductList() override;
    void notify() const override;
    void subscribe(Observer *observer) override;
    void unsubscribe(Observer *observer) override;
    void addProduct(Product* prod);
    void removeProduct(Product* prod);
    int getTotalNum() const;
    std::list<Product*>::iterator searchList(Product* prod);
    void viewProducts() const;

private:
    std::list<Observer*> observers;
    std::list<Product*> products;

};


#endif //ELABORATO2023_PRODUCTLIST_H
