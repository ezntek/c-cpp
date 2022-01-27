#ifndef GTKMM_EXAMPLE_HELLOWORLD_H
#define GTKMM_EXAMPLE_HELLOWORLD_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class app :public Gtk::Window {
    public:
        app();
        virtual ~app();
    protected:
        // for signal handlers
        void on_button_clicked();

        // member widgets:
        Gtk::Button m_button;
}   

#endif