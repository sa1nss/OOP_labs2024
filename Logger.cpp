#include "logger.h"
#include <ctime>
#include <fstream>

using namespace std;

Logger* Logger::instance = nullptr;

Logger* Logger::getInstance() 
{
    if (instance == nullptr) 
    {
        instance = new Logger();
    }
    return instance;
}

string Logger::getCurrentTime() 
{
    time_t now = time(0);
    tm* localtm = localtime(&now);
    char buffer[80];
    strftime(buffer, 80, "%Y.%m.%d %H:%M:%S", localtm);
    return string(buffer);
}

void Logger::addRecord(const Rhombus& rhombus) 
{
    string record = "time: " + getCurrentTime() + " " + Rhombus::class_name +
                    ": name: " + rhombus.name +
                    " side_length: " + to_string(rhombus.side_length) +
                    " angle: " + to_string(rhombus.angle);
    log.push_back(record);
}

void Logger::saveLog() 
{
    ofstream logfile("log_" + getCurrentTime() + ".txt");
    logfile << Rhombus::class_name << ": " << Rhombus::instance_count << " instances" << endl;
    for (const string& record : log) 
    {
        logfile << record << endl;
    }
    logfile.close();
}
