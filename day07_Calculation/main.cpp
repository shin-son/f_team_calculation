#include "gmock/gmock.h"

class Cal {
public:
  int getZegop(int a) { return a * a; };
};

//테스트 케이스 작성
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, tc_zegop) {
  Cal cal;
  EXPECT_EQ(1, cal.getZegop(1));
  EXPECT_EQ(4, cal.getZegop(2));
  EXPECT_EQ(16, cal.getZegop(4));
  EXPECT_EQ(100, cal.getZegop(10));
  EXPECT_EQ(1, cal.getZegop(-1));
  EXPECT_EQ(9, cal.getZegop(-3));
  EXPECT_EQ(144, cal.getZegop(-12));
  EXPECT_EQ(10000, cal.getZegop(-100));

}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}