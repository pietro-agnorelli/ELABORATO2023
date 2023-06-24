//
// Created by Pietro on 17/06/2023.
//

#include "gtest/gtest.h"
#include "../ProductList.h"

class ProductListSuite: public ::testing::Test{
protected:
    ProductListSuite(){
        list.addProduct(Product("Product1"));
        list.addProduct(Product("Product2", "type", 1));
    }
    ProductList list;
};


TEST_F(ProductListSuite, TestConstruction){
    ASSERT_EQ(2, list.getTotalNum());
}

TEST_F(ProductListSuite, TestAddNewProduct){
    Product prod3("Product3");
    list.addProduct(prod3);
    ASSERT_EQ((*list.searchList(prod3)).getQuantity(), 1);
}

TEST_F(ProductListSuite, TestAddOldProduct){
    Product prod1("Product2", "", 1, true);
    list.addProduct(prod1);
    ASSERT_EQ((*list.searchList(prod1)).getQuantity(), 2);
    ASSERT_EQ((*list.searchList(prod1)).getType(), "type");
    ASSERT_TRUE((*list.searchList(prod1)).isBought());
}


TEST_F(ProductListSuite, TestRemoveProduct){
    list.removeProduct(Product("Product2"));
    ASSERT_EQ(list.getTotalNum(), 1);
}
