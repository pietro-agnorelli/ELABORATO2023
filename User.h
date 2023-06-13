//
// Created by Pietro on 13/06/2023.
//

#ifndef ELABORATO2023_USER_H
#define ELABORATO2023_USER_H


#include "Observer.h"
#include "ProductList.h"

class User : public Observer{
public:
    User(ProductList* list): list(list) {
        list->subscribe(this);
    }
    void update() override;
    void addToList(std::string name, std::string type, int quantity);
    void removeFromList(std::string name);

private:
    ProductList* list;
    int totalItems;
};


#endif //ELABORATO2023_USER_H
