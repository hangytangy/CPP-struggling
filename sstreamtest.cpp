/*~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
For people who can read better than me: https://en.cppreference.com/w/cpp/header/sstream.html
For this we will just be using stringstream, both in and output


string stream is an object that (see line 20) is stored in a string buffer. "test" is a pointer to some data in the heap that holds a bunch of info.This is why you cant just like print it out.

~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-*/
#include <iostream>
#include <sstream>

using namespace std;
int main(){


//setting up an sstream
string name = "Joe";
stringstream test;
int num = 2;
test << "Hi " << name << ", Nice to meet you! I hear that you are " << num << " years old!"; // you can combine things to the string

// cout << test;
// this doesnt work cause its not technically a string or something.

string test2 = test.str(); //.str() is a string operation that "gets or sets the contents of underlying string device object" meaning that it reads all the string text stuff in the string.
// IF you do str("text") it will set that do the sstring

cout << test2 <<endl;

//                      For outputting you can do this

test.str("joes 5 dogs 9.339"); //setting the stream string

string joe;
int hey;
string perro;
float rando;

test >> joe >> hey >> perro >> rando;
// Watch this tech

cout << joe << hey << perro << rando << endl;

// prints it all out. Neat right?  you don't have to do all that gimmicky stuff to find things in strings. lest you want to write a for loop for a char array

//It also can do some error handling
bool rando2; //Note how rando2 is a string but in line 30 the last thing is a float
if(test >> joe >> hey >> perro >> rando2){

cout << "does work!";
}
else{

    cout << "doesnt work"; //Prints this because, hey, it doesnt work.
}


    return 0;
}