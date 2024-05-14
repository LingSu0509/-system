#ifndef _Dormitory_H_
#define _Dormitory_H_
#include <algorithm>
using namespace std;
class Dormitory :public Student
{
public:
	string d_number;
	string d_buildingname;
	string d_floornum;
	string d_dtype;
	void Read(string number[], string buildingname[], string floornum[], string dtype[]);
	int Judge(string num);
	void add_dormitory();
	void search_dormitory();
	void search_dormitory_demo(string num);
	void del_dormitory_infomation();
	void Fdormitory();
	Dormitory() {}
	~Dormitory() {}
	static int count;
};
#endif