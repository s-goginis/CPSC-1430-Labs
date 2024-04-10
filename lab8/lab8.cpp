// triangleTest.cpp - Tests Triangles

#include "triangle.h"
#include <gtest/gtest.h>

TEST(TriangleTest, Invalid) {
    EXPECT_EQ('n', triangle_type(1, 2, 4));
    EXPECT_EQ('n', triangle_type(8, 2, 6));
    EXPECT_EQ('n', triangle_type(8, 20, 4));
    EXPECT_EQ('n', triangle_type(0, 0, 0));
    EXPECT_EQ('n', triangle_type(-1, 1, -1));
}

TEST(TriangleTest, Equilateral) {
    EXPECT_EQ('e', triangle_type(1, 1, 1));
    EXPECT_EQ('e', triangle_type(5, 5, 5));
}

TEST(TriangleTest, Isosceles) {
    EXPECT_EQ('i', triangle_type(6, 6, 9));
    EXPECT_EQ('i', triangle_type(7, 10, 7));
    EXPECT_EQ('i', triangle_type(3, 4, 4));
}

TEST(TriangleTest, Scalene) {
    EXPECT_EQ('s', triangle_type(8, 2, 9));
    EXPECT_EQ('s', triangle_type(7, 12, 10));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
