#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

Solution::Solution(){
	_str = "Test";
}

Solution::Solution(string str1){
	_str = str1;
}

void Solution::Show(){
	cout << "String : " << _str << endl;
}

bool Solution::isUniqueChar(){
	_len = _str.length();

	if(_len < 1){
		return true;
	}

	if(_len > 256){
		return false;
	}

	bool temp[256] = {false};
	//memset(temp, 0, 256);

	for(int i = 0; i < _len; i++){
		_asciiVal = (int)_str[i];
		if(temp[_asciiVal]){
			return false;
		}else{
			temp[_asciiVal] = true;
		}
	}

	return true;

}
