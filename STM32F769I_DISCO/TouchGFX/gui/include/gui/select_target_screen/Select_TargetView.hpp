#ifndef SELECT_TARGETVIEW_HPP
#define SELECT_TARGETVIEW_HPP

#include <gui_generated/select_target_screen/Select_TargetViewBase.hpp>
#include <gui/select_target_screen/Select_TargetPresenter.hpp>

class Select_TargetView : public Select_TargetViewBase
{
public:
    Select_TargetView();
    virtual ~Select_TargetView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();

    void setDegree(int newData);

protected:
    int tickcounter;
};

#endif // SELECT_TARGETVIEW_HPP
