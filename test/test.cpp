#include <gtest/gtest.h>
#include <stack.h>

TEST(test_stack, can_push_element) {
  stack S;
  S.push(5);

  EXPECT_EQ(5, S.getTop());
}

TEST(test_stack, can_get_top) {
  stack S;
  S.push(3);

  EXPECT_EQ(3, S.getTop());
}

TEST(test_stack, get_top_from_empty_stack) {
  stack S;

  ASSERT_ANY_THROW(S.getTop());
}

TEST(test_stack, get_min_from_emty_stack) {
  stack S;

  ASSERT_ANY_THROW(S.getMin());
}

TEST(test_stack, can_get_min) {
  stack S;
  S.push(2);
  S.push(7);
  S.push(3);
  S.push(0);

  EXPECT_EQ(0, S.getMin());
}

TEST(test_stack, can_pop) {
  stack S;
  for (int i = 0; i < 4; i++)
    S.push(i+1);
  for (int i = 0; i < 3; i++) {
    S.pop();
    EXPECT_EQ(3-i, S.getTop());
  }
}

TEST(test_stack, pop_from_empty_stack) {
  stack S;

  EXPECT_FALSE(S.pop());
}
int main(int ac, char* av[]) {
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}