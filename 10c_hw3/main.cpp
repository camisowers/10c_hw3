/*
	Cameron Sowers
	UID: 404766299

	Honesty Pledge:	"I pledge that I have neither given nor received unauthorized assistance on this assignment."
	Collaborators: Gaurav Gulati
*/

#include <iostream>
#include <string>
#include <vector>
#include "id_types.h"

using std::cout;		//can use cout in main
using std::vector;		//can use vector in main

int main()
{
	Student* fred = new Student("fred");	
	Employee* jane = new Employee("jane");
	cout << "id for fred " << fred->get_id() << "\n";		//output fred's student id
	cout << "id for jane " << jane->get_id() << "\n";		//output jane's employee id

	TeachingAssistant* beth = new TeachingAssistant("beth_Sid", "beth_Eid");
	cout << "id for Employee beth " << beth->get_id() << "\n";			//output beth's employee id
	cout << "id for Student beth " << beth->student_id() << "\n";		//output beth's student id

	vector<Student*> students; 
	students.push_back(fred);
	students.push_back(beth);			//can add beth as Student* bc it inherits

	for (int i = 0; i < students.size(); i++)
		cout << "student " << students[i]->get_id() << "\n";		//output student ids

	vector<Employee*> employees;
	employees.push_back(jane);
	employees.push_back(beth);			//can add beth as Employee* bc it inherits

	for (int i = 0; i < employees.size(); i++)
		cout << "employee " << employees[i]->get_id() << "\n";		//output emplyee ids


	return 0;
}