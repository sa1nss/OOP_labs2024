#include <iostream>
#include "rhombus.h"
#include "logger.h"

using namespace std;

int main() {
    Logger* logger = Logger::getInstance();

    Rhombus r1("Rhombus1", 5.0, 60.0);
    logger->addRecord(r1);

    Rhombus r2("Rhombus2", 10.0, 45.0);
    logger->addRecord(r2);

    logger->saveLog();

    cout << "Log saved successfully." << endl;

    return 0;
}
