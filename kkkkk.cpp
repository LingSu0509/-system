#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include <algorithm>
#include"student.h"
#include"Dormitory.h"
#include"Dormitory_info.h"

using namespace std;

void Student::Read(string number[], string name[], string age[], string sex[], string college[], string major[], string grade[])
{
	ifstream infile("D:\\c++\\k\\KKKKKK\\student.txt", ios::in);
	if (!infile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < count; i++)
	{
		infile >> number[i] >> name[i] >> age[i] >> sex[i] >> college[i] >> major[i] >> grade[i];
	}
	infile.close();
	
}
int Student::Judge(string num)
{
	string number[50], name[50], age[50], sex[50], college[50], major[50], grade[50];
	this->Read(number, name, age, sex, college, major, grade);
	for (int i = 0; i < count; i++)
	{
		if (num == number[i])
		{
			return i;
			break;
		}
	}
	return -1;
}
void Student::add_student_infomation()
{
	string number, name, age, sex, college, major, grade; int num;
	ofstream outfile("D:\\c++\\k\\KKKKKK\\student.txt");
	if (!outfile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	cout << "**********请输入将要录入学生信息的人数***********" << endl;
	cin >> num;
	cout << "**************输入学生的相应信息:****************" << endl;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "第" << count + 1 << "个学生:" << endl;
		cout << "=============================" << endl;
		cout << "学号: ";
		cin >> number;
		if (number == "0") break;
		cout << "姓名：";
		cin >> name;
		cout << "年龄：";
		cin >> age;
		cout << "性别：";
		cin >> sex;
		cout << "学院：";
		cin >> college;
		cout << "专业：";
		cin >> major;
		cout << "年级：";
		cin >> grade;
		cout << "=============================" << endl;
		cout << endl;
		count++;
		m_number = number;
		outfile << m_number << "	";//把数据写入记事本
		m_name = name;
		outfile << m_name << "	";
		m_age = age;
		outfile << m_age << "	";
		m_sex = sex;
		outfile << m_sex << "	";
		m_college = college;
		outfile << m_college << "	";
		m_major = major;
		outfile << m_major << "	";
		m_grade = grade;
		outfile << m_grade << "	";
		outfile << endl;
	}
	outfile.close();
	cout << "添加完毕!!" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void Student::search()
{
	string  num, number[50], name[50], age[50], sex[50], college[50], major[50], grade[50];
	this->Read(number, name, age, sex, college, major, grade);
	cout << "*************输入的学生的学号:************* "<<endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1)
	{
		cout << "***************学生的信息为：***************" << endl;
		cout << "=============================" << endl;
		cout << "学号:" ;
		cout << number[k] << endl;
		cout << "姓名:" ;
		cout << name[k] << endl;
		cout << "年龄:" ;
		cout << age[k] << endl;
		cout << "性别:" ;
		cout << sex[k] << endl;
		cout << "学院:" ;
		cout << college[k] << endl;
		cout << "专业:" ;
		cout << major[k] << endl;
		cout << "年级:" ;
		cout << grade[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
	}
	else
	{
		cout << "*************没有这个学生的信息*************" << endl;
	}
	system("pause");
	system("cls");
	cout << endl;
}
void Student::search_demo(string num)
{
	string number[50], name[50], age[50], sex[50], college[50], major[50], grade[50];
	this->Read(number, name, age, sex, college, major, grade);
	int k = this->Judge(num);
	if (k != -1)
	{
		cout << "=============================" << endl;
		cout << "学号:" ;
		cout << number[k] << endl;
		cout << "姓名:" ;
		cout << name[k] << endl;
		cout << "年龄:" ;
		cout << age[k] << endl;
		cout << "性别:" ;
		cout << sex[k] << endl;
		cout << "学院:" ;
		cout << college[k] << endl;
		cout << "专业:" ;
		cout << major[k] << endl;
		cout << "年级:" ;
		cout << grade[k] << endl;
		cout << endl;
		cout << "=============================" << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
}
void Student::Fstudent()
{
	string num, number[50], name[50], age[50], sex[50], college[50], major[50], grade[50]; int z, i, a;
	this->Read(number, name, age, sex, college, major, grade);
	a = this->count;
	cout << "************输入要修改学生信息的学号:************ "<<endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1)
	{
		cout << "=============================" << endl;
		cout << "学号:";
		cout << number[k] << endl;
		cout << "姓名:";
		cout << name[k] << endl;
		cout << "年龄:";
		cout << age[k] << endl;
		cout << "性别:";
		cout << sex[k] << endl;
		cout << "学院:";
		cout << college[k] << endl;
		cout << "专业:";
		cout << major[k] << endl;
		cout << "年级:";
		cout << grade[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "请问是否要修改该学生的信息(1、是  2、否）" << endl;
		cin >> z;
		switch (z)
		{
		case(1): {
					{
					cout << "=============================" << endl;
					cout << "学号：";
					cin >> m_number;
					number[k] = m_number;
				    cout << "姓名：";
					cin >> m_name;
					name[k] = m_name;
					cout << "年龄：";
					cin >> m_age;
					 age[k]=m_age;
					cout << "性别：";
					cin >> m_sex;
					sex[k]=m_sex;
					cout << "学院：";
					cin >> m_college;
					college[k]=m_college;
					cout << "专业：";
					cin >> m_major;
					major[k]=m_major;
					cout << "年级：";
					cin >> m_grade;
					grade[k]=m_grade;
					cout << "=============================" << endl; 
					}
				}
		case(2):break;}
	}
	else
	{
		cout << "************没有这个学生，修改失败！************" << endl;
	}
	ofstream outfile("D:\\c++\\k\\KKKKKK\\student.txt");
	if (!outfile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (i = 0; i < a; i++)
	{
		outfile << number[i] << "	";//把数据写入记事本
		outfile << name[i] << "	";
		outfile << age[i] << "	";
		outfile << sex[i] << "	";
		outfile << college[i] << "	";
		outfile << major[i] << "	";
		outfile << grade[i] << "	";
		outfile << endl;
	}
	outfile.close();
	cout << "**************修改完毕！！！**************" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void Student::del_student_infomation()
{
	string num, number[50], name[50], age[50], sex[50], college[50], major[50], grade[50]; int z, i, a;
	a = this->count - 1;
	this->Read(number, name, age, sex, college, major, grade);
	cout << "************输入要删除的学生的学号:************ " << endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1)
	{
		cout << "=============================" << endl;
		cout << "学号:" ;
		cout << number[k] << endl;
		cout << "姓名:" ;
		cout << name[k] << endl;
		cout << "年龄:" ;
		cout << age[k] << endl;
		cout << "性别:" ;
		cout << sex[k] << endl;
		cout << "学院:";
		cout << college[k] << endl;
		cout << "专业:" ;
		cout << major[k] << endl;
		cout << "年级:" ;
		cout << grade[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "请问是否要删除该学生的信息(1、是  2、否）" << endl;
		cin >> z;
		switch (z)
		{
		case(1):
		{
			for(i=k;i<count-k;i++)
			{ 
				number[k] = number[k + 1];
				name[k] = name[k + 1];
				age[k] = age[k + 1];
				sex[k] = sex[k + 1];
				college[k] = college[k + 1];
				major[k] = major[k + 1];
				grade[k] = grade[k + 1];
			}
		cout << "****************删除成功***************" << endl;
		}	
		case(2):break;
		}
	}
	else
	{
		cout << "***********没有这个学生，删除失败！***********" << endl;
	}
	ofstream outfile("D:\\c++\\k\\KKKKKK\\student.txt");
	if (!outfile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (i = 0; i < a; i++)
	{
		outfile << number[i] << "	";//把数据写入记事本
		outfile << name[i] << "	";
		outfile << age[i] << "	";
		outfile << sex[i] << "	";
		outfile << college[i] << "	";
		outfile << major[i] << "	";
		outfile << grade[i] << "	";
		outfile << endl;
	}
	outfile.close();
	system("pause");
	system("cls");
	cout << endl;
}

void Dormitory::Read(string number[], string buildingname[], string floornum[], string dtype[])
{
	ifstream infile("D:\\c++\\k\\KKKKKK\\dormitory.txt", ios::in);
	if (!infile) {
		cerr << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < this->count; i++) {
		infile >> number[i] >> buildingname[i] >> floornum[i] >> dtype[i];
	}
	infile.close();
}
int Dormitory::Judge(string num)
{
	string number[50], buildingname[50], floornum[50], dtype[50];
	this->Read(number, buildingname, floornum, dtype);
	for (int i = 0; i < this->count; i++) {
		if (num == number[i]) {
			return i;
			break;
		}
	}
	return -1;
}

void Dormitory::add_dormitory()
{
	string number, buildingname, floornum, dtype; int z;
	ofstream outfile("D:\\c++\\k\\KKKKKK\\dormitory.txt");
	if (!outfile) {
		cerr << "open error" << endl;
		exit(1);
	}
	cout << "***********请输入添加宿舍信息的人数***********" << endl;
	cin >> z;
	cout << "输入相应信息:" << endl;
	cout << endl;
	for (int i = 0; i < z; i++) {
		cout << "第" << count + 1 << "个宿舍：" << endl;
		cout << "=============================" << endl;
		cout << "宿舍编号：";
		cin >> number;
		if (number == "0")break;
		cout << "宿舍楼名：";
		cin >> buildingname;
		cout << "楼层号：";
		cin >> floornum;
		cout << "宿舍类型（二人间、四人间、六人间、八人间）：";
		cin >> dtype;
		cout << "=============================" << endl;
		cout << endl;
		count++;
		d_number = number;
		outfile << d_number << "	";//把数据写入记事本
		d_buildingname = buildingname;
		outfile << d_buildingname << "	";
		d_floornum = floornum;
		outfile << d_floornum << "	";
		d_dtype = dtype;
		outfile << d_dtype << "	";
		outfile << endl;
	}
	outfile.close();
	cout << "添加完毕！！！" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void Dormitory::search_dormitory()
{
	string num, number[50], buildingname[50], floornum[50], dtype[50];
	this->Read(number, buildingname, floornum, dtype);
	cout << "************输入查询的宿舍编号：************"<<endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1) {
		cout << "=============================" << endl;
		cout << "宿舍编号:" ;
		cout << number[k] << endl;
		cout << "宿舍楼名:" ;
		cout << buildingname[k] << endl;
		cout << "楼层号:" ;
		cout << floornum[k] << endl;
		cout << "宿舍类型（二人间、四人间、六人间、八人间）:" ;
		cout << dtype[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
	}
	else {
		cout << "没有此宿舍" << endl;
	}
	system("pause");
	system("cls");
	cout << endl;
}
void Dormitory::search_dormitory_demo(string num)
{
	string number[50], buildingname[50], floornum[50], dtype[50];
	this->Read(number, buildingname, floornum, dtype);
	int k = this->Judge(num);
	if (k != -1) {
		cout << "=============================" << endl;
		cout << "宿舍编号:";
		cout << number[k] << endl;
		cout << "宿舍楼名:" ;
		cout << buildingname[k] << endl;
		cout << "楼层号:" ;
		cout << floornum[k] << endl;
		cout << "宿舍类型（二人间、四人间、六人间、八人间）:" ;
		cout << dtype[k] << endl;
		cout << endl;
		cout << "=============================" << endl;
	}
	else
	{
		cout << "没有此宿舍" << endl;
	}
	system("pause");
	system("cls");
	cout << endl;
}
void Dormitory::del_dormitory_infomation()
{
	string num, number[50], buildingname[50], floornum[50], dtype[50]; int z,a,i;
	a = this->count;
	this->Read(number, buildingname, floornum, dtype);
	cout << "************输入删除宿舍信息的宿舍编号：************" << endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1) {
		cout << "=============================" << endl;
		cout << "宿舍编号:" ;
		cout << number[k] << endl;
		cout << "宿舍楼名:" ;
		cout << buildingname[k] << endl;
		cout << "楼层号:" ;
		cout << floornum[k] << endl;
		cout << "宿舍类型:" ;
		cout << dtype[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "请问是否要删除该学生的宿舍信息(1、是  2、否）" << endl;
		cin >> z;
		switch (z)
		{
		case(1): {
					for (i = k; i < a; i++)
					{
						number[i] = number[i+1];
						buildingname[i] = buildingname[i+1];
						floornum[i] = floornum[i+1];
						dtype[i] = dtype[i + 1];
					}
					cout << "删除成功" << endl;
					}
				
		}
	}
	else
	{
		cout << "没有此宿舍!!!" << endl;
	}
	ofstream outfile("D:\\c++\\k\\KKKKKK\\dormitory.txt");
	if (!outfile) {
		cerr << "open error" << endl;
		exit(1);
	}
	for (i = 0; i < a - 1; i++)
	{
		outfile << number[i] << "	";//把数据写入记事本
		outfile << buildingname[i] << "	";
		outfile << floornum[i] << "	";
		outfile << dtype[i] << "	";
		outfile << endl;
	}
	outfile.close();
	system("pause");
	system("cls");
	cout << endl;
}
void Dormitory::Fdormitory()
{
	string num, number[50], buildingname[50], floornum[50], dtype[50]; int z, a, i;
	a = this->count;
	this->Read(number, buildingname, floornum, dtype);
	cout << "**********输入修改宿舍信息的宿舍编号：***********" << endl;;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1) {
		cout << "=============================" << endl;
		cout << "该宿舍信息如下："<<endl;
		cout << "宿舍编号:" ;
		cout << number[k] << endl;
		cout << "宿舍楼名:" ;
		cout << buildingname[k] <<endl;
		cout << "楼层号:";
		cout << floornum[k] << endl;
		cout << "宿舍类型:";
		cout << dtype[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "请问是否要修改该学生的宿舍信息(1、是  2、否）" << endl;
		cin >> z;
		switch (z)
		{
		case(1):
		{
			cout << "=============================" << endl;
			cout << "宿舍编号:";
			cin >> d_number;
			number[k] = d_number;
			cout << "宿舍楼名：";
			cin >> d_buildingname;
			buildingname[k] = d_buildingname;
			cout << "楼层号：";
			cin >> d_floornum;
			floornum[k] = d_floornum;
			cout << "宿舍类型:";
			cin >> d_dtype;
			dtype[k] = d_dtype;
			cout << "=============================" << endl;
		}
		case(2):break;
		}
		ofstream outfile("D:\\c++\\k\\KKKKKK\\dormitory.txt");
		if (!outfile) {
			cerr << "open error" << endl;
			exit(1);
		}
		for (i = 0; i < a; i++)
		{
			outfile << number[i] << "	";//把数据写入记事本
			outfile << buildingname[i] << "	";
			outfile << floornum[i] << "	";
			outfile << dtype[i] << "	";
			outfile << endl;
		}
		outfile.close();
		cout <<"**************修改完毕！！！**************" << endl;
		system("pause");
		system("cls");
		cout << endl;
	}
}
void Dormitory_info::Read(string student_number[], string dormitory_number[], string in_time[], string is_arrearage[]) {
	ifstream infile("D:\\c++\\k\\KKKKKK\\dormitory_info.txt", ios::in);
	if (!infile) {
		cerr << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < this->count; i++) {
		infile >> student_number[i] >> dormitory_number[i] >> in_time[i] >> is_arrearage[i];
	}
	infile.close();
}
int Dormitory_info::Judge(string num)
{
	string student_number[50], dormitory_number[50], in_time[50], is_arrearage[50]; int i=0;
	this->Read(student_number, dormitory_number, in_time, is_arrearage);
	for (i = 0; i < this->count; i++)
	{
		if (num == student_number[i]|| num == dormitory_number[i])
		{
			return i; break;
		}
	}
	return i;
}

void Dormitory_info::add_dormitory_info()
{
	string student_number, dormitory_number, in_time, is_arrearage; int a;
	ofstream outfile("D:\\c++\\k\\KKKKKK\\dormitory_info.txt");
	if (!outfile) {
		cerr << "open error" << endl;
		exit(1);
	}
	cout << "**************请输入添加的人数**************" << endl;
	cin >> a;
	cout << "***************输入相应信息:****************" << endl;
	cout << endl;
	for (int i = 0; i < a; i++) {
		cout << "第" << count + 1 << "个学生的住宿信息：" << endl;
		cout << "=============================" << endl;
		cout << "学生学号：";
		cin >> student_number;
		if (student_number == "0")break;
		cout << "宿舍编号：";
		cin >> dormitory_number;
		cout << "入住时间(格式:2021-06-01)：";
		cin >> in_time;
		cout << "是否欠费(是/否):";
		cin >> is_arrearage;
		cout << "=============================" << endl;
		cout << endl;
		count++;
		di_student_number = student_number;
		outfile << di_student_number << "	";//把数据写入记事本
		dormitory_number = dormitory_number;
		outfile << dormitory_number << "	";
		time = in_time;
		outfile << time << "	";
		di_is_arrearage = is_arrearage;
		outfile << di_is_arrearage << "	";
		outfile << endl;
	}
	outfile.close();
	cout << "添加完毕" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void  Dormitory_info::search_dormitory_info() {
	string num, student_number[50], dormitory_number[50], in_time[50], is_arrearage[50];Dormitory dor;
	this->Read(student_number, dormitory_number, in_time, is_arrearage);
	cout << "********请输入查询的学生学号或者宿舍编号：*********" << endl;
	cin >> num;
	int k = this->Judge(num);
	if(k==0)
	{
		cout << "=============================" << endl;
		cout << "学生学号:" ;
		cout << student_number[k] << endl;
		cout << "宿舍编号:" ;
		cout << dormitory_number[k] << endl;
		cout << "入住时间:" ;
		cout << in_time[k] << endl;
		cout << "是否欠费:";
		cout << is_arrearage[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
	}
	else{ cout << "************没有此学生的入住信息！************" << endl; }
	cout << "****************是否需要查询该学生的其他信息****************" << endl;
	cout << "不需要输入’1‘，若输入学号可查询学生信息输入‘2’，若输入宿舍号可查询宿舍信息输入‘3’" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:break;
	case 2: {student.search_demo(num); break; }
	case 3: {dormitory.search_dormitory_demo(num); break; }
	}
	system("pause");
	system("cls");
	cout << endl;
}

int Student::count = 0;
int Dormitory::count = 0;
int Dormitory_info::count = 0;

int main()
{
	int select = -1;
	Student stu;
	Dormitory dor;
	Dormitory_info dormitory_info;
	while (select != 0) {
		cout << "******欢迎使用学生宿舍管理系统！！！******" << endl;
		cout << "*****学生住宿信息管理系统（结束输入0）****" << endl;
		cout << "**************1.添加学生信息**************" << endl;
		cout << "**************2.查询学生信息**************" << endl;
		cout << "**************3.删除学生信息**************" << endl;
		cout << "**************4.修改学生信息**************" << endl;
		cout << "**************5.添加宿舍信息**************" << endl;
		cout << "**************6.查询宿舍信息**************" << endl;
		cout << "**************7.删除宿舍信息**************" << endl;
		cout << "**************8.修改宿舍信息**************" << endl;
		cout << "**************9.添加住宿信息**************" << endl;
		cout << "**************10.查询住宿信息**************" << endl;
		cout << "************输入需要使用的功能:************" << endl;;
		{
			cin >> select;
			cout << endl;
			system("cls");
		}
		switch (select) {
		case 0: {
			system("cls");
			cout << "**************谢谢您的使用！！*************" << endl;
			break;
		}
		case 1: {
			stu.add_student_infomation();
			break;
		}
		case 2: {
			stu.search();
			break;
		}
		case 3: {
			stu.del_student_infomation();
			break;
		}
		case 4: {
			stu.Fstudent();
			break;
			
		}
		case 5: {
			dor.add_dormitory();
			break;
			
		}
		case 6: {
			dor.search_dormitory();
			break;
		}
		case 7: {
			dor.del_dormitory_infomation();
			break;
		}
		case 8: {
			dor.Fdormitory();
			break;
		}
		case 9: {
			dormitory_info.add_dormitory_info();
			break;
		}
		case 10: {
			dormitory_info.search_dormitory_info();
			break;
		}
		}
	}
	return 0;
	
}