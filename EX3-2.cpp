#include <iostream>
using namespace std;

class GradeBook {
public:
	//function that displays a welcome message to the Gradebook user
	void displayMessage() {
		cout << "welcome to the grade book!" << endl;

}//end function displayMessage
};//end class Gradebook
int main() {//main function begins
	GradeBook myGradebook; // myGradebook �̶�� �̸��� object ����
	myGradebook.displayMessage(); //displayMessage��� �Լ� call
	return 0;
}// end main function
