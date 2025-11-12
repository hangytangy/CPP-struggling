/*

For people who can read better than me: https://cppreference.com/w/cpp/header/fstream.html && https://www.w3schools.com/cpp/cpp_ref_fstream.asp


<fstream> is a way to read and write into files on your computer. 
std::fstream means its able to read and write
std::ifstream is just write
std::ofstream just read.

What are the other ones? 
Read the thing idk bruh 
*/

// This is a basic script to read and write on a text file.
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    
fstream file("test.txt", file.in | file.out | file.trunc); //creates the text file in fstream form as said earlier. 
//file is the name of the thing, first bit is name of the file you create, second bit are like specifiers saying what 'rules' are allowed for that file you made. You need at least file.out and file.trunc(?) check link above for more specifiers.
string text = "hellothere";

file << text; //inputs the string into the file
 

file.seekg(0); // IMPORTANT!!!!IMPORTANT!!!! THE WAY READING WORKS IS THAT THERES LIKE A CURSOR HIGHLIGHTING STUFF. YOU NEED TO SET THE CURSER (with seekg();) BACK TO 0 IN THE FILE SO YOU CAN ACTUALLY READ THE WHOLE FILE AFTER

string read;

getline(file, read); //getline reads the file

cout << read; //boom it works



scanf("%d");
return 0;
}
