// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "stack.h"
#include <string>
//---------------------------------------------------------------------------


bool func(string str)
{
	Stack<char> s;
	for (int i = 0; i < str.size(); i++)
	{
		if (s.empty())
			s.push(str[i]);
		else
		{
			if (str[i] == ')')
				if (s.top() == '(')
					s.pop();
				else
					return 0;
			else if (str[i] == ']')
				if (s.top() == '[')
					s.pop();
				else
					return 0;
			else if (str[i] == '}')
				if (s.top() == '{')
					s.pop();
				else
					return 0;
			else if (str[i] == '[' || str[i] == '{' || str[i] == '(')
				s.push(str[i]);
		}
	}
	if (s.empty())
		return 1;
	else
		return 0;
}


int main()
{
	string str = "{[(a)]a}{";
	cout << func(str);
  
  return 0;
}
//---------------------------------------------------------------------------
