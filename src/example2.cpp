#include <iostream>
#include <gtest/gtest.h>

/**
 * @brief Find and fix issues and bugs
 * Constructor Allocs
 * Destructor Invokes
 * 
 */
class args
{
public:
    int value;
    args(int x) : value(x) {}
    args()
    {
    }
    ~args()
    {
    }
};

class func
{
public:
    args *arg;
    func();

    explicit func(int a);
    ~func();
};

func::func(int a) : arg(new args(a))
{
}

func::func() : arg(new args(0))
{
}

func::~func()
{
    // delete arg;
}

// Default Constructor
TEST(CONSTRUCTION, class_constructions_1)
{
    func *function = new func();
    args *arg = new args();
    EXPECT_EQ(0, arg->value);
    EXPECT_EQ(0, function->arg->value);
}

// Parameterized Constructor
TEST(CONSTRUCTION, class_constructions_2)
{
    func *function = new func(500);
    args *arg = new args(60);
    EXPECT_EQ(60, arg->value);
    EXPECT_EQ(500, function->arg->value);
}

// Destructor Test
TEST(DESTRUCTION, class_destructions_1)
{
    func *function = new func(700);
    args *arg = new args(300);

    delete function;
    delete arg;

    // Undefined Behavior
    EXPECT_NE(700, function->arg->value);
    EXPECT_EQ(0, function->arg->value);
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}