//TODO: Fill in the the empty class member functions
//No modification to the main is needed for the program to run.


#include<iostream>
#include<string>

using namespace std;

class Student
{
	//private by default but I included it anyways for clarity
private:
	string name;
	int id;
	double grade;

	//public member function prototypes
public:
	Student();
	Student(string, int, double);
	string getName();
	int getId();
	double getGrade();
	void setName(string);
	void setId(int);
	void setGrade(double);
	void printInfo();
	char getLetterGrade();
	~Student();
};

//Constructor for zero parameters. Initialize the private variables to some default value.
Student::Student() : name("Craig Slist"), id(626), grade(86.95)
{

}

//Constructor with three parameters. Initialize the private variables with the parameters
Student::Student(string n, int i, double g) : name(n), id(i), grade(g)
{

}

//Accessor for the name variable
string Student::getName()
{
	return name;
}

//Accessor for the id variable
int Student::getId()
{
	return id;
}

//Accessor for the grade variable
double Student::getGrade()
{
	return grade;
}

//Mutator to set the name variable to the parameter
void Student::setName(string n)
{
	name = n;
}

//Mutator to set the id variable to the parameter
void Student::setId(int i)
{
	id = i;
}

//Mutator to set the grade variable to the parameter
void Student::setGrade(double g)
{
	grade = g;
}

//Function to print the name, id, grade, and letter grade of the student
void Student::printInfo()
{
	cout << "Name = " << name << endl
		<< "Id = " << id << endl
		<< "Grade = " << grade << endl;
}

//Function to determine the letter grade of the student
char Student::getLetterGrade()
{
	if (grade >= 90) {
		return 'A';
	}
	else if (grade >= 80) {
		return 'B';
	}
	else if (grade >= 70) {
		return 'C';
	}
	else if (grade >= 60) {
		return 'D';
	}
	else {
		return 'F';
	}
}

//Destructor
Student::~Student()
{
	cout << "Your student " << name
		<< " has been destroyed.\n"
		<< "Their id was: " << id
		<< " and their grade was " << grade << endl;
}


int main()
{
	//Create two students, each using a different constructor
	Student sample, rex("Rex T", 619, 95.68);

	//Display the information stored in these objects
	sample.printInfo();
	rex.printInfo();

	//get certain attributes
	cout << "object rex's id is: " << rex.getId() << endl;
	cout << "object sample's grade is: " << sample.getGrade() << endl;
	cout << "object sample's name is: " << sample.getName() << endl;

	//set certain attributes
	sample.setName("Craig Slist");
	rex.setGrade(96.45);
	sample.setId(626);

	//Pause the system before the object's destructor is called
	system("pause");
	return 0;
}