//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_PRODUCT_H
#define ELABORATO2023_PRODUCT_H

#include <string>

class Product{
public:
    explicit Product(std::string name, std::string type="null", int q=1): name(std::move(name)), type(std::move(type)), quantity(q) {};

    const std::string &getName() const {
        return name;
    }
    const std::string &getType() const {
        return type;
    }
    int getQuantity() const {
        return quantity;
    }

    void setName(const std::string &n) {
        name = n;
    }
    void setType(const std::string &t) {
        type = t;
    }
    void setQuantity(int q) {
        quantity = q;
    }

private:
    std::string name;
    std::string type;
    int quantity;
};

#endif //ELABORATO2023_PRODUCT_H
