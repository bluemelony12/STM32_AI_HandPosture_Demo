#ifndef LIGHT_DIM_CONTROLPRESENTER_HPP
#define LIGHT_DIM_CONTROLPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Light_Dim_ControlView;

class Light_Dim_ControlPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Light_Dim_ControlPresenter(Light_Dim_ControlView& v);

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

    virtual ~Light_Dim_ControlPresenter() {}

    void notifyLevelDataChanged(int newLevel);
    void notifyLeftRightDataChanged(int newLeftRight);

private:
    Light_Dim_ControlPresenter();

    Light_Dim_ControlView& view;
};

#endif // LIGHT_DIM_CONTROLPRESENTER_HPP
