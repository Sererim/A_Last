#include <gtest/gtest.h>
#include <string>
#include "Robot.h"

// Test Fixture class for Robot unit tests
class RobotTest : public ::testing::Test {
protected:
    Robot robot;

    void SetUp() override {
        robot.setId(1);
        robot.setIdGroupUser(2);
        robot.setResources(100);
        robot.setModel("Model 1");
        robot.setFabricNumber("ABC123");
        robot.setVersion("1.0");
        robot.setMacaddr("00:11:22:33:44:55");
        robot.setComment("Test Robot");
    }
};

// Test case for getId()
TEST_F(RobotTest, GetId) {
    EXPECT_EQ(1, robot.getId());
}

// Test case for getIdGroupUser()
TEST_F(RobotTest, GetIdGroupUser) {
    EXPECT_EQ(2, robot.getIdGroupUser());
}

// Test case for getResources()
TEST_F(RobotTest, GetResources) {
    EXPECT_EQ(100, robot.getResources());
}

// Test case for getModel()
TEST_F(RobotTest, GetModel) {
    EXPECT_EQ("Model 1", robot.getModel());
}

// Test case for getFabricNumber()
TEST_F(RobotTest, GetFabricNumber) {
    EXPECT_EQ("ABC123", robot.getFabricNumber());
}

// Test case for getVersion()
TEST_F(RobotTest, GetVersion) {
    EXPECT_EQ("1.0", robot.getVersion());
}

// Test case for getMacaddr()
TEST_F(RobotTest, GetMacaddr) {
    EXPECT_EQ("00:11:22:33:44:55", robot.getMacaddr());
}

// Test case for getComment()
TEST_F(RobotTest, GetComment) {
    EXPECT_EQ("Test Robot", robot.getComment());
}

// Test case for setId()
TEST_F(RobotTest, SetId) {
    robot.setId(10);
    EXPECT_EQ(10, robot.getId());
}

// Test case for setIdGroupUser()
TEST_F(RobotTest, SetIdGroupUser) {
    robot.setIdGroupUser(20);
    EXPECT_EQ(20, robot.getIdGroupUser());
}

// Test case for setResources()
TEST_F(RobotTest, SetResources) {
    robot.setResources(200);
    EXPECT_EQ(200, robot.getResources());
}

// Test case for setModel()
TEST_F(RobotTest, SetModel) {
    robot.setModel("Model 2");
    EXPECT_EQ("Model 2", robot.getModel());
}

// Test case for setFabricNumber()
TEST_F(RobotTest, SetFabricNumber) {
    robot.setFabricNumber("XYZ456");
    EXPECT_EQ("XYZ456", robot.getFabricNumber());
}

// Test case for setVersion()
TEST_F(RobotTest, SetVersion) {
    robot.setVersion("2.0");
    EXPECT_EQ("2.0", robot.getVersion());
}

// Test case for setMacaddr()
TEST_F(RobotTest, SetMacaddr) {
    robot.setMacaddr("AA:BB:CC:DD:EE:FF");
    EXPECT_EQ("AA:BB:CC:DD:EE:FF", robot.getMacaddr());
}

// Test case for setComment()
TEST_F(RobotTest, SetComment) {
    robot.setComment("Updated Comment");
    EXPECT_EQ("Updated Comment", robot.getComment());
}
