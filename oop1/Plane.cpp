#include "Plane.h"
Plane::Plane() 
{
	FlightNum = 0;
	from = new char[6] {"Empty"};
	to = new char[6] {"Empty"};
	planeMark= new char[6] {"Empty"};
	countPlases = 0;
	countAvaliblePlases = 0;
	NPassangers = 0;
	Pasangers = nullptr;
}

Plane::Plane
(
	int FlightNum,
	const char* from, 
	const char* to, 
	const char* planeMark,
	int countPlases, 
	int countAvaliblePlases
)
{
	NPassangers = 0;
	Pasangers = nullptr;
	this->FlightNum = FlightNum;

	int sizefrom = strlen(from)+1;
	this->from = new char[sizefrom];
	strcpy_s(this->from, sizefrom, from);

	int sizeto = strlen(to)+1;
	this->to = new char[sizeto];
	strcpy_s(this->to, sizeto, to);

	int sizePlaneMark = strlen(planeMark) + 1;
	this->planeMark = new char[sizePlaneMark];
	strcpy_s(this->planeMark, sizePlaneMark, planeMark);

	this->countPlases = countPlases;
}

Plane::~Plane()
{
	delete[] this->from;
	delete[] this->to;
	delete[] this->planeMark;
	if (Pasangers != nullptr){
		for (int i = 0; i < NPassangers; i++)
		{
			delete[] Pasangers[i];
		}
	delete[] Pasangers;
	}
	cout << "\n\nDeleted!\n\n";
}

void Plane::setFlightNum(int FlightNum)
{
	this->FlightNum = FlightNum;
}

void Plane::setCityFrom(const char* from)
{
	int sizefrom = strlen(from) + 1;
	this->from = new char[sizefrom];
	strcpy_s(this->from, sizefrom, from);
}

void Plane::setCityTo(const char* to)
{
	int sizeto = strlen(to) + 1;
	this->to = new char[sizeto];
	strcpy_s(this->to, sizeto, to);
}

void Plane::setPlaneMark(const char* planeName)
{
	int sizePlaneMark = strlen(planeMark) + 1;
	this->planeMark = new char[sizePlaneMark];
	strcpy_s(this->planeMark, sizePlaneMark, planeMark);
}

void Plane::setCountPlases(int countPlases)
{
	this->countPlases = countPlases;
}

int Plane::getFlightNum()
{
	return this->FlightNum;
}

const char* Plane::getCityFrom()
{
	return this->from;
}

const char* Plane::getCityTo()
{
	return this->to;
}

const char* Plane::getPlaneMark()
{
	return this->planeMark;
}

int Plane::getCountPlases()
{
	return countPlases;
}

int Plane::getCountAvaliblePlases()
{
	return countPlases-NPassangers;
}

void Plane::showPassangers()
{
	for(int i =0;i<NPassangers;i++)
	{
		cout << "#" << i + 1 << " " << Pasangers[i] << endl;
	}
}

void Plane::showInfo()
{
	cout << "Flight num: " << FlightNum<<endl;
	cout << "From city: " << from<<endl;
	cout<<"To city: " << to << endl;
	cout << "Mark of plane: " << planeMark << endl;
	cout << "How many plases: " << countPlases<<endl;
	cout << "How many avalible plases: " << countPlases-NPassangers << endl << endl;

	showPassangers();
}

void Plane::sellTicket(const char* PassangerName)
{
	char** tmp = new char* [NPassangers + 1];
	for (int i = 0; i < NPassangers; i++)
	{
		int sizePasang = strlen(Pasangers[i]) + 1;
		tmp[i] = new char[sizePasang];
		strcpy_s(tmp[i],sizePasang,Pasangers[i]);
	}
	int sizeNewPassanger = strlen(PassangerName) + 1;
	tmp[NPassangers] = new char[sizeNewPassanger];
	strcpy_s(tmp[NPassangers], sizeNewPassanger, PassangerName);

	for (int i = 0; i < NPassangers; i++)
		delete[] Pasangers[i];
	delete[] Pasangers;

	Pasangers = tmp;
	NPassangers++;
	this->countAvaliblePlases = countPlases - NPassangers;
}

void Plane::returnTicket(const char* PassangerName)
{
	for (int i = 0; i < NPassangers; i++)
	{
		if (strcmp(this->Pasangers[i], PassangerName) == 0) 
		{
			char** tmp = new char* [NPassangers - 1];
			for (int j = 0,k=0; j < NPassangers; j++)
			{
				if(strcmp(this->Pasangers[j], PassangerName) != 0)
				{
				int sizePasang = strlen(Pasangers[j]) + 1;
				tmp[k] = new char[sizePasang];
				strcpy_s(tmp[k], sizePasang, Pasangers[j]);
				k++;
				}
			}
			for (int j = 0; j < NPassangers; j++)
				delete[] Pasangers[j];
			delete[] Pasangers;

			Pasangers = tmp;
			NPassangers--;
		}
	}
	this->countAvaliblePlases = countPlases - NPassangers;
}
