#include <iostream>
#include <iomanip>
#include <chrono>				/* Included different libraries to assist in functionality*/
#include <thread>									
#include <cstdlib>									
#include <string>
#include <conio.h>
#include <Windows.h>
#include "clockFunction.h"

using namespace std; 

int main() {
	char userInput = '0';  /* declaring variables */
	int standardHour = 6;
	int militaryHour = 18;
	int sharedMinutes = 22;
	int sharedSeconds = 35;

	while (userInput != 4) {
		DisplayTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
		DisplayMenu();
		cout << "Update clock using the inputs listed.";

		if (_kbhit()) {

			if (_getch() == '1') {
				AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 1);					/* The main program that prompts the user to enter an input */
				UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
			}
			if (_getch() == '2') {
				AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 2);
				UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
			}
			if (_getch() == '3') {
				AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 3);
				UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
			}
			if (_getch() == '4') {
				break;
			}
		}
		else {
			AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 3);
			UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
		}
	}
	return 0;
}