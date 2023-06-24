//
// Created by Pietro on 13/06/2023.
//

#ifndef ELABORATO2023_USER_H
#define ELABORATO2023_USER_H


#include "Observer.h"
#include "ProductList.h"
#include <sstream>

class User : public Observer{
public:
    User(const std::string& n, ProductList* list): name(n), list(list), totalItems(0) {
        list->subscribe(this);
    }
    ~User() {
        list->unsubscribe(this);
    }
    void update() override;
    void addToList(const std::string& name, const std::string& type="", int quantity=1, bool bought=false);
    void removeFromList(const std::string& name);
    void viewList() const;

    int getTotalItems() const;

private:
    std::string name;
    ProductList* list;
    int totalItems;
};


#endif //ELABORATO2023_USER_H
