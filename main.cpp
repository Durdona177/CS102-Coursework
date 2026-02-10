/*
Problem 1

1. Declare an integer type variable name intNumber and assign
it a number of students sitting in the lab.
2. Declare a float type variable name floatNumber and assign a
number of π.

3. Declare a double type variable name doubleNumber and as-
sign it a value of 45.1234.

4. Declare a bool type variable name boolean and assign it a
value of true.
5. Declare a char type variable name charName and assign it a
value of A.
6. Lastly, print the values of all declared variables and their sizes
using sizeof(variable name) function.
 */

#include <iostream>
using namespace std;

int main() {

 int intNumber = 15;
 cout <<"The number: " <<intNumber << " and the size: " << sizeof(intNumber)<<endl;


 float f_number = 3.14;
 cout << "The number: " << f_number<< " and the size: " << sizeof(f_number)<<endl;


 double doubleNumber = 45.1234;
 cout << "The number: " << doubleNumber<< " and the size: " << sizeof(doubleNumber) << endl;


 bool bool_type = true;
 cout << "The number: " << bool_type <<  " and the size: " << sizeof(bool_type)<< endl;

 char chartype = 'c';
 cout << "The number: " << chartype << " and the size: " << sizeof(chartype)<<endl;


/*
 Problem 2
 Write a C++ program that prints exactly following text:
 ”I’m standing” on the edge of some crazy cliff.
 What I have to do, I have to catch everybody\
 if they start to go over the cliff—I mean\
 \if they’re running and they don’t look
 where they’re going I have to come out
 from somewhere and catch them.
 Refer to escape sequences table.
 */



 cout << " \"I’m standing\” on the edge of some crazy cliff.\n"
 "What I have to do, I have to catch everybody\\ \n"
 "if they start to go over the cliff—I mean\\ \n"
 "\\if they’re running and they don’t look\n"
 "where they’re going I have to come out\n"
 "from somewhere and catch them.\n";


 /*
 Problem 3
Create an integer variable a with value 189 and character vari-
able b with value ’B’. Find and store the following in suitable
data types:
• Float number a
3
• Decimal value of b
• Float number a+b
5
• Character of a

10 − 1 positions after b.

Lastly, print all of them in a row one by one.
Example:
Input:
example values a=13, b=’R’
Output:
4.3 82 19 R
 */

 int a = 189;
 char b = 'B';
 float c = (float)a/3;
 float c2 = (float)(a+b)/5;
 int d = (int)b;
 char e = b +(a/10-1);

cout << c <<"\n" << c2 <<"\n"<<d <<"\n"<<e <<"\n"<< endl;





/*
Problem 4
Write C++ program that inputs two integer numbers and prints
the sum in the following format:
Sum: value1 + value2 = result

Note that your code of line shouldn’t just be like below:

cout ≪ ”Sum : ” ≪ ”38 + 73 = 111” ≪ endl;
Example:
Input:
38 73
Output:
Sum: 38 + 73 = 111
 */


int num1, num2;
cin >>num1>>num2;
int res = num1 +num2;
cout<<res;


/*
 Write C++ program that inputs integer N and prints its last
 two digits.
 Example:
 Input:
 643
 Output:
 43
 */

int N;
 cin >> N;
 int last2 = N%100;
 cout << "last 2 is: " << N<< endl;


/*
 Problem 6
 Write C++ program that calculates:

 t =
 3(x2+3)
 y
 4+3

 If x and y are inputs.
 Output format is shown in the example
 Example:
 Input:
 2 5
 Output:
 t=2.47059
 */







 return 0;
}