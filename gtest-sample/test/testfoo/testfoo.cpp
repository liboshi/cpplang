#include "foo.h"
#include "testfoo.h"

FooTest::FooTest() {
}

FooTest::~FooTest() {};

void FooTest::SetUp() {};

void FooTest::TearDown() {};

TEST_F(FooTest, ByDefaultBazTrueIsTrue) {
    EXPECT_EQ(true, true);
}

TEST_F(FooTest, ByDefaultBazFalseIsFalse) {
    EXPECT_EQ(false, false);
}

TEST_F(FooTest, SometimesBazFalseIsTrue) {
    // Have norf return true for once
    EXPECT_EQ(false, true);
}

