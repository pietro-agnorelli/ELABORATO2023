//
// Created by Pietro on 17/06/2023.
//

#include "gtest/gtest.h"
#include "../ProductList.h"

class ProductListSuite: public ::testing::Test{
protected:
    ProductListSuite(){
        list.addProduct(new Product("Product1"));
        list.addProduct(new Product("Product2", "type", 1));
    }
    ProductList list;
};


TEST_F(ProductListSuite, TestConstruction){
    ASSERT_EQ(2, list.getTotalNum());
}

TEST_F(ProductListSuite, TestAddNewProduct){
    Product* prod3 = new Product("Product3");
    list.addProduct(prod3);
    ASSERT_EQ((*list.searchList(prod3))->getQuantity(), 1);
}

TEST_F(ProductListSuite, TestAddOldProduct){
    list.addProduct(new Product("Product1", "type", 1));
    ASSERT_EQ((*list.searchList(new Product("Product1")))->getQuantity(), 2);
    ASSERT_EQ((*list.searchList(new Product("Product1")))->getType(), "null");
}


TEST_F(ProductListSuite, TestRemoveProduct){
    list.removeProduct(new Product("Product2"));
    ASSERT_EQ(list.getTotalNum(), 1);
}
