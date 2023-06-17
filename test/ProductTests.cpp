//
// Created by Pietro on 16/06/2023.
//

#include "gtest/gtest.h"

#include "../Product.h"

TEST(Product, DeafultConstructor){
    Product p("name");
    EXPECT_EQ("name", p.getName());
    EXPECT_EQ("null", p.getType());
    ASSERT_EQ(1, p.getQuantity());
}