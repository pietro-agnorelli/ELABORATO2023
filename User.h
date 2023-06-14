//
// Created by Pietro on 13/06/2023.
//

#ifndef ELABORATO2023_USER_H
#define ELABORATO2023_USER_H


#include "Observer.h"
#include "ProductList.h"

class User : public Observer{
public:
    User(std::string name, ProductList* list): name(name), list(list) {
        list->subscribe(this);
    }
    void update() override;
    void addToList(std::string name, std::string type, int quantity);
    void removeFromList(std::string name);
    void viewList() const;

private:
    std::string name;
    ProductList* list;
    int totalItems;
};


#endif //ELABORATO2023_USER_H
