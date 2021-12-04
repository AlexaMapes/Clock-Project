// Alexa Mapes
// 5/19/2021

#include <iostream>
#include "functions.h"
using namespace std;

// Displays the menu
void DisplayMenu() {
	cout << "***************************" << endl;
	cout << "* 1 - Add One Hour        *" << endl;
	cout << "* 2 - Add One Minute      *" << endl;
	cout << "* 3 - Add One Second      *" << endl;
	cout << "* 4 - Exit Program        *" << endl;
	cout << "***************************" << endl;
}


void DisplayTimes(int sec_prev, int seconds, int hours, int minutes, int hours24, string AMorPM) {
	if (seconds == sec_prev + 1 || (sec_prev == 59 && seconds == 0)) {
		system("CLS");
		cout << "***************************     ***************************" << endl;
		cout << "*      12-Hour Clock      *     *      24-Hour Clock      *" << endl;
		cout << "*       " << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << " " << AMorPM << "       *     ";
		cout << "*        " << (hours24 < 10 ? "0" : "") << hours24 << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << "         *" << endl;
		cout << "***************************     ***************************" << endl << endl;
		cout << "Press space or enter to view menu" << endl;

	}
}
