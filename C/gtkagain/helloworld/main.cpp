#include "app.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[]) {

  auto app = Gtk::Application::create(argc, argv, "com.xflymusic.Gtk.example");

  app Application;

  //Shows the window and returns when it is closed.
  return app->run(Application);
}