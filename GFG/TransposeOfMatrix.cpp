#include <bits/stdc++.h>
using namespace std;

class Solution
{   
    public:  
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				swap(matrix[i][j], matrix[j][i]);
			}
		}
    }
};
