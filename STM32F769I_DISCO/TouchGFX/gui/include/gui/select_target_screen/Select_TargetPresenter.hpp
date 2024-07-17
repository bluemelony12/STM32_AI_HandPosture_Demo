#ifndef SELECT_TARGETPRESENTER_HPP
#define SELECT_TARGETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Select_TargetView;

class Select_TargetPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Select_TargetPresenter(Select_TargetView& v);

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

    virtual ~Select_TargetPresenter() {}

    void notifyDegreeDataChanged(int newDegree);

private:
    Select_TargetPresenter();

    Select_TargetView& view;
};

#endif // SELECT_TARGETPRESENTER_HPP
