#ifndef MAIN_MENUVIEW_HPP
#define MAIN_MENUVIEW_HPP

#include <gui_generated/main_menu_screen/Main_MenuViewBase.hpp>
#include <gui/main_menu_screen/Main_MenuPresenter.hpp>

class Main_MenuView : public Main_MenuViewBase
{
public:
    Main_MenuView();
    virtual ~Main_MenuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MAIN_MENUVIEW_HPP
