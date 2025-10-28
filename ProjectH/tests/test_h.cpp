#include <gtest/gtest.h>
#include "../include/H.h"
#include <cmath>

TEST(HTest, SampleValues) {
    EXPECT_DOUBLE_EQ(h(1, 2), (1*1 + 2*2)/(1 + 1*1 + 1*1*2*2));
    EXPECT_DOUBLE_EQ(h(0, 0), 0.0);
    EXPECT_DOUBLE_EQ(h(2, 3), (2*2 + 3*3)/(1 + 2*2 + 2*2*3*3));
}

TEST(HTest, PositiveValues) {
    EXPECT_GT(h(1,1), 0);
    EXPECT_GT(h(3,4), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
