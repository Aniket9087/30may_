#include <iostream>
#include <string>

using namespace std;

class Lacture_Details
{
    string lacturer_Name;
    string subject_Name;
    string course_Name;
    int Number_Lactures;

public:
    
    Lacture_Details() 
{
        lacturer_Name = "";
        subject_Name = "";
        course_Name = "";
        Number_Lactures = 0;
}

        void Add_Lacture_Details(string name, string subject, string course, int number_Lactures) 
{
        lacturer_Name = name;
        subject_Name = subject;
        course_Name = course;
        number_Lactures = number_Lactures;
}

       void displayDetails() 
{
        cout << "Lacturer Name: " << lacturer_Name << endl;
        cout << "Subject Name: " << subject_Name << endl;
        cout << "Course Name: " << course_Name << endl;
        cout << "Number of Lactures: " << Number_Lactures << endl;
}
};

main()
{
     int NUMBER_LACTURERS = 5;

    Lacture_Details lacturers[NUMBER_LACTURERS];

    
    for (int i = 0; i < NUMBER_LACTURERS;i++) 
{
        string name, subject, course;
        int number_Lactures;

        cout << "Enter details for Lacturer " << i + 1 << ":" << endl;

        cout << "Lacturer Name: ";
        getline(cin, name);

        cout << "Subject Name: ";
        getline(cin, subject);

        cout << "Course Name: ";
        getline(cin, course);

        cout << "Number of Lactures: ";
        cin >> number_Lactures;
        cin.ignore(); 

        lacturers[i].Add_Lacture_Details(name, subject, course, number_Lactures);
        cout << endl;
}

    
    for (int i = 0; i < NUMBER_LACTURERS;i++) 
{
        cout << "Details for Lacturer " << i + 1 << ":" << endl;
        lacturers[i].displayDetails();
        cout << endl;
}

}
