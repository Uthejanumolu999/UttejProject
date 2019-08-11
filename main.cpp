#include <iostream>
#include "structures.h"

#include "implementations.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<"Welcome to the timetabling application"<<endl;
	
	
	string name = "admin";
	string pass="admin";
	string _name,_pass;
	cout<<"Input your name"<<endl;
	cin>>_name;
	cout<<"Input your password"<<endl;
	cin>>_pass;
	if(_name != name)
	{
		cout<<"Wrong username"<<endl;
	}
	if(_pass != pass)
	{
		cout<<"Wrong password"<<endl;
	}
	else{
		cout<<"That will be all for now"<<endl;
		return 0;
	}
	
	
	timetable tt = timetable();
	return 0;
}

