/* Sai Ram Thota
 * CWID 11573236
 * Homework 4 probelm 3
 *
 * */

#include <iostream>

using namespace std;

int fun(int *x)
{
    *x += 10;

    return *x;
};


int main()
{

   int  a,b;
   a = 10;

   b = a;
   b += fun(&a);

   cout<< "With the function call on the right, ";
   cout <<" b is: " << b <<endl;

   a = 10;
   b = fun(&a) + a;
   
   cout <<"With the function call on the left, ";
   cout<<" b is: " << b<< endl;

   return 0;
}
