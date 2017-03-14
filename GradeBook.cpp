//gradebook.cpp
//Member function definations for class for class gradebook that uses a switch statement to count A, B,C and F grades.

#include <iostream>
#include "GradeBook.h" // include defination of class gradebook
using namespace std;

//constructor initializes courseName with string supplied as argument;
//initializes counter data members to 0

GradeBook::GradeBook( string name )
: aCount(0), //initialize count of A grades to 0
  bcount(0), //initialize count of B grades to 0
  cCount(0), //initialize count of C grades to 0
  dCount(0), //initialize count of D grades to 0
  fCount(0), //initialize count of C grades to 0
  
  {
  setCourseName( name );
  } // end GradeBook constructor
  
  //function to set the course name ; limits name to 25 or fewer characters
  
  void GradeBook::setCourseName( string name)
  {
  if  ( name.size() <= 25 )    //if name has 25 or fewer characters
      courseName = name; //store the course name in the object
      else // if name is longer than 25 chracters
      {
      // set courseName to first 25 characters of parameters name
      courseName = name.substr( 0, 25 );  //select first 25 characters
      cerr <<"Name \"" <<name <<"\" exceeds maximum length (25). \n"
      <<"Limiting courseName to first 25 characters. \n"<< endl;
      } //end if..else
  }  //end function setCourseName
  
  //function to reterieve the course name
  
  //display a welcome message to the GradeBook user
  void GradeBook::displayMessage() const
  {
  //this statement calls getCourseName to get the
  //name of the course this GradeBook represents
   
      cout<<"Welcome to the grade book for\n"<< getCourseName() << "\n"
      <<endl;
  } //end function displayMessage
  
  //input arbitrary number of grades from user ; update grade counter 
  
  void GradeBook::inputGrades()
  {
  int grade; //grade enterned by user
  cout <<"Enter the letter grades." << endl
  <<"Enter the EDF character to end input. " <<endl;
  
  //loop until user types end-of-file key sequence
  while (( grade = cin.get() )  != EOF )
  {
  //determine which grade was enterned
  switch ( grade ) // switch statement nested in while
  {
  case 'A' : //if grade was uppercase A
  case 'a' : //or lower case a
    ++aCount ; // increment aCount
    break;
    
  case 'B': //grade was uppercase B
  case 'b':
      ++bCount ; // increment bCount
      break;
      
  case 'C':
  case 'c':
     ++cCount; 
     break;
     
  case 'D':
  case 'd':
    ++dCount ; // increment dCount
    break;
    
  case  'F':
  case  'f':
    ++fCount;
    break;
    
  case '\n': //ignore the new lines;
  case '\t': //tabs,
  case ' ' : //and spaces in input
    break;  //exit switch
    
    default:  //catch all other characters
    cout <<"Incorrect letter grade entered ."
    <<"Enter a new grade ."<<endl;
    break;  // optional ; will exit switch anyway
           }// end the switch 
    }// end the while loop
  
} //end function inputGrades
  
  //display a report based on the grades enterned by user 
  void GradeBook::displayGradeReport() const
  {
  //output summary of results 
  
  cout<<"\n \nNumber of students who received each letter grade: "
      <<"\nA: "<< aCount  //display number of A grades
      <<"\nB: "<< aCount  //display number of B grades
      <<"\nC: "<< aCount  //display number of C grades
      <<"\nD: "<< aCount  //display number of D grades
      <<"\nF: "<< aCount  //display number of F grades
      << endl;      
  } //end of the function displayGradeReport
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
