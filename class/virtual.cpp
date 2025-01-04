//#include <stdio.h>
#include <string>
using namespace std;

class father {
public:
	virtual void getAge() {printf("father age is 50\n");}
	//virtual void getName() = 0;
	void say() {printf("hello father\n");}
};

class son : public father {
public:
	void getAge() {printf("son age is 20\n");}
	void getName() {printf("son name is jerry\n");};
	void say() {printf("hello son\n");}
private:
	int m_age;
	string m_name;
};

#if 0
//父类指针指向父类对象，如果调用普通函数则调用父类的，如果调用虚函数则调用父类的
int main() {
	father* p = new father();
	p->getAge();  //father age is 50
	p->say();     //hello father
	return 0;
}
//子类指针指向子类对象，如果调用普通函数则调用子类的，如果调用虚函数则调用子类的
int main() {
	son* p = new son();
	p->getAge();  //son age is 20
	p->say();     //hello son
	return 0;
}
#endif

//子类指针指向父类对象，非法
//int main() {
//	son* p = new father();
//	p->getAge();  //father age is 50
//	p->say();     //hello father
//	return 0;
//}
//原因：new father()会构造一个father的实例化对象，包含成员函数void say() {printf("hello son\n");} void getAge() {printf("son age is 20\n");}
//      son* p可以指向m_age和m_name，但是father对象中没有定义m_age和m_name，所以如果引用p->m_age会报错

//父类指针指向子类对象，如果调用普通函数则调用父类的，如果调用虚函数则调用子类的
int main() {
	father* p = new son();
	p->getAge();  //son age is 20
	p->say();     //hello father
	return 0;
}




