#include <gtest/gtest.h>

using namespace testing;

int main(int argc, char** argv)
{
    InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}

TEST(ImplementMe, OrFearYourCode)
{
    ASSERT_EQ(true, true);
}
