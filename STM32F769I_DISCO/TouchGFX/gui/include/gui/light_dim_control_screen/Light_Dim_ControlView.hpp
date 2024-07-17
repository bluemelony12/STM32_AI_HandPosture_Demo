#ifndef LIGHT_DIM_CONTROLVIEW_HPP
#define LIGHT_DIM_CONTROLVIEW_HPP

#include <gui_generated/light_dim_control_screen/Light_Dim_ControlViewBase.hpp>
#include <gui/light_dim_control_screen/Light_Dim_ControlPresenter.hpp>

class Light_Dim_ControlView : public Light_Dim_ControlViewBase
{
public:
    Light_Dim_ControlView();
    virtual ~Light_Dim_ControlView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();

    void setLevel(int newData);
    void setColor(int newData);

protected:

private:
    int colorindex = 0;
    int newlevel = 0;
    int newalpha = 0;
};

#endif // LIGHT_DIM_CONTROLVIEW_HPP
