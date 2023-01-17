// user gives input to program : data flows front keyboard or mouse to pc 
// computer gives output on screen 
// sequence of bytes that comes from or goes  into computer is known as stream

// flow of streams between input devices like mouse and keyboard and program : 
// console i/o operation

// flow of streams between program and files : disk i/o operations

// istream , iostream , ostream : used for console i/o operations
// ifstream, ofstream, fstream : used for disk i/o operations

// ios class : 
// 1. base class for all classes in hierchy
// 2. contains essential methods for file handling

// istream class : 
// 1. handles input streams
// 2. extraction operator is overloaded in class to take input
// 3. Functions for input : get(), getline(), read()

// ostream class : 
// 1. Handles output streams
// 2. insertion operator is overloaded in this class to display output
// 3. Functions to write : put(), write()

// streambuf
// contains pointer that points to buffer which is used for managing input output streams

// fstreambase :
// 1. provides operations common to file streams
// 2. base class for fstream, ofstream, ifstream

// ifstream : 
// 1. provides input operations
// 2. contains open function with default "input" mode
// 3. Inherits get(), getline(), seekg() from istream

// ofstream : 
// 1. provides output operations 
// 2. contains open function with default "output" mode
// 3. Inherits put(), write(), seekp() function form ostream

// fstream
// 1. Manages both input and output operations
// 2. inherits all functions form ostream and istream through iostream

// files are dealt using fstream, ofstream, ifstream classes -> present in fstream header file 

// file opening mode
// 1. in -> opened for input operation ie. take input form file
// 2. out -> opened for output operations ie. output something on file
// 3. binary -> open file in binay mode rather than txt mode
// 4. ate -> at end -> output position starts at end of file 
// 5. app -> output operations start at end of file ie. all content appended in file
// 6. trunc -> file is truncated ie. all content existed in file before opening it is discarded

// default opening modes
// if file is opened using objects of 
// fstream : ios::in | ios::out
// ifstream : ios::in
// ofstream : ios::out




