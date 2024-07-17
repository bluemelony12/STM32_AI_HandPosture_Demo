#ifndef HAND_POSTUREPRESENTER_HPP
#define HAND_POSTUREPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Hand_PostureView;

class Hand_PosturePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Hand_PosturePresenter(Hand_PostureView& v);

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

    virtual ~Hand_PosturePresenter() {}

    void notifyPostureRDataChanged(int* newPostureR);
    void notifyPostureVDataChanged(int* newPostureV);

private:
    Hand_PosturePresenter();

    Hand_PostureView& view;
};

#endif // HAND_POSTUREPRESENTER_HPP
