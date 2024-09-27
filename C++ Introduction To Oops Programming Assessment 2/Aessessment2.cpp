#include<iostream>
using namespace std;
class Lecture {
    private :
        string lecturerName;
        string subjectName;
        string courseName;
        int lecturerNumber;
        
    public :
        Lecturers(string lecturerName, string subjectName, string courseName,int lecturerNumber = 0) 
        {
            lecturerName = lecturerName;
            subjectName = subjectName;
            courseName = courseName;
            lecturerNumber = lecturerNumber;
        }
        void addLectureDetails() 
        {
            cout << "Enter Lecturer Name: ";
            cin >> lecturerName;
            cout << "Enter Subject Name: ";
            cin >> subjectName;
            cout << "Enter Course Name: ";
            cin >> courseName;
            cout << "Enter Number of Lectures:= ";
            cin >> lecturerNumber;
        }
        void getLectureDetails () 
        {
            cout << "Lecturer Name: " << lecturerName << endl;
            cout << "Subject Name: " << subjectName << endl;
            cout << "Course Name: " << courseName << endl;
            cout << "Number of Lectures: " << lecturerNumber << endl;
        }
};
int main()
{
	Lecture lecturers[5];
    cout << "Please enter details for 5 lecturers.\n";
    cout << "\nEnter details for Lecturer 1: ";
    lecturers[0].addLectureDetails();
    cout << "\nEnter details for Lecturer 2: ";
    lecturers[1].addLectureDetails();
    cout << "\nEnter details for Lecturer 3: ";
    lecturers[2].addLectureDetails();
    cout << "\nEnter details for Lecturer 4: ";
    lecturers[3].addLectureDetails();
    cout << "\nEnter details for Lecturer 5: ";
    lecturers[4].addLectureDetails();
    cout << "\nEnter the all lecturers details :\n";
    
    lecturers[0].getLectureDetails();
    lecturers[1].getLectureDetails();
    lecturers[2].getLectureDetails();
    lecturers[3].getLectureDetails();
    lecturers[4].getLectureDetails();

    return 0;
}
