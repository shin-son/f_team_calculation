#include "gmock/gmock.h"

class Cal {
public:
	int getMinus(int a, int b) {
		return a - b;
	}
};

//�׽�Ʈ ���̽� �ۼ�
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, t4) {
	Cal cal;
	EXPECT_EQ(cal.getMinus(4, 1), 3);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}