#include <fstream>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void a_to_c() {
	string line;
        fstream fileStream( "a.txt", ios::in );
        if( fileStream.is_open() ) {
                cout << "File Is Opened" << endl;
                while ( getline ( fileStream, line ) ) {
                        cout << line << endl;
                        fstream fileStream;
                        fileStream.open( "c.txt", ios::out );
                        if( fileStream.is_open() ) {
                                cout << "File is open " << endl;
                                fileStream << line << endl;
                                fileStream.close();
                        }
                }
                fileStream.close();
        }

}

void b_to_a() {
	string line1;
        fstream fileStream( "b.txt", ios::in );
        if( fileStream.is_open() ) {
                cout << "File Is Opened" << endl;
                while ( getline ( fileStream, line1 ) ) {
                        cout << line1 << endl;
                        fstream fileStream;
                        fileStream.open( "a.txt", ios::out );
                        if( fileStream.is_open() ) {
                                cout << "File is open " << endl;
                                fileStream << line1 << endl;
                                fileStream.close();
                        }
                }
                fileStream.close();
        }
}

void c_to_b() {
	string line2;
        fstream fileStream( "c.txt", ios::in );
        if( fileStream.is_open() ) {
                cout << "File Is Opened" << endl;
                while ( getline ( fileStream, line2 ) ) {
                        cout << line2 << endl;
                        fstream fileStream;
                        fileStream.open( "b.txt", ios::out );
                        if( fileStream.is_open() ) {
                                cout << "File is open " << endl;
                                fileStream << line2 << endl;
                                fileStream.close();
                        }
                }
                fileStream.close();
        }
}

int main () {
	a_to_c();
	b_to_a();
	c_to_b();
	return 0;
}
