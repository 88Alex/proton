#ifndef COMMAND_HPP_INCLUDED
#define COMMAND_HPP_INCLUDED
#include <string>
using namespace std;

class Command_t
{
	private:
	
	string command;
	
	public:
	
	/*
	Executes the command.
	*/
	int execute();
	
	/*
	Constructor.
	string command- the string representation of this command
	*/
	Command_t(string command);
	
	/*
	Checks whether a string is a complete command.
	string command- the string to be tested.
	*/
	static bool isComplete(string command);
};

#endif
