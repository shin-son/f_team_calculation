#include "gmock/gmock.h"

class Cal {
public:
	int getSum(int a, int b) {
		return a + b;
  }

	int getGop(int a, int b) {
		return a * b;
	}
};

//Å×½ºÆ® ÄÉÀÌ½º ÀÛ¼º
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(TS, tc1) {
	Cal cal;
	EXPECT_EQ(3, cal.getSum(1, 2));
}

TEST(CalTest, GetGopTest) {
	Cal cal;
	EXPECT_EQ(cal.getGop(2, 3), 6);
	EXPECT_EQ(cal.getGop(0, 5), 0);
	EXPECT_EQ(cal.getGop(-1, 5), -5);
	EXPECT_EQ(cal.getGop(4, 0), 0);
	EXPECT_EQ(cal.getGop(-2, -3), 6);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}