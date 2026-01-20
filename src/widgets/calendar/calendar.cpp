#include "calendar.hpp"

Calendar::Calendar()
{
  int day = 1;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 7; j++) {
      
      CalendarDay dayObject(day);
      attach(dayObject, j, i);
      day++;
    }
  }
  set_margin(10);
}

Calendar::~Calendar()
{
}