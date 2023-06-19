//
// Created by Pietro on 13/06/2023.
//

#ifndef ELABORATO2023_USER_H
#define ELABORATO2023_USER_H


#include "Observer.h"
#include "ProductList.h"

class User : public Observer{
public:
    explicit User(std::string name, ProductList* list): name(std::move(name)), list(list) {
        totalItems=0;
        list->subscribe(this);
    }
    ~User() override{
        list->unsubscribe(this);
    };
    void update() override;
    void addToList(std::string name, std::string type, int quantity);
    void removeFromList(std::string name);
    void viewList() const;

    const std::string &getName() const;
    ProductList *getList() const;
    int getTotalItems() const;

    void setName(const std::string &name);
    void setList(ProductList *list);
    void setTotalItems(int totalItems);


private:
    std::string name;
    ProductList* list;
    int totalItems;
};


#endif //ELABORATO2023_USER_H
