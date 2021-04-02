#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include <math.h>
#include <ctype.h>

GtkWidget    *window;
GtkWidget    *fixed1;

GtkWidget    *btn_next;
GtkWidget    *btn_flip;
GtkWidget    *btn_previous;
GtkWidget    *radio_known;
GtkWidget    *radio_unknown;

GtkWidget    *lbl1;
GtkWidget    *builder;

int main(int argc,
          char *argv[])
{

  gtk_init(&argc, &argv); //init GtkWidget

  builder = gtk_builder_new_from_file("flashcard.glade");
  window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_builder_connect_signals(builder, NULL);

  fixed1 = GTK_WIDGET(gtk_builder_get_object(builder, "fixed1"));

  btn_next = GTK_WIDGET(gtk_builder_get_object(builder, "btn_next"));
  btn_flip = GTK_WIDGET(gtk_builder_get_object(builder, "btn_flip"));
  btn_previous = GTK_WIDGET(gtk_builder_get_object(builder, "btn_previous"));
  radio_known = GTK_WIDGET(gtk_builder_get_object(builder, "radio_known"));
  radio_unknown = GTK_WIDGET(gtk_builder_get_object(builder, "radio_unknown"));

  lbl1 = GTK_WIDGET(gtk_builder_get_object(builder, "lbl1"));

  gtk_widget_show(window);
  gtk_main();

  return EXIT_SUCCESS;
}

void on_btn_next_clicked(GtkButton *b)
{
  gtk_label_set_text(GTK_LABEL(lbl1), (const gchar*) "Hello World");
}

void on_btn_previous_clicked(GtkButton *b)
{
  gtk_label_set_text(GTK_LABEL(lbl1), (const gchar*) "Goodbye World");
}

void on_btn_flip_clicked(GtkButton *b)
{
  gtk_label_set_text(GTK_LABEL(lbl1), (const gchar*) "Flipped World");
}

void on_radio_known_toggled(GtkRadioButton *b)
{
  gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
}
