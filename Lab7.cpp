#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//❓❓ LAB QUESTION 4:
//Below this comment, declare an array named friends, with the names of 4 people.
string friends [4] = {"Steve", "Jane", "Jeff", "Rick"};

//❓❓ LAB QUESTION 5:
//Below this comment, declare an array named ages with the ages of these 4 friends.
int ages [4] = {34, 25, 52, 18};

void main(){


    //❓❓ Lab Question 6:
    //Below this comment, write a for loop that outputs the names of all your friends.
    cout << "My friends names are:" << endl;

    for (int i = 0; i < 4; i++){
        cout << friends[i] << endl;
    }

    //❓❓ Lab Question 7:
    //Below this comment, write a for loop that outputs the name and age of all your friends.

    cout << "These are their ages:" << endl;

    for (int x = 0; x < 4; x++){
        cout << friends[ x ] << " is " << ages [ x ] << endl; 
    }
    //❓❓ Lab Question 8:
    //Below this comment, that finds the age of your oldest friend.

    int oldest = 0;
    for ( int i = 0; i < 4; i++){
        if ( ages [i] > oldest ){
            oldest = ages [i];
        }
    }

    cout << "My oldest friend is " << oldest << " years old." << endl;


    //❓❓ Lab Question 9:
    //Below this comment, that finds the NAME of your oldest friend.
    

    //cout << "My oldest friend is named " << oldestName << endl;
}