//CS 3363
//
//Programming assignment 1
//Problem 1(b): Without using structures
//
//Sai Ram Thota
//CWID : 11573236
//    
//=======================================================================

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
   //Intializing variable
   int n = 0; 
   cout << "Please enter number of students (int):" ;
   cin >> n;
   string name[n];
   string gradeLevel[n];
   double GPA[n];
   double age[n];

   //Input
   for(int i=0; i < n; i++)
   {
      cout<<"Enter the FIRST  name (eg: Ram) : \n";
      cin >> name[i];

      cout<< "Enter gradeLevel of the student " +name[i] +" (eg:Freshman): \n";
      cin >> gradeLevel[i];

      cout<<"Enter GPA of " << name[i] << ": \n";
      cin>> GPA[i];

      cout<<"Enter the age of " << name[i] << ": \n";
      cin>> age[i];
   }
   
   cout << "\n======================================================\n";
   cout << "Output: \n" <<endl;
   
   //output
   for(int i=0; i < n ; i++)
   {
      cout << "Student name: " << name[i] << "\n";
      cout << name[i]<<"\'s gradeLevel:  " << gradeLevel[i] <<"\n";
      cout << name[i] << "\'s GPA:  " << GPA[i] <<"\n";
      cout << name[i] << "\'s age:  " << age[i] <<"\n" << endl ;
   }

   return 0;
}
