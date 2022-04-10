#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Color {
public:
    Color(int desiredColor) {
        consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        color = desiredColor;
    }

    friend ostream& operator<<(ostream& ss, Color obj) {
        SetConsoleTextAttribute(obj.consoleHandle, obj.color);
        return ss;
    }
private:
    int color;
    HANDLE consoleHandle;
};

string possesion,player;


int main() {
    cout << " You are a brand new creation made by the evil scientist " << "Dr. LongBottom "<< Color(7); 
    cout << "Know for his hainous deeds he created you inorder to protect his most prized" << possesion << Color(11);
	cin >> possesion;


    cout << Color(7) << "-----------------------------------------------------------------------------" << endl;
	cout << Color(7) << " The doctor says to you" << endl;


    cout << " My new creation, now that you are completed it the next task is a " << Color(13) << "name" ;
    cout << Color(7) << "...tell me beast what is your " << "name" << Color(13); cin >> player;


    cout << Color(7) << "-----------------------------------------------------------------------------" << endl;
    cout << Color(7) << " Ahh yes " << Color(13) << player << endl;
    

    cout << Color(7) << "Now for your first task you have to get across the lab and go to my possesion which is littered with traps and weird past times of mine.";

	return 0;
}