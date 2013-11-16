#include "command.h"

Command_t::execute()
{
	//
}

Command_t::Command_t(string command)
{
	this.command = command;
}

/*
Helper routine for Command_t::isComplete().
Checks whether a string contains control flow expressions.
*/
bool hasControlFlow(string command)
{
	string[] controlFlow = { "if", "else", "for", "foreach", "while" };
	// TODO might add more to the list
	for(int i = 0; i < 5; i++) // 5 is the length of controlFlow[]
	{
		if(command.find(controlFlow[i]) != string::npos)
		{
			return true;
		}
	}
	return false;
}

Command_t::isComplete(string command)
{
	if(command.at(command.length()) == "\\")
	{
		// the string ends with \ so we know it's incomplete
		return false;
	}
	if(!hasControlFlow(command))
	{
		// it doesn't have control flow and it doesn't end with \
		// so it is complete
		return true;
	}
}
