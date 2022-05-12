/***********************************************************************
Bachelor of Software Engineering
Media Design School
Auckland
New Zealand
(c) 2022 Media Design School
File Name : SlotMachine
Description : Main file which includes a slot machine game.
Author : Maxwell Presley
Mail : MaxwellPresley@mds.ac.nz
**************************************************************************/
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <sstream>
#include <string>
using namespace std;
// Initalizing Varibles
int total_chips = 2000;
int* ptotal_chips = &total_chips;
string menu;
string* pmenu = &menu;
string valid;
bool bet_check;
string retry;
int bet_amount;
int* pbet_amount = &bet_amount;
stringstream ss;
int n1 = 0;
int n2 = 0;
int n3 = 0;
int won_amount;
int* pwon_amount = &won_amount;
//Prototyping Functions
void Play();
void Credits();
void Quit();
void Menu();
void MenuAnswer();
void ChipsCheck();
void Betting();
HANDLE tc = GetStdHandle(STD_OUTPUT_HANDLE); //just once for text colour
int main() {	
	SetConsoleTextAttribute(tc, 14); // changing colour to yellow
	menu = "0";
	//creating the border around the text
	cout << endl << endl << endl << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	Sleep(300);
	cout << char(186);
	SetConsoleTextAttribute(tc, 15);
	cout << "Welcome to Slot Machine game!";
	SetConsoleTextAttribute(tc, 14);
	Sleep(300);
	cout << char(186) << endl;
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl << endl << endl << endl;
	SetConsoleTextAttribute(tc, 15);
	Sleep(300);
	Menu(); //calls function menu
	return(0);
}
void Menu() { //menu function where you select what you want to do
	Sleep(300);
	SetConsoleTextAttribute(tc, 14);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	SetConsoleTextAttribute(tc, 15);
	cout << " Player chips: ";
	SetConsoleTextAttribute(tc, 2);
	cout << *ptotal_chips << endl << endl; // displays player's chips
	Sleep(300);
	SetConsoleTextAttribute(tc, 15);
	cout << " 1) Play" << endl;
	Sleep(300);
	cout << " 2) Credits" << endl;
	Sleep(300);
	cout << " 3) Exit Game" << endl << endl;
	Sleep(300);
	cout << " Please select an option by inputting an integer from 1-3: " << endl;
	Sleep(300);
	SetConsoleTextAttribute(tc, 14);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	SetConsoleTextAttribute(tc, 15);
	cin >> *pmenu; //stores your option in a pointer to menu
	MenuAnswer();
}
void MenuAnswer() {
	if ((menu.find_first_not_of("0123456789") == string::npos) == true) {//if the input is a number
		if (*pmenu == "1") { //enters play mode
			Play();
			if (*ptotal_chips != 0) {
				Menu();
			}
		}
		else if (*pmenu == "2") { // displays credits
			system("CLS");
			Credits();
			Menu();
		}
		else if (*pmenu == "3") {//quits game
			Quit();
		}
		else {
			system("CLS");//clears screen so it looks nicer and is easier to read 
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			SetConsoleTextAttribute(tc, 15);
			cout << " The value " << *pmenu << " is not in the range of 1-3. Try again. " << endl;
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			SetConsoleTextAttribute(tc, 15);
			Menu();//loops back to the menu so u can try again
		}
	}
	else {//if input is not a number example 1a, a1, a, 1.1 & @#*
		system("CLS");
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(201) << char(205) << char(205) << char(205)  << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		cout << " The value " << *pmenu << " is not a valid integer. Try again. " << endl; //tells user its not a valid int
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
		Menu();//loops back to the menu so u can try again
	}
}
void Play() {
	system("CLS");
	bet_check = false;//sets bet check to false so it will always go into the loop when called
	while (bet_check == false) {
		SetConsoleTextAttribute(tc, 14);
		Sleep(300);
		cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		cout << " Player chips: ";
		SetConsoleTextAttribute(tc, 2);
		cout << *ptotal_chips << endl << endl;
		Sleep(300);
		SetConsoleTextAttribute(tc, 15);
		cout << " Please select the amount of chips you would like to bet: " << endl;
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		cin >> valid;
		if ((valid.find_first_not_of("0123456789") == string::npos) == true) {
			*pbet_amount = stoi(valid);//converts valid into a int named bet_amount
			ss >> *pbet_amount;
			if (*pbet_amount > *ptotal_chips) {//when bet amount equals is more than your total
				system("CLS");
				Sleep(300);
				SetConsoleTextAttribute(tc, 14);
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				SetConsoleTextAttribute(tc, 15);
				cout << " You don't have enough chips for that, try again." << endl;
				Sleep(300);
				SetConsoleTextAttribute(tc, 14);
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				SetConsoleTextAttribute(tc, 15);
				Sleep(300);
			}
			else if (*pbet_amount < 1) {//when bet amount equals 0 or less
				system("CLS");
				Sleep(300);
				SetConsoleTextAttribute(tc, 14);
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				SetConsoleTextAttribute(tc, 15);
				Sleep(300);
				cout << " You can't bet 0 chips, try again." << endl;
				SetConsoleTextAttribute(tc, 14);
				Sleep(300);
				SetConsoleTextAttribute(tc, 14);
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				SetConsoleTextAttribute(tc, 15);
			}
			else if (*pbet_amount != 0 and *pbet_amount < *ptotal_chips) { // when the bet amount is not 0 and the bet amount is less than total (valid)
				bet_check = true;
			}
			else if (*pbet_amount == *ptotal_chips) { // when the bet amount is the same as total (valid)
				bet_check = true;
			}
			else {
				system("CLS");//not an int
				Sleep(300);
				SetConsoleTextAttribute(tc, 14);
				cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				SetConsoleTextAttribute(tc, 15);
				Sleep(300);
				cout << " The value " << valid << " is not a valid integer. Try again. " << endl;
				Sleep(300);
				SetConsoleTextAttribute(tc, 14);
				cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
				SetConsoleTextAttribute(tc, 15);
			}
		}
		else {
			system("CLS");//not an int
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			SetConsoleTextAttribute(tc, 15);
			Sleep(300);
			cout << " The value " << valid << " is not a valid integer. Try again. " << endl;
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			SetConsoleTextAttribute(tc, 15);
		}
	}
	system("CLS");
	Betting();
}

void Betting() {//number generation and win/lose detection
	SetConsoleTextAttribute(tc, 14);
	Sleep(300);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	SetConsoleTextAttribute(tc, 15);
	Sleep(300);
	cout << " You are betting ";
	SetConsoleTextAttribute(tc, 2);
	cout << *pbet_amount;
	SetConsoleTextAttribute(tc, 15);
	cout << " chips" << endl << endl;
	Sleep(300);
	cout << " Now activating slot machine! Good luck" << endl;
	Sleep(300);
	SetConsoleTextAttribute(tc, 14);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	SetConsoleTextAttribute(tc, 15);
	Sleep(300);
	cout << ".";
	Sleep(300);
	cout << ".";
	Sleep(300);
	cout << "." << endl;
	srand(time(NULL));
	int iran1 = rand();//generating 3 random numbers which are seeded to the users time
	int iran2 = rand();
	int iran3 = rand();
	n1 = iran1 % 6 + 2;
	n2 = iran2 % 6 + 2;
	n3 = iran3 % 6 + 2;
	Sleep(300);
	cout << n1;
	Sleep(300);
	cout << "  " << n2;
	Sleep(300);
	cout << "  " << n3 << endl;
	if (n1 == n2 and n1 == n3) { //Triples
		if (n1 == 7) {
			*pwon_amount = *pbet_amount * 10;//calc the chips
			total_chips = total_chips + *pwon_amount;//gives chips
			SetConsoleTextAttribute(tc, 2);
			SetConsoleTextAttribute(tc, 14);
			Sleep(300);
			cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			SetConsoleTextAttribute(tc, 15);
			Sleep(300);
			cout << " Congratulations! You got triple 7! you won " << *pwon_amount << "!" << endl;//you won message
			SetConsoleTextAttribute(tc, 15);
			Sleep(300);
			cout << " Your total is now: ";
			SetConsoleTextAttribute(tc, 2);
			cout << *ptotal_chips << endl;
			SetConsoleTextAttribute(tc, 15);
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			SetConsoleTextAttribute(tc, 15);
		}
		else {
			*pwon_amount = *pbet_amount * 5;
			total_chips = total_chips + *pwon_amount;
			SetConsoleTextAttribute(tc, 14);
			Sleep(300);
			cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			SetConsoleTextAttribute(tc, 15);
			SetConsoleTextAttribute(tc, 2);
			Sleep(300);
			cout << " Congratulations! You got triple! " << n1 << " you won " << won_amount << "!" << endl;
			SetConsoleTextAttribute(tc, 15);
			Sleep(300);
			cout << " Your total is now: ";
			SetConsoleTextAttribute(tc, 2);
			cout << *ptotal_chips << endl;
			SetConsoleTextAttribute(tc, 15);
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			SetConsoleTextAttribute(tc, 15);
		}
	}
	else if (n1 == n2 and n1 != n3) { //Doubles
		*pwon_amount = *pbet_amount * 3;
		total_chips = total_chips + *pwon_amount;
		SetConsoleTextAttribute(tc, 14);
		Sleep(300);
		cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		SetConsoleTextAttribute(tc, 2);
		Sleep(300);
		cout << " Congratulations! You got a double! you won " << *pwon_amount << "!" << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		cout << " Your total is now: ";
		SetConsoleTextAttribute(tc, 2);
		cout << *ptotal_chips << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
	}
	else if (n1 == n3 and n1 != n2) { //Doubles
		*pwon_amount = *pbet_amount * 3;
		total_chips = total_chips + *pwon_amount;
		SetConsoleTextAttribute(tc, 14);
		Sleep(300);
		cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		SetConsoleTextAttribute(tc, 2);
		Sleep(300);
		cout << " Congratulations! You got a double! you won " << *pwon_amount << "!" << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		cout << " Your total is now: ";
		SetConsoleTextAttribute(tc, 2);
		cout << *ptotal_chips << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
	}
	else if (n2 == n3 and n2 != n1) { //Doubles
		*pwon_amount = *pbet_amount * 3;
		total_chips = total_chips + *pwon_amount;
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		SetConsoleTextAttribute(tc, 2);
		Sleep(300);
		cout << " Congratulations! You got a double! you won " << *pwon_amount << "!" << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		cout << " Your total is now: ";
		SetConsoleTextAttribute(tc, 2);
		cout << *ptotal_chips << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
	}
	else {
		Sleep(300);
		SetConsoleTextAttribute(tc, 4); //Not a win
		SetConsoleTextAttribute(tc, 14);
		cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		cout << " Unlucky, you didn't win this time" << endl;
		total_chips = total_chips - *pbet_amount;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		cout << " Your total is now: ";
		SetConsoleTextAttribute(tc, 2);
		cout << *ptotal_chips << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
	}
	if (*ptotal_chips == 0) {
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		SetConsoleTextAttribute(tc, 4);
		cout << " You have run out of chips!" << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
		ChipsCheck();
	}
}
void ChipsCheck() {//givese u to option to continue or end game
	Sleep(300);
	SetConsoleTextAttribute(tc, 14);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	SetConsoleTextAttribute(tc, 15);
	Sleep(300);
	cout << " 1) ";
	cout << "Be given 2000 chips to continue playing" << endl;
	Sleep(300);
	cout << " 2) ";
	cout << "Exit Game" << endl << endl;
	Sleep(300);
	cout << " Please select an option by inputting an integer from 1-2: " << endl;
	Sleep(300);
	SetConsoleTextAttribute(tc, 14);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	SetConsoleTextAttribute(tc, 15);
	cin >> retry;
	if ((retry.find_first_not_of("0123456789") == string::npos) == true) {
		if (retry == "1") { //gives 2000 chips
			*ptotal_chips = *ptotal_chips + 2000;
		}
		else if (retry == "2") { // quits game
			Quit();
		}
		else {
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
			SetConsoleTextAttribute(tc, 15);
			Sleep(300);
			cout << " The value " << retry << " is not in the range of 1-3. Try again. " << endl;
			Sleep(300);
			SetConsoleTextAttribute(tc, 14);
			cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			SetConsoleTextAttribute(tc, 15);
			ChipsCheck();
		}
	}
	else {
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		SetConsoleTextAttribute(tc, 15);
		Sleep(300);
		cout << " The value " << retry << " is not a valid integer. Try again. " << endl;
		Sleep(300);
		SetConsoleTextAttribute(tc, 14);
		cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		SetConsoleTextAttribute(tc, 15);
		ChipsCheck();
	}
}
void Quit() {
	system("CLS");
	SetConsoleTextAttribute(tc, 14);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	SetConsoleTextAttribute(tc, 15);
	Sleep(300);
	cout << " Thanks for playing!" << endl;
	Sleep(300);
	cout << " Exitting Game..." << endl;
	Sleep(300);
	SetConsoleTextAttribute(tc, 14);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	SetConsoleTextAttribute(tc, 15);
	return;
}
void Credits() {
	SetConsoleTextAttribute(tc, 14);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	SetConsoleTextAttribute(tc, 15);
	Sleep(300);
	cout << " Bachelor of Software Engineering" << endl;
	Sleep(300);
	cout << " Media Design School" << endl;
	Sleep(300);
	cout << " Auckland" << endl;
	Sleep(300);
	cout << " New Zealand" << endl;
	Sleep(300);
	cout << " (c)2022 Media Design School" << endl;
	Sleep(300);
	cout << " File Name : SlotMachine" << endl;
	Sleep(300);
	cout << " Description : Main file which includes a slot machine game." << endl;
	Sleep(300);
	cout << " Author : Maxwell Presley" << endl;
	Sleep(300);
	cout << " Mail : Maxwell.Presley@mds.ac.nz" << endl;
	Sleep(300);
	SetConsoleTextAttribute(tc, 14);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	SetConsoleTextAttribute(tc, 15);
}