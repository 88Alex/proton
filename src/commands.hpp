#ifndef COMMANDS_HPP_INCLUDED
#define COMMANDS_HPP_INCLUDED

#include <map>
#include <iostream>
#include "../fio.hpp"
#include "cmdhelpers.hpp"

int ls(char[] optFlags,
	string[] longOptFlags,
	map<string, string> flagValues,
	string[] args,
	iostream output,
	iostream input);

int cd(char[] optFlags,
	string[] longOptFlags,
	map<string, string> flagValues,
	string[] args,
	iostream output,
	iostream input);

int mkdir(char[] optFlats,
	string[] longOptFlags,
	map<string, string> flagValues,
	string[] args,
	iostream output,
	iostream input);

#endif
