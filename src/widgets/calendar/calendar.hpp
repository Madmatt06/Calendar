#ifndef CALENDAR_HPP
#define CALENDAR_HPP

#include <gtkmm/box.h>
#include <gtkmm/orientable.h>
#include <gtkmm/grid.h>
#include <vector>
#include <memory>
#include <chrono>
#include "calendarDay.hpp"
#include "../../backend/Event.hpp"

class Calendar : public Gtk::Grid
{

public:
  Calendar();
  ~Calendar() override;

protected:
  //Member widgets:
  std::vector<std::unique_ptr<CalendarDay>> days;
};

#endif