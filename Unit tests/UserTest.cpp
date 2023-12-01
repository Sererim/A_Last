#include <gtest/gtest.h>
#include "User.h"

class UserTest : public ::testing::Test {
protected:
    User user;
};

TEST_F(UserTest, TestGetId) {
    user.setId(123);
    EXPECT_EQ(user.getId(), 123);
}

TEST_F(UserTest, TestGetLogin) {
    user.setLogin("JohnDoe");
    EXPECT_EQ(user.getLogin(), "JohnDoe");
}

TEST_F(UserTest, TestGetPassword) {
    user.setPassword("password123");
    EXPECT_EQ(user.getPassword(), "password123");
}

TEST_F(UserTest, TestSetId) {
    user.setId(456);
    EXPECT_EQ(user.getId(), 456);
}

TEST_F(UserTest, TestSetLogin) {
    user.setLogin("JaneDoe");
    EXPECT_EQ(user.getLogin(), "JaneDoe");
}

TEST_F(UserTest, TestSetPassword) {
    user.setPassword("newpassword");
    EXPECT_EQ(user.getPassword(), "newpassword");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
