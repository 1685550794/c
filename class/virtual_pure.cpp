//#include <stdio.h>
#include <string>
using namespace std;

class father {
public:
	virtual void getAge() = 0;  //纯虚函数
	virtual void say() {printf("hello father\n");}  //虚函数
};

class son : public father {
public:
	void getAge() {printf("son age is 20\n");}
	void say() {printf("hello son\n");}
private:
	int m_age;
	string m_name;
};

//包含纯虚函数的类为抽象类，抽象类不能实例化对象，纯虚函数必须在子类中实现，虚函数在子类中可以不实现
int main() {
	father* p = new son();  //无论时父类指针还是子类指针，都会调用子类的成员函数
	p->getAge();  //son age is 20
	p->say();     //hello son
	return 0;
}




