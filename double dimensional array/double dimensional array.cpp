
#include <iostream>
#include <vector>
using namespace std;
//.
//
//Write a program to input the number of students in the list.For each 
//student enter the marks of four subjects :
//
//· English
//Maths
//· Science
//.Computers
//
//Compute the average marks obtained by each student also, print the
//student with the highest marks using the concept of double
//dimensional array.

int main()
{
    //float marks_info[][6] = {
    //    
    //};

    vector<vector<float>> marks_info;

    for (int i = 1; i <= 10; i++) {
        float maths_marks, english_marks, science_marks, computing_marks;
 
        cout << "================ " << i << " ================" << endl;
        cout << "Enter your Maths marks - ";
        cin >> maths_marks;

        cout << "Enter your English marks - ";
        cin >> english_marks;

        cout << "Enter your Science marks - ";
        cin >> science_marks;

        cout << "Enter your Computing marks - ";
        cin >> computing_marks;

        float average, total;
        total = maths_marks + english_marks + science_marks + computing_marks;
        average = total / 4;

        cout << "The average marks you attained this time was - " << average << endl;

        marks_info.push_back({ maths_marks, english_marks, science_marks, computing_marks, total, average });
    }
   

    



}
