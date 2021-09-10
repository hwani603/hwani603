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
	GradeBook myGradebook; // myGradebook 이라는 이름의 object 생성
	myGradebook.displayMessage(); //displayMessage라는 함수 call
	return 0;
}// end main function
