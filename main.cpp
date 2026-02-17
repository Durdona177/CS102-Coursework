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

float x, y, t;
 cin >> x >> y;
 t = 3 * (x*x+3)/(y/4)+3;
 cout << "t= " << t << endl;

/*
//7th

double diameter, area;
 cin >> diameter >> area;
 double p = 3.14159265358979323846;
 area = p * (diameter * diameter);

cout << "area is equal to " << area << endl;




 //8th
 float v0;
 float v1;
 float time;
 cin >> v0 >> v1 >> time;
 float av = (v1-v0)/time;
 cout << "average acceleration: " << av << endl;



 //9th

 float distance;
 float f_e;
 float price;
 cin >> distance >> price >> f_e;
 float cost = (distance/f_e)*price;
 cout << "cost is equal to " << cost << endl;


 //10th
 double n1 = 1.13e3;
 double n2 = 4112-4;
 cout << "num1 is: " << n1 << "and num2 is: " << n2 << endl;
*/

//11th

 float a1 = 3.75;
 int b1 = a1;
 cout << b1 << endl;
 float result = b1 - a1;
 cout << "fractional part is " << result << endl;



//12th

int total_students;
 cin >> total_students;
 int first_10_groups = total_students / 11;
 int last_group = total_students % 11;
 cout << "in first group: " << first_10_groups << endl;
cout << "in last group: " << last_group << endl;



 //13th
 #include "math.h";

 float side;
 cin >> side;
 float area_h = (3*sqrt(3)/2)*(side*side);

cout << "the area of hexagon is " << area_h << endl;

//14th
 int a2, b2;
 cout << "enter a and b ";
 cin >> a2 >> b2;

 a2 = a2+b2;
 b2 = a2-b2;
 a2 = a2-b2;

 cout << "A is " << a2 << " and " << "B is " << b2 << endl;

//15th
 int x1;
 int y1;
 int x2;
 int y2;
 cin >> x1 >> y1 >> x2 >> y2;
 float e_distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
 cout << "output: " << e_distance << endl;




 return 0;
}

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main() {
    /*
        // 2nd problem
        cout << "Enter 3 numbers: ";
        double x1, x2, x3;
        cin >> x1>> x2>> x3;
        double m = (x1 + x2 +x3)/3.0;
        double var = (pow((x1-m), 2) + pow((x2-m), 2) + pow((x3-m), 2));
        cout << "output: " << var << endl;

        //3rd problem
        int x;
        cin >> x;
        cout << "enter a number: " << endl;
        if (x >0)
            cout << x << "is positive" << endl;
        else if (x <0)
            cout << x << " is negative" << endl;
        else
            cout << x << "is zero" << endl;


    //4th problem

        int d;
        cout << "enter a number: " << endl;
        cin >> d;
        if (d % 2 == 0)
            cout << "even number" << endl;
        else
            cout << "odd number" << endl;


    //5th problem
        int b, c;
        cout << "enter 2 numbers: " << endl;
        cin >> b >> c;
        if (b > c)
            cout << "b is greater number" << endl;
        else if (b < c)
            cout << "c is smaller number" << endl;
        else
            cout << "numbers are equal" << endl;


    //6th problem
        int n1, n2, n3;
        cout << "enter 3 numbers: " << endl;
        cin >> n1 >> n2 >> n3;
        if (n1 > n2 && n1 > n3)
            cout << "n1 is greatest" << endl;
        else if (n2 < n1 && n2 < n3)
            cout << "n2 is greatest" << endl;
        else
            cout << "n3 is greatest" << endl;



    //7th problem

        int s;
        cout << "enter the speed: " << endl;
        cin >> s;
        if (s <= 20)
            cout << "too slow" << endl;
        else if (s >= 80)
            cout << "too fast" << endl;
        else
            cout << "just right" << endl;



     //10th problem
        int i1, i2;
        cout << "enter 2 numbers: " << endl;
        cin >> i1 >> i2;
        if (i1 % i2 == 0)
            cout << i1 << " is divisible by " << i2 << endl;
        else
            cout << i1 << " is not divisible by " << i2 << endl;
        */


    //11th problem
    char s1;
    cout << "enter command: " << endl;
    cin >> s1;
    s1 = tolower(s1);

    if (s1 == 'g' || s1 == 'G') {
        cout << "Go!" << endl;
    }

    else if (s1 == 'y') {
        cout << "Get ready!" << endl;
    }
    else if (s1 == 'r' || s1 == 'R') {
        cout << "Stop!" << endl;
    }
    else
        cout << "Invalid command!" << endl;


    //11th problem with switch
    char ch;
    cout << "enter command: " << endl;
    cin >> ch;
    switch (ch) {
        case 'g':
        case 'G':
            cout << "Go!" << endl;
            break;
        case 'y':
        case 'Y':
            cout << "Get ready!" << endl;
            break;
        case 'r':
        case 'R':
            cout << "Stop!" << endl;
            break;

    }




    return 0;
}