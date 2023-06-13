//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_PRODUCT_H
#define ELABORATO2023_PRODUCT_H

#include <string>

class Product{
public:
    explicit Product(std::string name, std::string type="null", int q=0): name(name), type(type), quantity(q) {};
    std::string name;
    std::string type;
    int quantity;
};

#endif //ELABORATO2023_PRODUCT_H
