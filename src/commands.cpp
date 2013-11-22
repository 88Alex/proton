#include "commands.hpp"

int ls(char[] optionFlags,
	string[] longOptionFlags,
	map<string, string> flagValues,
	string[] args,
	iostream output,
	iostream input)
{
	if(optionSet(optionFlags, "l"))
	{
		// long format- one on each line
	}
	else
	{
		// short format
	}
}
