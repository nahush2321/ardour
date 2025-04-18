// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_MESSAGEDIALOG_H
#define _GTKMM_MESSAGEDIALOG_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: messagedialog.hg,v 1.15 2006/06/20 18:46:59 murrayc Exp $ */

/* messagedialog.h
 *
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <ytkmm/dialog.h>
#include <ytkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMessageDialog GtkMessageDialog;
typedef struct _GtkMessageDialogClass GtkMessageDialogClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class MessageDialog_Class; } // namespace Gtk
namespace Gtk
{


/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *
 * @ingroup gtkmmEnums
 */
enum ButtonsType
{
  BUTTONS_NONE,
  BUTTONS_OK,
  BUTTONS_CLOSE,
  BUTTONS_CANCEL,
  BUTTONS_YES_NO,
  BUTTONS_OK_CANCEL
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::ButtonsType> : public Glib::Value_Enum<Gtk::ButtonsType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** Convenient message window.
 *
 * Gtk::MessageDialog presents a dialog with an image representing the type
 * of message (Error, Question, etc.) alongside some message text. It's
 * simply a convenience widget; you could construct the equivalent of
 * Gtk::MessageDialog from Gtk::Dialog without too much effort, but
 * Gtk::MessageDialog saves typing.
 *
 * @ingroup Dialogs
 */

class MessageDialog : public Dialog
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MessageDialog CppObjectType;
  typedef MessageDialog_Class CppClassType;
  typedef GtkMessageDialog BaseObjectType;
  typedef GtkMessageDialogClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~MessageDialog();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MessageDialog_Class;
  static CppClassType messagedialog_class_;

  // noncopyable
  MessageDialog(const MessageDialog&);
  MessageDialog& operator=(const MessageDialog&);

protected:
  explicit MessageDialog(const Glib::ConstructParams& construct_params);
  explicit MessageDialog(GtkMessageDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMessageDialog*       gobj()       { return reinterpret_cast<GtkMessageDialog*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMessageDialog* gobj() const { return reinterpret_cast<GtkMessageDialog*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  explicit MessageDialog(const Glib::ustring& message, bool use_markup = false, MessageType type = MESSAGE_INFO, ButtonsType buttons = BUTTONS_OK, bool modal = false);
  MessageDialog(Gtk::Window& parent, const Glib::ustring& message, bool use_markup = false, MessageType type = MESSAGE_INFO, ButtonsType buttons = BUTTONS_OK, bool modal = false);
  

  /** Sets the dialog's image to @a image.
   * 
   * @param image The image.
   */
  void set_image(Widget& image);
  
  /** Gets the dialog's image.
   * 
   * @return The dialog's image.
   */
  Widget* get_image();
  
  /** Gets the dialog's image.
   * 
   * @return The dialog's image.
   */
  const Widget* get_image() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the text of the message dialog to be @a str, which is marked
   * up with the Pango text markup
   * language.
   * 
   * @deprecated Use set_message(string, true).
   * 
   * @param str Markup string (see Pango markup format).
   */
  void set_markup(const Glib::ustring& str);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets the primary text of the message dialog.
   *
   * @param message The message.
   * @param use_markup Whether @a message contains pango markup.
   */
  void set_message(const Glib::ustring& message, bool use_markup = false);
  

  /** Sets the secondary text of the message dialog.
   * Note that setting a secondary text makes the primary text become bold, unless you have provided explicit markup.
   *
   * @param text The message.
   * @param use_markup Whether @a message contains pango markup.
   */
  void set_secondary_text(const Glib::ustring& text, bool use_markup = false);
  

  /** Returns the message area of the dialog. This is the box where the
   * dialog's primary and secondary labels are packed. You can add your
   * own extra content to that box and it will appear below those labels,
   * on the right side of the dialog's image (or on the left for right-to-left
   * languages).  See Gtk::Dialog::get_content_area() for the corresponding
   * function in the parent Gtk::Dialog.
   * 
   * @return A Gtk::VBox corresponding to the
   * "message area" in the @a message_dialog.
   */
  VBox* get_message_area();
  
  /** Returns the message area of the dialog. This is the box where the
   * dialog's primary and secondary labels are packed. You can add your
   * own extra content to that box and it will appear below those labels,
   * on the right side of the dialog's image (or on the left for right-to-left
   * languages).  See Gtk::Dialog::get_content_area() for the corresponding
   * function in the parent Gtk::Dialog.
   * 
   * @return A Gtk::VBox corresponding to the
   * "message area" in the @a message_dialog.
   */
  const VBox* get_message_area() const;

  /** The type of message.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< MessageType > property_message_type() ;

/** The type of message.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< MessageType > property_message_type() const;

  //gtkmmproc error: buttons : attempt to wrap write-only and construct-only property.
  /** The primary text of the message dialog.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text() ;

/** The primary text of the message dialog.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text() const;

  /** The primary text of the title includes Pango markup.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_markup() ;

/** The primary text of the title includes Pango markup.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_markup() const;

  /** The secondary text of the message dialog.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_secondary_text() ;

/** The secondary text of the message dialog.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_secondary_text() const;

  /** The secondary text includes Pango markup.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_secondary_use_markup() ;

/** The secondary text includes Pango markup.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_secondary_use_markup() const;

  /** The image.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_image() ;

/** The image.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_image() const;

  /** GtkVBox that holds the dialog's primary and secondary labels.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< VBox* > property_message_area() const;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::MessageDialog
   */
  Gtk::MessageDialog* wrap(GtkMessageDialog* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MESSAGEDIALOG_H */

