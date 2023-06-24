//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_PRODUCT_H
#define ELABORATO2023_PRODUCT_H

#include <string>

class Product{
public:
    explicit Product(const std::string& name,const std::string& type="", int q=1, bool b=false): name(name), type(type), quantity(q), bought(b) {};

    const std::string &getName() const {
        return name;
    }
    const std::string &getType() const {
        return type;
    }
    int getQuantity() const {
        return quantity;
    }

    bool isBought() const{
        return bought;
    }

    void setQuantity(int q) {
        quantity = q;
    }

    void setBought(bool b){
        bought=b;
    }


private:
    std::string name;
    std::string type;
    int quantity;
    bool bought;
};

#endif //ELABORATO2023_PRODUCT_H
