//prototype
void updateFile(char[][COLS]);
void updateFile(char seats[][COLS]) {
	//writes the seat array to a file
	ofstream outFile;
	//change file name if needed
	outFile.open("seatAvailability2.txt");
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLS; col++) {
			outFile << seats[row][col];
		}
		outFile << "\n";
	}
	outFile.close();
}
