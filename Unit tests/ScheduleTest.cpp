#include <gtest/gtest.h>
#include "Schedule.h"

// Test the getId() and setId() functions
TEST(ScheduleTest, TestId) {
    Schedule schedule;
    schedule.setId(1);
    EXPECT_EQ(1, schedule.getId());
}

// Test the getIdRobot() and setIdRobot() functions
TEST(ScheduleTest, TestIdRobot) {
    Schedule schedule;
    schedule.setIdRobot(2);
    EXPECT_EQ(2, schedule.getIdRobot());
}

// Test the getLocation() and setLocation() functions
TEST(ScheduleTest, TestLocation) {
    Schedule schedule;
    schedule.setLocation(3);
    EXPECT_EQ(3, schedule.getLocation());
}

// Test the getStatus() and setStatus() functions
TEST(ScheduleTest, TestStatus) {
    Schedule schedule;
    schedule.setStatus(Schedule::cleaning);
    EXPECT_EQ(Schedule::cleaning, schedule.getStatus());
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
