#ifndef CALENDAR_H
#define CALENDAR_H

#include <gtkmm/box.h>
#include <gtkmm/orientable.h>
#include <gtkmm/grid.h>
#include <vector>
#include "calendarDay.h"

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