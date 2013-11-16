#include "error.hpp"

CmdError_t::CmdError_t(int line, string msg)
{
	lineno = line;
	message = msg;
}

CmdError_t::toString()
{
	return string("Error in line ") + lineno + " of command:\n" + message;
}
