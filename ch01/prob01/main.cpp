#include <iostream>
#include "Solution.h"

using namespace std;

int main(){

	string str1 = "CplusCool";
	string str2 = "abcdefghijklmnopqrstuvwxyzABCD1234567890";

	Solution s1;
	Solution s2(str1);
	Solution s3(str2);

	//s1.Show();
	//s2.Show();
	//s3.Show();

	//cout << "str1 = " << str2 << endl;

	cout << s1.isUniqueChar() << endl;
	cout << s2.isUniqueChar() << endl;
	cout << s3.isUniqueChar() << endl;

	return 0;
}
