/* Application.c generated by valac 0.40.11, the Vala compiler
 * generated from Application.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_SUB_MINDER (sub_minder_get_type ())
#define SUB_MINDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SUB_MINDER, SubMinder))
#define SUB_MINDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SUB_MINDER, SubMinderClass))
#define IS_SUB_MINDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SUB_MINDER))
#define IS_SUB_MINDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SUB_MINDER))
#define SUB_MINDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SUB_MINDER, SubMinderClass))

typedef struct _SubMinder SubMinder;
typedef struct _SubMinderClass SubMinderClass;
typedef struct _SubMinderPrivate SubMinderPrivate;
enum  {
	SUB_MINDER_0_PROPERTY,
	SUB_MINDER_NUM_PROPERTIES
};
static GParamSpec* sub_minder_properties[SUB_MINDER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _SubMinder {
	GtkApplication parent_instance;
	SubMinderPrivate * priv;
};

struct _SubMinderClass {
	GtkApplicationClass parent_class;
};


static gpointer sub_minder_parent_class = NULL;

GType sub_minder_get_type (void) G_GNUC_CONST;
SubMinder* sub_minder_new (void);
SubMinder* sub_minder_construct (GType object_type);
static void sub_minder_real_activate (GApplication* base);
gint sub_minder_main (gchar** args,
                      int args_length1);


SubMinder*
sub_minder_construct (GType object_type)
{
	SubMinder * self = NULL;
#line 4 "/home/jeremy/Documents/subminder/src/Application.vala"
	self = (SubMinder*) g_object_new (object_type, "application-id", "com.github.jeremyvaartjes.subminder", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 3 "/home/jeremy/Documents/subminder/src/Application.vala"
	return self;
#line 61 "Application.c"
}


SubMinder*
sub_minder_new (void)
{
#line 3 "/home/jeremy/Documents/subminder/src/Application.vala"
	return sub_minder_construct (TYPE_SUB_MINDER);
#line 70 "Application.c"
}


static void
sub_minder_real_activate (GApplication* base)
{
	SubMinder * self;
	GtkApplicationWindow* main_window = NULL;
	GtkApplicationWindow* _tmp0_;
#line 10 "/home/jeremy/Documents/subminder/src/Application.vala"
	self = (SubMinder*) base;
#line 11 "/home/jeremy/Documents/subminder/src/Application.vala"
	_tmp0_ = (GtkApplicationWindow*) gtk_application_window_new ((GtkApplication*) self);
#line 11 "/home/jeremy/Documents/subminder/src/Application.vala"
	g_object_ref_sink (_tmp0_);
#line 11 "/home/jeremy/Documents/subminder/src/Application.vala"
	main_window = _tmp0_;
#line 12 "/home/jeremy/Documents/subminder/src/Application.vala"
	g_object_set ((GtkWindow*) main_window, "default-height", 700, NULL);
#line 13 "/home/jeremy/Documents/subminder/src/Application.vala"
	g_object_set ((GtkWindow*) main_window, "default-width", 450, NULL);
#line 14 "/home/jeremy/Documents/subminder/src/Application.vala"
	gtk_window_set_title ((GtkWindow*) main_window, _ ("SubMinder"));
#line 15 "/home/jeremy/Documents/subminder/src/Application.vala"
	gtk_widget_show_all ((GtkWidget*) main_window);
#line 10 "/home/jeremy/Documents/subminder/src/Application.vala"
	_g_object_unref0 (main_window);
#line 98 "Application.c"
}


gint
sub_minder_main (gchar** args,
                 int args_length1)
{
	gint result = 0;
	SubMinder* app = NULL;
	SubMinder* _tmp0_;
#line 19 "/home/jeremy/Documents/subminder/src/Application.vala"
	_tmp0_ = sub_minder_new ();
#line 19 "/home/jeremy/Documents/subminder/src/Application.vala"
	app = _tmp0_;
#line 20 "/home/jeremy/Documents/subminder/src/Application.vala"
	result = g_application_run ((GApplication*) app, args_length1, args);
#line 20 "/home/jeremy/Documents/subminder/src/Application.vala"
	_g_object_unref0 (app);
#line 20 "/home/jeremy/Documents/subminder/src/Application.vala"
	return result;
#line 119 "Application.c"
}


int
main (int argc,
      char ** argv)
{
#line 18 "/home/jeremy/Documents/subminder/src/Application.vala"
	return sub_minder_main (argv, argc);
#line 129 "Application.c"
}


static void
sub_minder_class_init (SubMinderClass * klass)
{
#line 1 "/home/jeremy/Documents/subminder/src/Application.vala"
	sub_minder_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/jeremy/Documents/subminder/src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication *)) sub_minder_real_activate;
#line 140 "Application.c"
}


static void
sub_minder_instance_init (SubMinder * self)
{
}


GType
sub_minder_get_type (void)
{
	static volatile gsize sub_minder_type_id__volatile = 0;
	if (g_once_init_enter (&sub_minder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SubMinderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) sub_minder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SubMinder), 0, (GInstanceInitFunc) sub_minder_instance_init, NULL };
		GType sub_minder_type_id;
		sub_minder_type_id = g_type_register_static (gtk_application_get_type (), "SubMinder", &g_define_type_info, 0);
		g_once_init_leave (&sub_minder_type_id__volatile, sub_minder_type_id);
	}
	return sub_minder_type_id__volatile;
}



