#include "calendarDay.h"

CalendarDay::CalendarDay(int date, std::string* events, int eventCount) : Gtk::Frame(), container(Gtk::Orientation::VERTICAL, 2), dateLabel(std::to_string(date)), exampleEvent("Some event")
{
    dateLabel.set_xalign(0.0f);
    dateLabel.set_hexpand(true);
    dateLabel.set_vexpand(false);
    container.append(dateLabel);
    if(eventCount > 0 && events != nullptr) {
	for(int index = 0; index < eventCount; index++) {
            Gtk::Label eventLabel(events[index]);
            container.append(eventLabel);
	}
    }
    exampleEvent.set_justify(Gtk::Justification::CENTER);
    container.append(exampleEvent);
    set_hexpand(true);
    set_vexpand(true);
    set_child(container);
};
CalendarDay::~CalendarDay() {
    
}

/*void CalendarDay::measure_vfunc(Gtk::Orientation orient,int for_size,int& minimum,int& natural,int& min_baseline,int& nat_baseline) const {
    if (for_size < 0) for_size = 0;   // first pass
        minimum = natural = for_size;     // width == height
        min_baseline = nat_baseline = -1; // we don’t use baselines
}
*/
