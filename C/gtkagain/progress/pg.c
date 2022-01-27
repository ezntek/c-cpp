#include <gtk/gtk.h>

static void
app_activate(GtkApplication *app,
             gpointer *user_data)
{
    GtkWidget *w;
    GtkWidget *label;

    w = gtk_application_window_new(GTK_APPLICATION(app));
    gtk_window_set_title(GTK_WINDOW(w), "theTitle");
    gtk_window_set_default_size(GTK_WINDOW(w), 500, 500);

    label = gtk_label_new("Hello...");
    gtk_window_set_child (GTK_WINDOW(w), label);
    gtk_widget_show(w);

}

int 
main(int    argc,
     char **argv)
{
    GtkApplication *app;
    int stat;

    app = gtk_application_new ("com.xflymusic.gtkapp", G_APPLICATION_FLAGS_NONE);
    g_signal_connect (app, "activate", G_CALLBACK(app_activate), NULL);
    stat = g_application_run (G_APPLICATION (app), argc, argv);
    g_object_unref (app);

    return stat;
}