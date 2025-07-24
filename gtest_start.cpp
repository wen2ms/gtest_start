#include <gtest/gtest.h>

int add(int lop, int rop) {
    return lop + rop;
}

TEST(Foo, AddTest) {
    EXPECT_EQ(1 + 1, 2);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}