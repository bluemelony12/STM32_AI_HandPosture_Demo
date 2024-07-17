#include <gui/light_dim_control_screen/Light_Dim_ControlView.hpp>
#include <gui/light_dim_control_screen/Light_Dim_ControlPresenter.hpp>

Light_Dim_ControlPresenter::Light_Dim_ControlPresenter(Light_Dim_ControlView& v)
    : view(v)
{

}

void Light_Dim_ControlPresenter::activate()
{

}

void Light_Dim_ControlPresenter::deactivate()
{

}

void Light_Dim_ControlPresenter::notifyLevelDataChanged(int newLevel)
{
	view.setLevel(newLevel);
}

void Light_Dim_ControlPresenter::notifyLeftRightDataChanged(int newLeftRight)
{
	view.setColor(newLeftRight);
}
