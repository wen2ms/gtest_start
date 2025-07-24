#pragma once

#include <gmock/gmock.h>

#include "logger.h"

class MockLogger : public Logger {
  public:
    MOCK_METHOD(void, log, (const std::string& message), (override));
};