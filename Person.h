#ifndef _Person_h
#define _Person_h
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
	Person(string n="",string id="0");
	~Person();
	string getName();
	string getIdNum();
	void setName(string name);
	void setIdNum(string idNum);
	string toString(){return name +"  "+idNum;}
	bool equals(Person &p){return p.getName==name && p.getIdNum==idNum;}
protected:
	string name;
	string idNum;
}

class Student : public Person{
public:
	Student(aY =0,gpa = 0);
	~Student();
	int getAdmitYear();
	double getGpa();
	void setGpa(int gpa);
	void setAdmitYear(int year);
	string toString();
	bool equals(Student &s);
private:
	int admitYear;
	double gpa;
}

class Faculty : public Person{
public:
	Faculty();
	~Faculty();
	int getHireYear();
	void setHireYear(int year);
	string toString();
	bool equals(Faculty &fac);
private:
	int hireYear;
};
#endif;