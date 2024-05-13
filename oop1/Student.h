#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	char fio[50];
	double avgMark;
	char phoneNumber[15];
	char adress[50];
	char studyName[30];
	int groupNumb;
public:
	Student();
	Student(const char* fio, const double avgMark, const char* phoneNumber, const char* adress, const char* studyName, const  int groupNumb);
	~Student();

	void setName(const char* fio);
	void setAvgMark(const double avgMark);
	void setPhone(const char* phoneNumber);
	void setAddress(const char* adress);
	void setStudy(const char* studyName);
	void setGroup(const int groupNumb);
	

	char* getName();
	double getAvgMark();
	char* getPhone();
	char* getAddress();
	char* getStudy();
	int getGroup();

	void showInfo();

};

