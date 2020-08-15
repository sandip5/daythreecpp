#include <iostream>
#include <fstream>

using namespace std;

void read();

int main ()
{
	
	fstream fileStream;
	fileStream.open("a.txt", ios::out | ios::app);
	if(fileStream.is_open()) {
		cout << "File is open " << endl;
		fileStream << "Something" << endl;
		fileStream << "My Name Is Sandip" << endl;
		cout << "writePointerPos: " << fileStream.tellp() << endl;
		fileStream.close();
	}
	read();
}
void read() {
	string line;
	fstream fileStream("a.txt", ios::in);
	if(fileStream.is_open()) {
		cout << "File Is Opened" << endl;
		while ( getline (fileStream, line) ) {
			cout << line << endl;
			cout << "readPointerPos: " << fileStream.tellg() << endl;
		}
		cout << "IS EOF: " << fileStream.eof() << endl;
		fileStream.close();
	}
}
