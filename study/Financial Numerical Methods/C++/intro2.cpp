#include <iostream>
using namespace std;


/*
int main() 
{
	cout << 5. / 9 * (78.0 - 32.0) << endl;
	cout << 5. / 9 << endl; // 실수 나눗셈음 소수점도 표현 
	cout << 5 / 9 << endl;
	return 0;
}
*/


/*
int main()
{
	double ft1;		   // ft1 initially undefined
	
	double ft2 = 78.0; // ft2 initially 78.0
					   // (C style)
	cout << ft2 << endl;
	
	double ft3(78.0);  // ft3 initially 78.0
					   // (C++ constructor style)   -> 직접 초기화로 기존 변수를 초기화 가능하다 
	cout << ft3 << endl;                           //  (c에서 사용되는 방법으로 정확하며 빠르다)
	
	double ft4{ 78.0 }; // ft4 initially 78.0
						// (C++11 initializer list) -> 유니폼 초기화로 기존 변수를 초기화 가능하다 (변수 타입 변경 불가)
	cout << ft4 << endl;
	return 0;
}
*/


int main()
{
	double f_temp(0.0); // init with something,  직접 초기화
	cout << "Enter Farenheit temperature: ";
	cin >> f_temp;
	cout << f_temp << " degrees Farenheit is " << (f_temp - 32.0) * 5 / 9
		<< " degrees Celcius" << endl;
	return 0;
}