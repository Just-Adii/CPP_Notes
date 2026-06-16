#include <iostream>
#include <ctime>
class Log
{
    public:
    enum Level
    {
        DEBUG,INFO,WARN,ERROR,FATAL
    };
    private:
    Level m_logLevel=DEBUG;// "m_" is a convention to stating variable is member variable(ie defined under class)
                   // for ease in differentiating local and class variable.(just organises code)
    public:
    void setLevel(Level level)
    {
        m_logLevel=level;
    }
    void Debug(const char* message)
    {
        if(m_logLevel>=DEBUG)
        std::cout<<"[DEBUG]:"<<message<<std::endl;
    }
    void Info(const char* message)
    {
        if(m_logLevel>=INFO)
        std::cout<<"[Info]:"<<message<<std::endl;
    }
    void Warn(const char* message)
    {
        if(m_logLevel>=WARN)
        std::cout<<"[Warning]:"<<message<<std::endl;
    }
    void Error(const char* message)
    {
        if(m_logLevel>=ERROR)
        std::cout<<"[Error]:"<<message<<std::endl;
    }
    void Fatal(const char* message)
    {
        if(m_logLevel>=FATAL)
        std::cout<<"[Fatal]:"<<message<<std::endl;
    }
};

int main()
{
    Log log;
    log.setLevel(Log::DEBUG);
    log.Debug("hello");
        time_t now=time(0);
    char* dt=ctime(&now);
    
    

    return 0;
}