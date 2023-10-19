#include "pch.h"
#include"C:\PPOIS 1_lab\MainRectangle\Rectangle.cpp"

TEST(TestRectangle, TestGetCoordinates) {
  // arrange
  Rectangle a(0, 0, 5, 5);
  // act
  int x1 = 0,y1=0,x2=5,y2=5;
  // assert
  EXPECT_EQ(a.GetX1(),x1);
  EXPECT_EQ(a.GetY1(),y1);
  EXPECT_EQ(a.GetX2(),x2);
  EXPECT_EQ(a.GetY2(),y2);

  EXPECT_TRUE(true);
}

TEST(TestRectangle, TestResize) {
	// arrange
	Rectangle a(0, 0, 5, 5);
	a.resize(2, 2);
	// act 
	int nx1 = 0, ny1 = 0, nx2 = 7, ny2 = 7;
	// assert
	EXPECT_EQ(a.GetX1(), nx1);
	EXPECT_EQ(a.GetY1(), ny1);
	EXPECT_EQ(a.GetX2(), nx2);
	EXPECT_EQ(a.GetY2(), ny2);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestMove) {
	// arrange
	Rectangle a(0, 0, 3, 3);
	a.move(1, 2); 
	// act
	int nx1 = 1, ny1 = 2, nx2 = 4, ny2 = 5;
	// assert
	EXPECT_EQ(a.GetX1(), nx1);
	EXPECT_EQ(a.GetY1(), ny1);
	EXPECT_EQ(a.GetX2(), nx2);
	EXPECT_EQ(a.GetY2(), ny2);

	EXPECT_TRUE(true);
}


TEST(TestRectangle, TestOperatorEqual) {
	// arrange
	Rectangle a(0, 0, 3, 3);
	Rectangle b(0, 0, 3, 3);
	// assert
	EXPECT_TRUE(a == b);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestPrefIncrement) {
	// arrange
	Rectangle a(0, 0, 3, 3);
	++a;
	// act
	Rectangle b(0, 0, 4, 4);
	// assert
	EXPECT_TRUE(a == b);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestSufIncrement) {
	// arrange
	Rectangle a(0, 0, 3, 3);
	a++;
	// act
	Rectangle b(0, 0, 4, 4);
	// assert
	EXPECT_TRUE(a == b);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestPrefDecrement) {
	// arrange
	Rectangle a(0, 0, 3, 3);
	--a;
	// act
	Rectangle b(0, 0, 2, 2);
	// assert
	EXPECT_TRUE(a == b);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestSufDecrement) {
	// arrange
	Rectangle a(0, 0, 3, 3);
	a--;
	// act
	Rectangle b(0, 0, 2, 2);
	// assert
	EXPECT_TRUE(a == b);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestOperatorSum) {
	// arrange
	Rectangle a(0, 0, 5, 5);
	Rectangle b(3, 3, 6, 6);
	Rectangle c = a + b;
	// act
	Rectangle result(0, 0, 6, 6);
	// assert
	EXPECT_TRUE(c == result);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestOperatorDiff) {
	// arrange
	Rectangle a(0, 0, 5, 5);
	Rectangle b(3, 3, 6, 6);
	Rectangle c = a - b;
	// act
	Rectangle result(3, 3, 5, 5);
	// assert
	EXPECT_TRUE(c == result);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestOperatorSum2) {
	// arrange
	Rectangle a(0, 0, 5, 5);
	Rectangle b(3, 3, 6, 6);
	a += b;
	// act
	Rectangle result(0, 0, 6, 6);
	// assert
	EXPECT_TRUE(a == result);

	EXPECT_TRUE(true);
}

TEST(TestRectangle, TestOperatorDiff2) {
	// arrange
	Rectangle a(0, 0, 5, 5);
	Rectangle b(3, 3, 6, 6);
	a -= b;
	// act
	Rectangle result(3, 3, 5, 5);
	// assert
	EXPECT_TRUE(a == result);

	EXPECT_TRUE(true);
}