#include "gmock/gmock.h"

class Cal {
public:
	int getSum(int a, int b) {
		return a + b;
	}
};

//�׽�Ʈ ���̽� �ۼ�
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