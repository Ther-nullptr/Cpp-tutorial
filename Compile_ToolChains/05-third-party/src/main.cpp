#include <gtest/gtest.h>
#include "../include/mysqrt.h"

TEST(mysqrtTest, PositiveNos)
{
    ASSERT_EQ(6, mysqrt(36.0));
    ASSERT_EQ(18.0, mysqrt(324.0));
    ASSERT_EQ(25.4, mysqrt(645.16));
    ASSERT_EQ(0, mysqrt(0.0));
}

TEST(mysqrtTest, NegativeNos)
{
    ASSERT_EQ(-1.0, mysqrt(-15.0));
    ASSERT_EQ(-1.0, mysqrt(-0.2));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}