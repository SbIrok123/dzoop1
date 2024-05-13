#include "Student.h"

Student::Student()
{
	strcpy_s(fio,50,"Empty");
	avgMark=0;
	strcpy_s(phoneNumber,15,"Empty");
	strcpy_s(adress, 50, "Empty");
	strcpy_s(studyName, 30, "Empty");
	groupNumb = 0;
}

Student::Student(const char* fio,const double avgMark,const char* phoneNumber,const char* adress,const char* studyName,const int groupNumb)
{
	strcpy_s(this->fio, 50, fio);
	this->avgMark = avgMark;
	strcpy_s(this->phoneNumber, 15, phoneNumber);
	strcpy_s(this->adress, 50, adress);
	strcpy_s(this->studyName, 30, studyName);
	this->groupNumb = groupNumb;
}

Student::~Student()
{
}

void Student::setName(const char* fio)
{
	if (strlen(fio)>0) strcpy_s(this->fio, 50, fio);
}

void Student::setAvgMark(const double avgMark)
{
	if(avgMark>0) this->avgMark = avgMark;
}

void Student::setPhone(const char* phoneNumber)
{
	if (strlen(phoneNumber) > 0) strcpy_s(this->phoneNumber, 15, phoneNumber);
}

void Student::setAddress(const char* adress)
{
	if (strlen(adress) > 0) strcpy_s(this->adress, 50, adress);
}

void Student::setStudy(const char* studyName)
{
	if (strlen(studyName) > 0) strcpy_s(this->studyName, 30, studyName);
}

void Student::setGroup(const int groupNumb)
{
	if (groupNumb > 0) this->groupNumb = groupNumb;
}

char* Student::getName()
{
	return fio;
}

double Student::getAvgMark()
{
	return avgMark;
}

char* Student::getPhone()
{
	return phoneNumber;
}

char* Student::getAddress()
{
	return adress;
}

char* Student::getStudy()
{
	return studyName;
}

int Student::getGroup()
{
	return groupNumb;
}

void Student::showInfo()
{
	cout << "Name : " << fio << endl;
	cout << "Average mark : " << avgMark << endl;
	cout << "Phone number : " << phoneNumber<<endl;
	cout << "Adress : " << adress << endl;
	cout << "Name of study place : " << studyName << endl;
	cout << "Group number : " << groupNumb << endl;
}


