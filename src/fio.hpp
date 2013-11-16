#ifndef FIO_HPP_INCLUDED
#define FIO_HPP_INCLUDED

#include <string>
using namespace std;

class FIO
{
	private:
	
	static string currdir;
	
	public:
	
	/*
	Get the current directory.
	*/
	static string currDir();
	
	/*
	Change into a directory.
	Return: true if successful, false if otherwise.
	*/
	static int cd(string dir);
	
	/*
	Return all files in current directory.
	Arrays cannot be returned as parameters in C++
	So we have to do it this slightly awkward way.
	*/
	static string* listFiles();
};

#endif
