#include "Student.h"
#include "Plane.h"
int main()
{
	//task 1 

	Student Oleh("Dekhtiarenko Oleh", 9.8, "+380999232929", "asdasd str. 5", "HRTK",3);
	Oleh.showInfo();
	cout << "-----------------------------------------" << endl;
	Oleh.setAvgMark(8.7);
	Oleh.setGroup(45);
	Oleh.setStudy("XIRE");
	Oleh.showInfo();
	cout << "-----------------------------------------" << endl;
	cout << Oleh.getName()<<endl;
	cout << Oleh.getAvgMark()<<endl;

	//task 2 

	Plane b;
	b.showInfo();
	cout << "--------------------------------------";
	Plane a(11,"Kiew","New York","Boing A414",200,200);
	a.sellTicket("Vitaliy Klichko");
	a.sellTicket("Biletskiy Vitaliy");	
	a.sellTicket("Oleh Dekhtiarenko");
	a.sellTicket("Levchenko Yaroslav");	
	a.sellTicket("Lapshun Tetiana");
	a.sellTicket("Iskoresenskiy Mikola");
	a.showInfo();
	cout << "------------------------------------------------" << endl;
	a.returnTicket("Oleh Dekhtiarenko");
	a.showInfo();
}	
