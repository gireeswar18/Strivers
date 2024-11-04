#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	bool ispar(string str)
	{
		int n = str.length();
		char stack[n];
		int top = -1;

		for (int i = 0; i < n; i++)
		{
			if (str[i] == ')' || str[i] == ']' || str[i] == '}')
			{
				if (top == -1 || stack[top] != str[i])
					return false;
				top--;
			}
			else if (str[i] == '(')
			{
				stack[++top] = ')';
			}
			else if (str[i] == '[')
			{
				stack[++top] = ']';
			}
			else
			{
				stack[++top] = '}';
			}
		}

		return top == -1;
	}
};