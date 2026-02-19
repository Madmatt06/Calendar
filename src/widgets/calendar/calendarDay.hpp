#ifndef CALENDAR_DAY_HPP
#define CALENDAR_DAY_HPP

#include <gtkmm/frame.h>
#include <gtkmm/aspectframe.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/label.h>
#include <vector>
#include <memory>
#include "../../backend/Event.hpp"

class CalendarDay : public Gtk::Frame
{

public:
  CalendarDay(int date = 0, std::vector<Event> events = {});
  ~CalendarDay() override;

protected:
  //Member widgets:
  Gtk::Box container;
  Gtk::Label dateLabel;
  std::vector<std::unique_ptr<Gtk::Label>> eventLabels;
};

#endif
