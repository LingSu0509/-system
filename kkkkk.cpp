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
	cout << "**********�����뽫Ҫ¼��ѧ����Ϣ������***********" << endl;
	cin >> num;
	cout << "**************����ѧ������Ӧ��Ϣ:****************" << endl;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "��" << count + 1 << "��ѧ��:" << endl;
		cout << "=============================" << endl;
		cout << "ѧ��: ";
		cin >> number;
		if (number == "0") break;
		cout << "������";
		cin >> name;
		cout << "���䣺";
		cin >> age;
		cout << "�Ա�";
		cin >> sex;
		cout << "ѧԺ��";
		cin >> college;
		cout << "רҵ��";
		cin >> major;
		cout << "�꼶��";
		cin >> grade;
		cout << "=============================" << endl;
		cout << endl;
		count++;
		m_number = number;
		outfile << m_number << "	";//������д����±�
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
	cout << "������!!" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void Student::search()
{
	string  num, number[50], name[50], age[50], sex[50], college[50], major[50], grade[50];
	this->Read(number, name, age, sex, college, major, grade);
	cout << "*************�����ѧ����ѧ��:************* "<<endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1)
	{
		cout << "***************ѧ������ϢΪ��***************" << endl;
		cout << "=============================" << endl;
		cout << "ѧ��:" ;
		cout << number[k] << endl;
		cout << "����:" ;
		cout << name[k] << endl;
		cout << "����:" ;
		cout << age[k] << endl;
		cout << "�Ա�:" ;
		cout << sex[k] << endl;
		cout << "ѧԺ:" ;
		cout << college[k] << endl;
		cout << "רҵ:" ;
		cout << major[k] << endl;
		cout << "�꼶:" ;
		cout << grade[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
	}
	else
	{
		cout << "*************û�����ѧ������Ϣ*************" << endl;
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
		cout << "ѧ��:" ;
		cout << number[k] << endl;
		cout << "����:" ;
		cout << name[k] << endl;
		cout << "����:" ;
		cout << age[k] << endl;
		cout << "�Ա�:" ;
		cout << sex[k] << endl;
		cout << "ѧԺ:" ;
		cout << college[k] << endl;
		cout << "רҵ:" ;
		cout << major[k] << endl;
		cout << "�꼶:" ;
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
	cout << "************����Ҫ�޸�ѧ����Ϣ��ѧ��:************ "<<endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1)
	{
		cout << "=============================" << endl;
		cout << "ѧ��:";
		cout << number[k] << endl;
		cout << "����:";
		cout << name[k] << endl;
		cout << "����:";
		cout << age[k] << endl;
		cout << "�Ա�:";
		cout << sex[k] << endl;
		cout << "ѧԺ:";
		cout << college[k] << endl;
		cout << "רҵ:";
		cout << major[k] << endl;
		cout << "�꼶:";
		cout << grade[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "�����Ƿ�Ҫ�޸ĸ�ѧ������Ϣ(1����  2����" << endl;
		cin >> z;
		switch (z)
		{
		case(1): {
					{
					cout << "=============================" << endl;
					cout << "ѧ�ţ�";
					cin >> m_number;
					number[k] = m_number;
				    cout << "������";
					cin >> m_name;
					name[k] = m_name;
					cout << "���䣺";
					cin >> m_age;
					 age[k]=m_age;
					cout << "�Ա�";
					cin >> m_sex;
					sex[k]=m_sex;
					cout << "ѧԺ��";
					cin >> m_college;
					college[k]=m_college;
					cout << "רҵ��";
					cin >> m_major;
					major[k]=m_major;
					cout << "�꼶��";
					cin >> m_grade;
					grade[k]=m_grade;
					cout << "=============================" << endl; 
					}
				}
		case(2):break;}
	}
	else
	{
		cout << "************û�����ѧ�����޸�ʧ�ܣ�************" << endl;
	}
	ofstream outfile("D:\\c++\\k\\KKKKKK\\student.txt");
	if (!outfile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (i = 0; i < a; i++)
	{
		outfile << number[i] << "	";//������д����±�
		outfile << name[i] << "	";
		outfile << age[i] << "	";
		outfile << sex[i] << "	";
		outfile << college[i] << "	";
		outfile << major[i] << "	";
		outfile << grade[i] << "	";
		outfile << endl;
	}
	outfile.close();
	cout << "**************�޸���ϣ�����**************" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void Student::del_student_infomation()
{
	string num, number[50], name[50], age[50], sex[50], college[50], major[50], grade[50]; int z, i, a;
	a = this->count - 1;
	this->Read(number, name, age, sex, college, major, grade);
	cout << "************����Ҫɾ����ѧ����ѧ��:************ " << endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1)
	{
		cout << "=============================" << endl;
		cout << "ѧ��:" ;
		cout << number[k] << endl;
		cout << "����:" ;
		cout << name[k] << endl;
		cout << "����:" ;
		cout << age[k] << endl;
		cout << "�Ա�:" ;
		cout << sex[k] << endl;
		cout << "ѧԺ:";
		cout << college[k] << endl;
		cout << "רҵ:" ;
		cout << major[k] << endl;
		cout << "�꼶:" ;
		cout << grade[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "�����Ƿ�Ҫɾ����ѧ������Ϣ(1����  2����" << endl;
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
		cout << "****************ɾ���ɹ�***************" << endl;
		}	
		case(2):break;
		}
	}
	else
	{
		cout << "***********û�����ѧ����ɾ��ʧ�ܣ�***********" << endl;
	}
	ofstream outfile("D:\\c++\\k\\KKKKKK\\student.txt");
	if (!outfile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (i = 0; i < a; i++)
	{
		outfile << number[i] << "	";//������д����±�
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
	cout << "***********���������������Ϣ������***********" << endl;
	cin >> z;
	cout << "������Ӧ��Ϣ:" << endl;
	cout << endl;
	for (int i = 0; i < z; i++) {
		cout << "��" << count + 1 << "�����᣺" << endl;
		cout << "=============================" << endl;
		cout << "�����ţ�";
		cin >> number;
		if (number == "0")break;
		cout << "����¥����";
		cin >> buildingname;
		cout << "¥��ţ�";
		cin >> floornum;
		cout << "�������ͣ����˼䡢���˼䡢���˼䡢���˼䣩��";
		cin >> dtype;
		cout << "=============================" << endl;
		cout << endl;
		count++;
		d_number = number;
		outfile << d_number << "	";//������д����±�
		d_buildingname = buildingname;
		outfile << d_buildingname << "	";
		d_floornum = floornum;
		outfile << d_floornum << "	";
		d_dtype = dtype;
		outfile << d_dtype << "	";
		outfile << endl;
	}
	outfile.close();
	cout << "�����ϣ�����" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void Dormitory::search_dormitory()
{
	string num, number[50], buildingname[50], floornum[50], dtype[50];
	this->Read(number, buildingname, floornum, dtype);
	cout << "************�����ѯ�������ţ�************"<<endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1) {
		cout << "=============================" << endl;
		cout << "������:" ;
		cout << number[k] << endl;
		cout << "����¥��:" ;
		cout << buildingname[k] << endl;
		cout << "¥���:" ;
		cout << floornum[k] << endl;
		cout << "�������ͣ����˼䡢���˼䡢���˼䡢���˼䣩:" ;
		cout << dtype[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
	}
	else {
		cout << "û�д�����" << endl;
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
		cout << "������:";
		cout << number[k] << endl;
		cout << "����¥��:" ;
		cout << buildingname[k] << endl;
		cout << "¥���:" ;
		cout << floornum[k] << endl;
		cout << "�������ͣ����˼䡢���˼䡢���˼䡢���˼䣩:" ;
		cout << dtype[k] << endl;
		cout << endl;
		cout << "=============================" << endl;
	}
	else
	{
		cout << "û�д�����" << endl;
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
	cout << "************����ɾ��������Ϣ�������ţ�************" << endl;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1) {
		cout << "=============================" << endl;
		cout << "������:" ;
		cout << number[k] << endl;
		cout << "����¥��:" ;
		cout << buildingname[k] << endl;
		cout << "¥���:" ;
		cout << floornum[k] << endl;
		cout << "��������:" ;
		cout << dtype[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "�����Ƿ�Ҫɾ����ѧ����������Ϣ(1����  2����" << endl;
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
					cout << "ɾ���ɹ�" << endl;
					}
				
		}
	}
	else
	{
		cout << "û�д�����!!!" << endl;
	}
	ofstream outfile("D:\\c++\\k\\KKKKKK\\dormitory.txt");
	if (!outfile) {
		cerr << "open error" << endl;
		exit(1);
	}
	for (i = 0; i < a - 1; i++)
	{
		outfile << number[i] << "	";//������д����±�
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
	cout << "**********�����޸�������Ϣ�������ţ�***********" << endl;;
	cin >> num;
	int k = this->Judge(num);
	if (k != -1) {
		cout << "=============================" << endl;
		cout << "��������Ϣ���£�"<<endl;
		cout << "������:" ;
		cout << number[k] << endl;
		cout << "����¥��:" ;
		cout << buildingname[k] <<endl;
		cout << "¥���:";
		cout << floornum[k] << endl;
		cout << "��������:";
		cout << dtype[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
		cout << "�����Ƿ�Ҫ�޸ĸ�ѧ����������Ϣ(1����  2����" << endl;
		cin >> z;
		switch (z)
		{
		case(1):
		{
			cout << "=============================" << endl;
			cout << "������:";
			cin >> d_number;
			number[k] = d_number;
			cout << "����¥����";
			cin >> d_buildingname;
			buildingname[k] = d_buildingname;
			cout << "¥��ţ�";
			cin >> d_floornum;
			floornum[k] = d_floornum;
			cout << "��������:";
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
			outfile << number[i] << "	";//������д����±�
			outfile << buildingname[i] << "	";
			outfile << floornum[i] << "	";
			outfile << dtype[i] << "	";
			outfile << endl;
		}
		outfile.close();
		cout <<"**************�޸���ϣ�����**************" << endl;
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
	cout << "**************��������ӵ�����**************" << endl;
	cin >> a;
	cout << "***************������Ӧ��Ϣ:****************" << endl;
	cout << endl;
	for (int i = 0; i < a; i++) {
		cout << "��" << count + 1 << "��ѧ����ס����Ϣ��" << endl;
		cout << "=============================" << endl;
		cout << "ѧ��ѧ�ţ�";
		cin >> student_number;
		if (student_number == "0")break;
		cout << "�����ţ�";
		cin >> dormitory_number;
		cout << "��סʱ��(��ʽ:2021-06-01)��";
		cin >> in_time;
		cout << "�Ƿ�Ƿ��(��/��):";
		cin >> is_arrearage;
		cout << "=============================" << endl;
		cout << endl;
		count++;
		di_student_number = student_number;
		outfile << di_student_number << "	";//������д����±�
		dormitory_number = dormitory_number;
		outfile << dormitory_number << "	";
		time = in_time;
		outfile << time << "	";
		di_is_arrearage = is_arrearage;
		outfile << di_is_arrearage << "	";
		outfile << endl;
	}
	outfile.close();
	cout << "������" << endl;
	system("pause");
	system("cls");
	cout << endl;
}

void  Dormitory_info::search_dormitory_info() {
	string num, student_number[50], dormitory_number[50], in_time[50], is_arrearage[50];Dormitory dor;
	this->Read(student_number, dormitory_number, in_time, is_arrearage);
	cout << "********�������ѯ��ѧ��ѧ�Ż��������ţ�*********" << endl;
	cin >> num;
	int k = this->Judge(num);
	if(k==0)
	{
		cout << "=============================" << endl;
		cout << "ѧ��ѧ��:" ;
		cout << student_number[k] << endl;
		cout << "������:" ;
		cout << dormitory_number[k] << endl;
		cout << "��סʱ��:" ;
		cout << in_time[k] << endl;
		cout << "�Ƿ�Ƿ��:";
		cout << is_arrearage[k] << endl;
		cout << "=============================" << endl;
		cout << endl;
	}
	else{ cout << "************û�д�ѧ������ס��Ϣ��************" << endl; }
	cout << "****************�Ƿ���Ҫ��ѯ��ѧ����������Ϣ****************" << endl;
	cout << "����Ҫ���롯1����������ѧ�ſɲ�ѯѧ����Ϣ���롮2��������������ſɲ�ѯ������Ϣ���롮3��" << endl;
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
		cout << "******��ӭʹ��ѧ���������ϵͳ������******" << endl;
		cout << "*****ѧ��ס����Ϣ����ϵͳ����������0��****" << endl;
		cout << "**************1.���ѧ����Ϣ**************" << endl;
		cout << "**************2.��ѯѧ����Ϣ**************" << endl;
		cout << "**************3.ɾ��ѧ����Ϣ**************" << endl;
		cout << "**************4.�޸�ѧ����Ϣ**************" << endl;
		cout << "**************5.���������Ϣ**************" << endl;
		cout << "**************6.��ѯ������Ϣ**************" << endl;
		cout << "**************7.ɾ��������Ϣ**************" << endl;
		cout << "**************8.�޸�������Ϣ**************" << endl;
		cout << "**************9.���ס����Ϣ**************" << endl;
		cout << "**************10.��ѯס����Ϣ**************" << endl;
		cout << "************������Ҫʹ�õĹ���:************" << endl;;
		{
			cin >> select;
			cout << endl;
			system("cls");
		}
		switch (select) {
		case 0: {
			system("cls");
			cout << "**************лл����ʹ�ã���*************" << endl;
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