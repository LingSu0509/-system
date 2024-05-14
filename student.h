#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
#include<string>
using namespace std;
class Student 
{
public:
	string m_number;  //学号 
	string m_name; //姓名 
	string m_age; //年龄 
	string m_sex; //性别 
	string m_college; //学院 
	string m_major; //专业 
	string m_grade; //年级
	virtual void Read(string number[], string name[], string age[], string sex[], string college[], string major[], string grade[]);
	int Judge(string num);
	void add_student_infomation();
	void search_demo(string num);
	void search();
	void del_student_infomation();
	void Fstudent();
	static int count;
	Student() {};
	~Student() {};
};
#endif
