#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void ged101()
{
}

void ged102()
{
}

void ged105()
{
}

void math101()
{
}

void pathfit()
{
}

void nstp()
{
}

void cc100()
{
    double prelimTotal, midtermTotal, finalExamTotal, labAct1Total, labAct2Total, labAct3Total, finalProjectTotal;
    double prelimExam, midtermExam, finalExam, labAct1, labAct2, labAct3, finalProject, finalGrade;

    cout << "Prelim Exam Score (20%): ";
    cin >> prelimExam;
    cout << "/";
    cin >> prelimTotal;

    cout << "Midterm Exam Score (20%): ";
    cin >> midtermExam;
    cout << "/";
    cin >> midtermTotal;

    cout << "Final Exam Score (20%): ";
    cin >> finalExam;
    cout << "/";
    cin >> finalExamTotal;

    cout << "Laboratory Activity 1 Score (10%): ";
    cin >> labAct1;
    cout << "/";
    cin >> labAct1Total;

    cout << "Laboratory Activity 2 Score (10%): ";
    cin >> labAct2;
    cout << "/";
    cin >> labAct2Total;

    cout << "Laboratory Activity 3 Score (10%): ";
    cin >> labAct3;
    cout << "/";
    cin >> labAct3Total;

    cout << "Final Project Presentation Score (10%): ";
    cin >> finalProject;
    cout << "/";
    cin >> finalProjectTotal;

    finalGrade = (((prelimExam / prelimTotal) * 100) * 0.2) + (((midtermExam / midtermTotal) * 100) * 0.2) + (((finalExam / finalExamTotal) * 100) * 0.2) + (((labAct1 / labAct1Total) * 100) * 0.1) + (((labAct2 / labAct2Total) * 100) * 0.1) + (((labAct3 / labAct3Total) * 100) * 0.1) + (((finalProject / finalProjectTotal) * 100) * 0.1);

    cout << endl;
    cout << "Final Grade is " << finalGrade << endl;

    double gpa;

    if (finalGrade >= 97)
    {
        gpa = 1.00;
    }
    else if (finalGrade >= 94)
    {
        gpa = 1.25;
    }
    else if (finalGrade >= 91)
    {
        gpa = 1.50;
    }
    else if (finalGrade >= 88)
    {
        gpa = 1.75;
    }
    else if (finalGrade >= 85)
    {
        gpa = 2.00;
    }
    else if (finalGrade >= 82)
    {
        gpa = 2.25;
    }
    else if (finalGrade >= 79)
    {
        gpa = 2.50;
    }
    else if (finalGrade >= 76)
    {
        gpa = 2.75;
    }
    else if (finalGrade >= 75)
    {
        gpa = 3.00;
    }
    else
    {
        gpa = 5.00;
    }

    cout << "GPA: " << gpa;
}

void cc101()
{
}

int main()
{
    string course;
    int semester;

    cout << string(30, '-') << endl;
    cout << "Welcome to BSU Alangilan 1st year BSIT Student Grading System" << endl;
    cout << string(30, '-') << endl;

    cout << "Enter Semester: ";
    cin >> semester;

    cout << "Enter Course: ";
    cin >> course;

    if (semester == 1)
    {
        if (course == "GED101")
        {
            ged101();
        }
        else if (course == "GED102")
        {
            ged102();
        }
        else if (course == "GED105")
        {
            ged105();
        }
        else if (course == "MATH101")
        {
            math101();
        }
        else if (course == "NSTP")
        {
            nstp();
        }
        else if (course == "PathFit")
        {
            pathfit();
        }
        else if (course == "CC101")
        {
            cc100();
        }
        else if (course == "CC100")
        {
            cc100();
        }
    }
    else if (semester == 2)
    {
    }
    else
    {
        cout << "Invalid Semester, Please Try Again";
    }

    return 0;
}