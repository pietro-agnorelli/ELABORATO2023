//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_PRODUCT_H
#define ELABORATO2023_PRODUCT_H

#include <string>

class Product{
public:
    explicit Product(std::string name, std::string type="null", int q=0): name(name), type(type), quantity(q) {};

    const std::string &getName() const {
        return name;
    }
    const std::string &getType() const {
        return type;
    }
    int getQuantity() const {
        return quantity;
    }

    void setName(const std::string &name) {
        Product::name = name;
    }
    void setType(const std::string &type) {
        Product::type = type;
    }
    void setQuantity(int quantity) {
        Product::quantity = quantity;
    }

private:
    std::string name;
    std::string type;
    int quantity;
};

#endif //ELABORATO2023_PRODUCT_H
