//
// Created by Pietro on 17/06/2023.
//

#include "gtest/gtest.h"
#include "../ProductList.h"
#include "../User.h"

class ProductListSuite: public ::testing::Test{
protected:
    ProductListSuite(): user("name", &list){
        list.addProduct(new Product("Product1"));
        list.addProduct(new Product("Product2", "type", 1));
    }
    ProductList list;
    User user;
};


TEST_F(ProductListSuite, TestConstruction){
    ASSERT_EQ(2, list.getTotalNum());
}

TEST_F(ProductListSuite, TestAddProduct){
    Product* prod3 = new Product("Product3");
    list.addProduct(prod3);
    list.addProduct(new Product("Product1"));
    EXPECT_EQ((*list.searchList(prod3))->getQuantity(), 1);
    EXPECT_EQ((*list.searchList(new Product("Product1")))->getQuantity(), 2);
    EXPECT_EQ((*list.searchList(new Product("Product1")))->getType(), "null");
}


TEST_F(ProductListSuite, TestRemoveProduct){
    list.removeProduct(new Product("Product2"));
    EXPECT_EQ(list.getTotalNum(), 1);
}