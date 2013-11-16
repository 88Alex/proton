#include "command.hpp"
#include "fio.hpp"
#include "error.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	cout << "Proton 1.0-Beta" << endl << endl;
	while(true)
	{
		cout << FIO::currDir() << "$ ";
		string cmdInput, temp;
		cin >> cmdInput;
		while(!Command_t::isComplete(cmdInput))
		{
			cout << "> ";
			cin >> temp;
			cmdInput = cmdInput + "\n" + temp;
		}
		Command_t cmd = Command_t(cmdInput);
		try
		{
			cmd.execute();
		}
		catch(CmdError_t e)
		{
			cout << "Error in command: " << endl;
			cout << e.toString();
		}
	}
}
