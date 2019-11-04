#include "stack.h"
#include <gtest.h>


TEST(Stack, can_create_stack_with_positive_length)
{
	ASSERT_NO_THROW(Stack<int> m(10));
}

TEST(TMatrix, throws_when_create_stack_with_negative_length)
{
	ASSERT_ANY_THROW(Stack<int> m(-10));
}

TEST(TMatrix, can_create_copied_stack)
{
	Stack<int> m(10);
	ASSERT_NO_THROW(Stack<int> m1(m));
}

TEST(TMatrix, can_push_and_pop)
{
	Stack<int> m(10);
	m.push(10);
	ASSERT_EQ(m.pop(), 10);
}

TEST(TMatrix, operator_top)
{
	Stack<int> m(10);
	m.push(10);
	m.top() = 3;
	ASSERT_EQ(m.top(), 3);
}

TEST(TMatrix, operator_empty)
{
	Stack<int> m(10);
	m.push(10);
	ASSERT_EQ(m.empty(), 0);
}