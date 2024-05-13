#pragma once
#include<iostream>
#include<cstring>

using namespace std;

class Plane
{
	int FlightNum;
	char* from;
	char* to;
	char* planeMark;
	int countPlases;
	int countAvaliblePlases;
	int NPassangers;
	char** Pasangers;

public:
	Plane();
	Plane(int FlightNum, const char* from, const char* to, const char* planeMark, int countPlases,int countAvaliblePlases);
	~Plane();

	void setFlightNum(int FlightNum);
	void setCityFrom(const char* from);
	void setCityTo(const char* to);
	void setPlaneMark(const char* planeName);
	void setCountPlases(int countPlases);
	void setCountAvaliblePlases(int countAvaliblePlases);

	
	int getFlightNum();
	const char* getCityFrom();
	const char* getCityTo();
	const char* getPlaneMark();
	int getCountPlases();
	int getCountAvaliblePlases();

	void showInfo();
	void showPassangers();

	void sellTicket(const char* PassangerName);
	void returnTicket(const char* PassangerName);
};

