#include <stdio.h>
#include <string.h>
using namespace std;

class father {
public:
	father(char* name, int age) : m_name(name), m_age(age) {}
	//拷贝构造函数：利用已存在的对象创建一个新对象，默认拷贝构造函数是浅拷贝，自定义拷贝构造函数是深拷贝
	father(const father &f) {this->m_name = new char[sizeof(f.m_name)]; strcpy(this->m_name, f.m_name); this->m_age = f.m_age;}
	char* m_name;
	int m_age;
};

int main() {
	father f("litao", 30);
	father f2(f);
	printf("name is %s, age is %d\n", f2.m_name, f2.m_age);
	return 0;
}



