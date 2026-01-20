#include <gtkmm/window.h>
#include "../widgets/calendar/calendar.h"

class MainWindow : public Gtk::Window {
    public:
    MainWindow();
    virtual ~MainWindow();

    protected:
    Calendar calendar;
};