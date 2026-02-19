#include "calendar.hpp"

Calendar::Calendar()
{
  int day = 1;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 7; j++) {
      
      std::unique_ptr<CalendarDay> dayObject = std::make_unique<CalendarDay>(day, std::vector<Event>{Event("Name", "Description", std::chrono::system_clock::now(), std::chrono::system_clock::now() + std::chrono::seconds(60)), Event("Name2", "Description2", std::chrono::system_clock::now(), std::chrono::system_clock::now() + std::chrono::seconds(60))});
      attach(*dayObject, j, i);
      days.push_back(std::move(dayObject));
      day++;
    }
  }
  set_margin(10);
}

Calendar::~Calendar()
{
}