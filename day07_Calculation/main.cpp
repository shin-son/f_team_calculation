#include "gmock/gmock.h"

class Cal {
public:
	double getDivide(int a, int b) {
		if (b == 0) return 0;
		return (double)(a / b);
	}
};

TEST(CalTest, DevideTest) {
	Cal cal;
	int num = 10, devider = 2;
	double ret = cal.getDivide(num, devider);
	EXPECT_EQ(ret, 5.0);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}