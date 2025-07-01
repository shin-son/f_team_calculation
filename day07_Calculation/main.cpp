#include "gmock/gmock.h"

class Cal {
public:
	int getSum(int a, int b) {
		return a + b;
	}
};

//테스트 케이스 작성
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(TS, tc1) {
	Cal cal;
	EXPECT_EQ(3, cal.getSum(1, 2));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}