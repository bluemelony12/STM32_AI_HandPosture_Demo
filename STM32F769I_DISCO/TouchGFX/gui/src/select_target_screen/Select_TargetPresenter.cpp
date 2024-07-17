#include <gui/select_target_screen/Select_TargetView.hpp>
#include <gui/select_target_screen/Select_TargetPresenter.hpp>

Select_TargetPresenter::Select_TargetPresenter(Select_TargetView& v)
    : view(v)
{

}

void Select_TargetPresenter::activate()
{

}

void Select_TargetPresenter::deactivate()
{

}

void Select_TargetPresenter::notifyDegreeDataChanged(int newDegree)
{
	view.setDegree(newDegree);
}
