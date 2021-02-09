#include <iostream>
#include <gtest/gtest.h>
#include <vector>

/**
 * @brief C++ STL <vector>
 * Testing std::vector
 */

TEST(INIT, VECTOR_INIT)
{
    std::vector<int> vec(0);
    EXPECT_EQ(0, vec.size());
}

TEST(INSERT, VECTOR_INSERT)
{
    std::vector<int> vec(0);
    vec.emplace_back(90);
    vec.emplace_back(600);
    vec.push_back(300);
    EXPECT_EQ(3, vec.size());
}

TEST(DELETE, VECTOR_DELETE)
{
    std::vector<int> vec(0);
    vec.emplace_back(90);
    vec.emplace_back(600);
    vec.push_back(300);
    vec.pop_back();
    EXPECT_EQ(2, vec.size());
    vec.push_back(7500);
    vec.pop_back();
    vec.pop_back();
    EXPECT_EQ(1, vec.size());
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}