#include <gui/hand_posture_screen/Hand_PostureView.hpp>
#include <gui/hand_posture_screen/Hand_PosturePresenter.hpp>

Hand_PosturePresenter::Hand_PosturePresenter(Hand_PostureView& v)
    : view(v)
{

}

void Hand_PosturePresenter::activate()
{

}

void Hand_PosturePresenter::deactivate()
{

}

void Hand_PosturePresenter::notifyPostureRDataChanged(int* newPostureR)
{
	view.setPostureR(newPostureR);
}
void Hand_PosturePresenter::notifyPostureVDataChanged(int* newPostureV)
{
	view.setPostureV(newPostureV);
}
