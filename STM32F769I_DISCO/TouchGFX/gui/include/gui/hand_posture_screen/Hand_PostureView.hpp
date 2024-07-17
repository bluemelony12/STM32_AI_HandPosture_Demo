#ifndef HAND_POSTUREVIEW_HPP
#define HAND_POSTUREVIEW_HPP

#include <gui_generated/hand_posture_screen/Hand_PostureViewBase.hpp>
#include <gui/hand_posture_screen/Hand_PosturePresenter.hpp>

class Hand_PostureView : public Hand_PostureViewBase
{
public:
    Hand_PostureView();
    virtual ~Hand_PostureView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();

    void setPostureR(int* newData);
    void setPostureV(int* newData);

protected:

private:

};

#endif // HAND_POSTUREVIEW_HPP
