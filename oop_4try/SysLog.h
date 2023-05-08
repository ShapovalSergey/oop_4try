#pragma once
#include "Header.h"
class SysLog
{
private:
	string info;
	static SysLog* instance;
protected:
	SysLog(string data) { info = data; }
	SysLog() { info = "System log"; }
public:
	static SysLog* Instance(string data);
	static SysLog* Instance();
	void run() { printf("Data - %s\n", info.c_str()); }
	string getData() { return info; }

};

