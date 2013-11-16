#include "fio.hpp"

string Fio::currDir()
{
	return currdir;
}
int Fio::cd(string dir)
{
	return 0; // NOT IMPLEMENTED YET
	if(dir == "..")
	{
		// go one level up
	}
	else if(dir == "/")
	{
		currdir = "/";
	}
	else if(dir == "~")
	{
		currdir = "~";
	}
	else
	{
		if(!directoryExists(dir))
		{
			return 1;
		}
		// append a / if one is not already there
		if(currdir.at(currdir.length() - 1) != "/") currdir = currdir + "/";
		currdir = currdir + dir;
	}
	return 0;
}

string* Fio::listFiles()
{
	//
}
