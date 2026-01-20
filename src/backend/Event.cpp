#include "Event.hpp"

Event::Event() : Event("", "", std::chrono::system_clock::now(), std::chrono::system_clock::now() + std::chrono::seconds(60)) {

}
Event::Event(std::string name, std::string desc, std::chrono::system_clock::time_point start, std::chrono::system_clock::time_point end) {
    this->name = name;
    this->desc = desc;
    this->start = start;
    this->end = end;
}
