//
//  source.cpp
//  TicketTiger
//
//  Created by David Kislyak on 5/27/19.
//  Copyright © 2019:
//  David Kislyak, Emanuel Stupart, Liumu Ye, Rodney Deacon
//  All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

const int ROWS = 15;
const int COLS = 30;

const string FILE_PATH = "SeatAvailability.txt";

void readSeatFile(char [][COLS]);
void displaySeats(char [][COLS]);

int main() {
    char seats[ROWS][COLS];
    
    readSeatFile(seats);
    displaySeats(seats);
}

void readSeatFile(char seats[][COLS]) {
    //In case file doesn't exist, fill with empty seats
    for (int seatRow = 0; seatRow < ROWS; seatRow++) {
        for (int seatCol = 0; seatCol < COLS; seatCol++) {
            seats[seatRow][seatCol] = '#';
        }
    }

    ifstream myFile(FILE_PATH); //Open File

    for (int seatRow = 0; seatRow < ROWS; seatRow++)
        for (int seatCol = 0; seatCol < COLS; seatCol++)
            myFile >> seats[seatRow][seatCol];

    myFile.close(); //Close File
}

void displaySeats(char seatArray[][COLS]) {
    for (int seatRow = 0; seatRow < ROWS; seatRow++) {
        for (int seatCol = 0; seatCol < COLS; seatCol++) {
            cout << seatArray[seatRow][seatCol];
        }
        cout << endl;
    }
}
