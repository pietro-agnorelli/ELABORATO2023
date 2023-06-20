//
// Created by Pietro on 20/06/2023.
//

#include "gtest/gtest.h"
#include "../ProductList.h"
#include "../User.h"

class UserSuite: public ::testing::Test{
protected:
    UserSuite(): user("name", &list){
        list.addProduct(new Product("Product1"));
    }
    ProductList list;
    User user;
};


TEST_F(UserSuite, TestAddToList){
    user.addToList("Product2", "type", 3);
    ASSERT_EQ((*list.searchList(new Product("Product2")))->getQuantity(), 3);
    ASSERT_EQ((*list.searchList(new Product("Product2")))->getType(), "type");
}

TEST_F(UserSuite, TestUpdate){
    list.notify();
    ASSERT_EQ(user.getTotalItems(), 1);
    user.addToList("Product2", "type", 1);
    ASSERT_EQ(user.getTotalItems(), 2);
}

TEST_F(UserSuite, TestRemoveFromList){
    user.removeFromList("Product1");
    ASSERT_EQ(user.getTotalItems(), 0);
}
