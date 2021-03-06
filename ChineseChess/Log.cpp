#include "stdafx.h"
//#include "vld.h"

#include "Log.h"

#include <ctime>
#include <iostream>
#include <cstdio> 
#include <string>

#define MAX_BUF_SIZE          2048
#define NORMAL_BUF_SIZE       128

std::string getLocalNowTime()
{
    time_t nowtime = time(0);
    struct tm _tm;
    localtime_s(&_tm, &nowtime);
    char szBuf[NORMAL_BUF_SIZE+1] = {0}; 
    strftime(szBuf, NORMAL_BUF_SIZE, "[%Y-%m-%d %X]", &_tm); 
    return szBuf;
}

CLog::CLog(void):m_iLogLevel(INFO)
{
}

CLog::CLog(const char* strFilename):logFile(strFilename)
{
}

CLog::~CLog(void)
{
    //ofstream的析构函数会自动关闭并释放文件
    //logFile.close();
}

void CLog::setLogLevel(int iLogLevel)
{
    m_iLogLevel = iLogLevel;
}

void CLog::openLogFile(const char* strFilename)
{
    logFile.open(strFilename);
}

void CLog::logDebug(const char* strLog)
{
    if(logFile && DEBUG <= m_iLogLevel)
    {
        logFile<<"[DEBUG]"<<getLocalNowTime()<<strLog<<std::endl;
    }
}

void CLog::logInfo(const char* strLog)
{
    if(logFile && INFO <= m_iLogLevel)
    {
       logFile<<"[INFO]"<<getLocalNowTime()<<strLog<<std::endl;
    }
}

void CLog::logWarn(const char* strLog)
{
    if(logFile && WARN <= m_iLogLevel)
    {
        logFile<<"[WARN]"<<getLocalNowTime()<<strLog<<std::endl;
    }
}

void CLog::logError(const char* strLog)
{
    if(logFile && ERROR <= m_iLogLevel)
    {
        logFile<<"[ERROR]"<<getLocalNowTime()<<strLog<<std::endl;
    }
}

