//CS 3363
//
//Programming assignment 1 
//Problem 1(a): Array of Structures
//
//Sai Ram Thota
//CWID : 11573236
//
//=======================================================================

#include<iostream>
 #include<sstream>

 using namespace std;
 
 //intializing struct
 struct Student
 {
	string name;
	string gradeLevel;
	double age;
	double GPA;
 };
 
 int main()
 {
   
   //intializing variables
   int n;

   //size of the array
    cout << "Enter the number of students : " ;
    cin >> n ;
    cout << "\n";
    
    //Intializing array of structs
    Student opl[n];

    //input 
    for(int i=0; i < n; i++)
    {
       cout<<"Enter the FIRST name of the  student (eg: Sai): " ;
       cin >> opl[i].name;
       cout << endl;

      cout<< "Enter gradeLevel of the student " + opl[i].name + " (eg:freshman): \n";
      cin >> opl[i].gradeLevel;

       cout<<"Enter GPA of " + opl[i].name + ": \n";
       cin>> opl[i].GPA;

       cout<<"Enter the age of " + opl[i].name + ": \n";
       cin>> opl[i].age;
     }

    cout << "\n======================================================\n"
    cout << "Output: \n" << endl;
    
    //output through loop
    for(int i=0; i < n; i++)
    {
 
              cout<<" Student name:" <<   opl[i].name << endl;
 
              cout<< "Grade level of " << opl[i].gradeLevel << endl;
 
              cout<<"GPA of " << opl[i].GPA << endl;
 
              cout<<"Age of " << opl[i].age << " \n";
    }
 
 
    return 0;
 }
