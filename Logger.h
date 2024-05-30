#ifndef LOGGER_H
#define LOGGER_H

#include <vector>
#include <string>
#include "rhombus.h"

using namespace std;

class Logger 
{
private:
    static Logger* instance;
    vector<string> log;
    Logger() {}

    string getCurrentTime();

public:
    static Logger* getInstance();
    void addRecord(const Rhombus& rhombus);
    void saveLog();
}
