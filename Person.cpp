#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

class Person{
public:
	Person(string n="",string id="0")
		:name(n),idNum(id){}
	~Person(){cout << " Destroy Person. "};
	string getName(){return name;}
	string getIdNum{return idNum;}
	void setName(string name){this->name=name;}
	void setIdNum(string idNum){this->idNum=idNum;}
	string toString(){return name +"  "+idNum;}
	bool equals(Person &p){return p.getName==name&&p.getIdNum=idNum}
protected:
	string name;
	string idNum;
}

class Student : public Person{
public:
	Student(aY =0,gpa = 0)
		:Person(n,id),admitYear(aY),this->gpa(gpa){}
	~Student(){cout << " Destroy Student. ";}
	int getAdmitYear(){return admitYear;}
	double getGpa(){return gpa;}
	void setGpa(int gpa){this->gpa=gpa;}
	void setAdmitYear(int year){admitYear=year;}
	string toString(){return " "+name+" "+idNum+" "+intToString(admitYear)+"  "+intToString(gpa);}
	bool equals(Student &s){return Person::getName==name && Person::getIdNum==idNum && s.getGpa==gpa && s.getAdmitYear==admitYear;}    
private:
	int admitYear;
	double gpa;
}
class Faculty : public Person{
public:
	Faculty();
	~Faculty();
	int getHireYear(){return hireYear;}
	void setHireYear(int year){hireYear = year;}
	string toString(){return " "+name+" "+idNum+" "+intToString(hireYear);}
	bool equals(Faculty &fac){
		return Person::getName == name && Person::getIdNum == idNum && fac.getHireYear=hireYear;
	}
private:
	int hireYear;
};