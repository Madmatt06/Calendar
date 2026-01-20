#ifndef CALENDAR_HPP
#define CALENDAR_HPP

#include <gtkmm/box.h>
#include <gtkmm/orientable.h>
#include <gtkmm/grid.h>
#include <vector>
#include "calendarDay.hpp"

class Calendar : public Gtk::Grid
{

public:
  Calendar();
  ~Calendar() override;

protected:
  //Member widgets:
  std::vector<CalendarDay> days;
};

#endif