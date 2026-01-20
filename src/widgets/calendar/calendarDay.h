#ifndef CALENDAR_DAY_H
#define CALENDAR_DAY_H

#include <gtkmm/frame.h>
#include <gtkmm/aspectframe.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/label.h>
#include <vector>

class CalendarDay : public Gtk::Frame
{

public:
  CalendarDay(int date = 0, std::vector<Events> events = {});
  ~CalendarDay() override;
  //void measure_vfunc(Gtk::Orientation orient,int for_size,int& minimum,int& natural,int& min_baseline,int& nat_baseline) const override;

protected:
  //Member widgets:
  Gtk::Box container;
  Gtk::Label dateLabel;
};

#endif
