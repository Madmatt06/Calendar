#include "calendarDay.hpp"

CalendarDay::CalendarDay(int date, std::vector<Event> events) : Gtk::Frame(), container(Gtk::Orientation::VERTICAL, 2), dateLabel(std::to_string(date))
{
    dateLabel.set_xalign(0.0f);
    dateLabel.set_hexpand(true);
    dateLabel.set_vexpand(false);
    container.append(dateLabel);
	for(int index = 0; index < events.size(); index++) {
            std::unique_ptr<Gtk::Label> eventLabel = std::make_unique<Gtk::Label>(events[index].getName());
            eventLabel->set_justify(Gtk::Justification::CENTER);
            container.append(*eventLabel);
            eventLabels.push_back(std::move(eventLabel));

	}
    set_hexpand(true);
    set_vexpand(true);
    set_child(container);
};
CalendarDay::~CalendarDay() {
    
}

