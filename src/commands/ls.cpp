#include "ls.hpp"

int ls(char[] optionFlags, string[] longOptionFlags, string[] args, iostream output)
{
	if(optionSet(optionFlags, "l") || longOptionSet(longOptionFlags, "long"))
	{
		// long format- one on each line
	}
	else
	{
		// short format
	}
}
