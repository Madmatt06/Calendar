#ifndef EVENT_HPP
#define EVENT_HPP

#include <chrono>
#include <string>

class Event {
    private:
    std::chrono::system_clock::time_point start;
    std::chrono::system_clock::time_point end;
    std::string name;
    std::string desc;
    public:
    Event();
    Event(std::string name, std::string desc, std::chrono::system_clock::time_point start, std::chrono::system_clock::time_point end);
    std::string getName() const {return name;}
    std::string getDesc() const {return desc;}
    std::chrono::system_clock::time_point getStart() const {return start;}
    std::chrono::system_clock::time_point getEnd() const {return end;}

};
#endif