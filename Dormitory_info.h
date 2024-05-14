#ifndef _Dormitory_info_H_
#define _Dormitory_info_H_
using namespace std;
class Dormitory_info :public Student
{
public:
	string di_student_number;
	string dormitory_number;
	string time;
	string di_is_arrearage;
	Student student;
	Dormitory dormitory;
	void Read(string student_number[], string dormitory_number[], string in_time[], string is_arrearage[]);
	int Judge(string num);
	void add_dormitory_info();
	void search_dormitory_info();
	Dormitory_info() {}
	~Dormitory_info() {}
	static int count;
};
#endif