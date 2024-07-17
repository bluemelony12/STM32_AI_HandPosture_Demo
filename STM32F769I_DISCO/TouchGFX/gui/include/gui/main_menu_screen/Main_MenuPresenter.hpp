#ifndef MAIN_MENUPRESENTER_HPP
#define MAIN_MENUPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Main_MenuView;

class Main_MenuPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Main_MenuPresenter(Main_MenuView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Main_MenuPresenter() {}

private:
    Main_MenuPresenter();

    Main_MenuView& view;
};

#endif // MAIN_MENUPRESENTER_HPP
