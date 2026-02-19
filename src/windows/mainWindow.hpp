#include <gtkmm/window.h>
#include "../widgets/calendar/calendar.hpp"

class MainWindow : public Gtk::Window {
    public:
    MainWindow();
    virtual ~MainWindow();

    protected:
    Calendar calendar;
};