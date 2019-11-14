/*
Dr. Tyson McMillan School Cost Estimator Using C++. Students were tasked with creating a C++ program from an operational Excel Spreasheet. 
Nov 14, 2019
*/
#include <iostream>
#include <string>
using namespace std; 
/*
Implementation of Option 4 Keep it Simple	
class	Semester
int main	3 instances of semester ft, pt, ht
int main has constant	Declare constants for all those constants values, semstersInAYear, hoursPerClass,
	Ask the user to populate the constants
*/

class Semester
{
  private:
  //systems assumptions constants
  //static const variables keep their value even after multiple calls
    static const int hoursPerClass = 3; 
    static const int monthsInOneSemester = 4;
    static const int semestersInAYear = 3; 
    //user changeable settings (need: setters and getters)
    int hoursTheStudentTakes; 
    int hoursInTheDegree; 
    string schoolName; 
    double costPerCreditHour; 
    double bookCostsPerClass;
    double roomAndBoardCosts; 
    double foodCostsPerMonth; 
    double travelCostsPerMonth; 
  public:
    Semester() //default constructor
    {
        //user changeable settings default values
        hoursTheStudentTakes = 0; //ft 12, pt 9, ht 6
        hoursInTheDegree = 60; 
        schoolName = "TCC"; 
        costPerCreditHour = 64.00; 
        bookCostsPerClass = 100.00;
        roomAndBoardCosts = 400.00; 
        foodCostsPerMonth = 150.00; 
        travelCostsPerMonth = 90.00; 
    }
};

int main() 
{
   //instances of the 3 types of semesters
   Semester ft;
   Semester pt;
   Semester ht; 

   static const int hoursAFullTimeStudent = 12;
    static const int hoursAPartTimeStudent = 9;
    static const int hoursAHalfTimeStudent = 6;

  return 0; 
}