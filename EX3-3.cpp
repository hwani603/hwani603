#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string> // program uses C++ standard string class
using std::string;
using std::getline;
//gradebook class definition
class GradeBook {
public:
	//function that displays a welcome messafe to the GradeBook user
	void displayMessage(string courseName) {
		cout << "Welcome to the grade book for\n"<< courseName << "!"<<endl;
	
	}//end function displayMessage
};//end class GradeBook

//main function begins
int main() {
	string nameOfCourse; // string of characters to store the course name
	GradeBook myGradeBook; //create a Gradebook object named myGradebook

	//prompt for and input course name
	cout << "Please enter the course wname : " << endl;
	getline(cin, nameOfCourse);//read a course name with blanks
	cout << endl;
	//call myGradeBook's displayMessage function
	//and pass nameOfCourse as an argument
	myGradeBook.displayMessage(nameOfCourse);
	return 0; 
}
