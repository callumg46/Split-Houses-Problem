// Split Houses Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* PROBLEM

You live in a village. The village can be represented as a line that contains  grids. Each grid can be denoted as a house that is marked as  or a blank space that is marked as .

A person lives in each house. A person can move to a grid if it is adjacent to that person. Therefore, the grid must be present on the left and right side of that person.

Now, you are required to put some fences that can be marked as  on some blank spaces so that the village can be divided into several pieces. A person cannot walk past a fence but can walk through a house. 

You are required to divide the house based on the following rules:

A person cannot reach a house that does not belong to that specific person.
The number of grids each person can reach is the same and it includes the grid in which the house is situated.
In order to show that you are enthusiastic and if there are many answers, then you are required to print the one where most fences are placed.
Your task is to decide whether there is a possible solution. Print the possible solution.*/

#include <iostream>
using namespace std;

int main()
{
    const int grids = 5;
    char info[grids] = {'H', '.', '.', '.', 'H'};
    char B = 'B';
   

    for (int i = 0; i <= grids; i++) {

        if (info[i] == 'H' && info[i+1] == 'H') {
            cout << "NO";
            break;
        }
        
        else if (info[i] == '.')
        {
            info[i] = B;
        }

        cout << info[i];
    }


    

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
