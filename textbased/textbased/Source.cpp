#include <iostream>
#include <string>
#include <windows.h>
#include "Colour.h"
#include <stdlib.h>

using namespace std;

string possesion,player,Open,Enter;


int main() {
    cout << Color(7) << "-------------------------------------------------------------------------------------------" << endl;
    cout << " You are a brand new creation made by the evil scientist " << "Dr. LongBottom "<< Color(7); 
    cout << "Know for his hainous deeds he created you inorder to protect his most prized" << possesion << Color(11);
	cin >> possesion;

    system("cls");

    cout << Color(7) << "-------------------------------------------------------------------------------------------" << endl;
	cout << Color(7) << " The doctor says to you" << endl;


    cout << " My new creation, now that you are completed it the next task is a " << Color(13) << "name" << endl;
    cout << Color(7) << " ...tell me beast what is your " << "name" << Color(13);
    cin >> player;

    system("cls");

    cout << Color(7) << "-------------------------------------------------------------------------------------------" << endl;
    cout << Color(7) << " Ahh yes " << Color(13) << player << endl;
    cout << Color(7) << " Now for your first task you have to get across the lab and go to my possesion which is littered with traps and weird past times of mine.";

    system("cls");

    cout << " You just need to open the first " << Color(12) << "Door" << endl;

    
    cout << Color(7) << " You notice the door maybe you can " << Color(12) << "Enter" << endl;
    cin >> Enter;

	return 0;
}