#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
#include<string>
using namespace std;
class Student 
{
public:
	string m_number;  //ѧ�� 
	string m_name; //���� 
	string m_age; //���� 
	string m_sex; //�Ա� 
	string m_college; //ѧԺ 
	string m_major; //רҵ 
	string m_grade; //�꼶
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
