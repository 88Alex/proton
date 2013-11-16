#ifndef ERROR_HPP_INCLUDED
#define ERROR_HPP_INCLUDED

using namespace std;

class CmdError_t
{
	private:
	
	int lineno;
	string message;
	
	public:
	
	CmdError_t(int line, string msg);
	
	string toString();
};

#endif
