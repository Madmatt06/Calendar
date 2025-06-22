#ifndef CALENDAR_H
#define CALENDAR_H

#include <gtkmm/label.h>
#include <gtkmm/window.h>

class Calendar : public Gtk::Window
{

public:
  Calendar();
  ~Calendar() override;

protected:
  //Member widgets:
  Gtk::Label placeholder_text;
};

#endif