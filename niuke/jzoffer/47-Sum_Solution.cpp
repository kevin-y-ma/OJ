#include <iostream>

using namespace std;

class Solution {
public:
    int Sum_Solution(int n) {
	int sum = n;
	sum && (sum += Sum_Solution(n-1));
	return sum;
    }
};

int main()
{
	Solution s;
	cout<<s.Sum_Solution(100)<<endl;

	return 0;
}

