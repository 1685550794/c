//#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
#if 0
class demo_float {
public:
	void printdata(float a) {cout<<"float a="<<a<<endl;}
};
class demo_int {
public:
	void printdata(int a) {cout<<"int a="<<a<<endl;}
};

int main() {
	demo_float df;
	df.printdata(1.2);
	demo_int di;
	di.printdata(2);
	return 0;
}
#endif


//模板类：定义加上template <typename T>，变量类型改成T
template <typename T>
class demo {
public:
	void printdata(T a) {cout<<"template class a="<<a<<endl;}
};
//模板函数：定义加上template <typename T>，变量类型改成T
template <typename T>
void func(T a) {cout<<"template func a="<<a<<endl;}

int main() {
	//模板类
	demo<float> df;
	df.printdata(1.2);
	demo<int> di;
	di.printdata(2);
	//模板函数
	func(5.5);
	func(6);
	return 0;
}




