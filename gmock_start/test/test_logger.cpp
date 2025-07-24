#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "mock_logger.h"

TEST(Foo, TestLog) {
    MockLogger logger;

    EXPECT_CALL(logger, log("Test logger's logging")).Times(testing::Exactly(1));

    logger.log("Test logger's logging");
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

