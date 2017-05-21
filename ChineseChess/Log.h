#pragma once

#include <string>
#include <fstream>

enum LOGLEVEL
{
    ERROR,
    WARN,
    INFO,
    DEBUG
};

class CLog
{
private:
    std::ofstream logFile;
    int m_iLogLevel;

public:
    CLog(void);
    CLog(const char* strFilename);
    ~CLog(void);

    void setLogLevel(int iLogLevel);
    void openLogFile(const char* strFilename);
    void logDebug(const char* strLog);
    void logInfo(const char* strLog);
    void logWarn(const char* strLog);
    void logError(const char* strLog);

};
