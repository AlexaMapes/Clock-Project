// Alexa Mapes
// 5/19/2021

#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include "functions.h"

using namespace std;

int main() {
	int menuChoice;
	int timeModifier = 0;
	int sec_prev = 0;

	while (true) {
		// Display current time until a key is pressed on the keyboard
		while (!_kbhit()) {
			int seconds, minutes, hours, hours24;
			string AMorPM;

			time_t total_seconds = (time(0) + timeModifier);

			struct tm* ct = localtime(&total_seconds);

			// Gets current time
			seconds = ct->tm_sec;
			minutes = ct->tm_min;
			hours = ct->tm_hour;
			hours24 = ct->tm_hour;

			if (hours >= 12) {
				AMorPM = "PM";
			}
			else {
				AMorPM = "AM";
			}

			hours = hours > 12 ? hours - 12 : hours;

			DisplayTimes(sec_prev, seconds, hours, minutes, hours24, AMorPM);

			sec_prev = seconds;

		}

		DisplayMenu();

		cin >> menuChoice;

		if (menuChoice == 1) {
			timeModifier = timeModifier + 3600;
		}
		else if (menuChoice == 2) {
			timeModifier = timeModifier + 60;
		}
		else if (menuChoice == 3) {
			++timeModifier;
		}
		else if (menuChoice == 4) {
			return 0;
		}
		else {
			cout << "Invalid Input" << endl;
		}
		continue;
	}

	return 0;
}