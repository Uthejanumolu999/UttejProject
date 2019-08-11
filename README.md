#include <string>
#ifndef STRUCTURES
#define STRUCTURES
#include <unordered_map> 
#include <bits/stdc++.h>
using namespace std;
class hall{
	int maxaccomondation;
	string location;
	string name;
	public:
		void setMaxAccomondation(int max);
		void setLocation(string location);
		int getMaxAccomondation();
		string getLocation();
		hall(string name);
};

class school{
	int numberofcourses;
	int nooflecturehalls;
	string name;
	public:
		void setNumberofCourses(int num);
		void setNumberofLectureHalls(int num);
		int getNumberofCourses();
		int getNumberofLectureHalls();
		//school(string name);
		//school();
};

class classs{
	int numberofpupils;
	int numberofLessons;
	string name;
	public:
		void setName(string name);
		void setNumberofPupils(int number);
		void setNumberofLessons(int number);
		int getNumberofPupils();
		int getNumberofLessons();
		string getName();
		classs(string name);
	
};

struct time{
	int max=12;
	int duration=2;//2hrs
};
class timetable{
	//here's where all the big stuff will go
	private:
		int halls;
		school _school;
		int classes;
		string session;
		unordered_map<string, int> umap;
	public:
		void addHalls(hall h);
		void addClass(classs c);
		classs getClass();
		hall getHall();
		timetable(string school);
		timetable();
		string settimes();
		void addSchedule(string name, string className);
		
};

class schedule

void hall::setLocation(string location)
{
	this->location = location;
}
void hall::setMaxAccomondation(int max)
{
	this->maxaccomondation = max;
}
string hall::getLocation()
{
	return this->location;
}
int hall::getMaxAccomondation()
{
	return this->maxaccomondation;
}
 hall::hall(string name)
{
	this->name = name;
}

//school

int school::getNumberofCourses(){
	return this->numberofcourses;
}
int school::getNumberofLectureHalls()
{
	return this->nooflecturehalls;
}
void school::setNumberofCourses(int num)
{
	this->numberofcourses = num;
}
void school::setNumberofLectureHalls(int num)
{
	this->nooflecturehalls = num;
}


//class
classs::classs(string name)
{
	this->name = name;
	
}
string classs::getName()
{
	return this->getName();
}
int classs::getNumberofPupils()
{
	return this->numberofpupils;
}
int classs::getNumberofLessons()
{
	return this->numberofLessons;
}
void classs::setNumberofLessons(int number)
{
	this->numberofLessons = number;
}
void classs::setNumberofPupils(int number)
{
	this->numberofpupils = number;
}


//timetable
timetable::timetable(string name)
{
	
	this->halls = 0;
}
timetable::timetable()
{
	this->classes = 0;
	this->halls = 0;
	this->_school = school();
}
void timetable::addHalls(hall h)
{
	this->halls =1;
}

void timetable::addSchedule(string name, String className)
{
	this->umap[name] = className;
}

#endif
