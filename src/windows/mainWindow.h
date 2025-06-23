#include <gtkmm/window.h>
#include "../widgets/calendar/modules/calendar.h"

class MainWindow : public Gtk::Window {
    public:
    MainWindow();
    virtual ~MainWindow();

    protected:
    Calendar calendar;
};