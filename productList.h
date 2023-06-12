//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_PRODUCTLIST_H
#define ELABORATO2023_PRODUCTLIST_H


#include <list>
#include "Subject.h"

class productList: public Subject{
    ~productList();

    void notify() const override;
    void subscribe(Observer *observer) override;
    void unsubscribe(Observer *observer) override;
private:
    std::list<Observer*> observers;
};


#endif //ELABORATO2023_PRODUCTLIST_H
