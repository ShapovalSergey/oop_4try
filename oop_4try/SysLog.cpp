#include "SysLog.h"

SysLog* SysLog::instance = NULL;

SysLog* SysLog::Instance(string data) {
    if (instance == 0) {
        cout << "new object \n";
        instance = new SysLog(data);
    }
    else cout << "object already exists!\n";
    return instance;
}
SysLog* SysLog::Instance() {
    if (instance == 0) {
        cout << "new object \n";
        instance = new SysLog();
    }
    else cout << "object already exists!\n";
    return instance;
}
