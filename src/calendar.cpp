#include "calendar.h"

Calendar::Calendar()
: placeholder_text("Calendar Window")   // creates a new button with label "Hello World".
{
  // Sets the margin around the button.
  placeholder_text.set_margin(50);

  // This packs the button into the Window (a container).
  set_child(placeholder_text);
}

Calendar::~Calendar()
{
}