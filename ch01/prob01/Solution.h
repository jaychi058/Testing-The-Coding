#include <string>
using namespace std;

class Solution{
public:
	Solution();
	Solution(string);
	void Show();
	bool isUniqueChar();

private:
	string _str;
	int _len;
	int _asciiVal;

};
