#include <gui/select_target_screen/Select_TargetView.hpp>
#include <touchgfx/Color.hpp>

Select_TargetView::Select_TargetView()
{

}

void Select_TargetView::setupScreen()
{
    Select_TargetViewBase::setupScreen();
}

void Select_TargetView::tearDownScreen()
{
    Select_TargetViewBase::tearDownScreen();
}

void Select_TargetView::setDegree(int newData)
{
	int degreePercent = newData;
	int degree = 0;
	int select_index = 0;


	if(degreePercent < 0) degreePercent = 0;
	else if(degreePercent > 100) degreePercent = 100;

	degree = (360 * degreePercent)/100;

	select_index = degree / 60;

	Unicode::snprintf(Deg_ValBuffer, DEG_VAL_SIZE, "%d", degree);
	Deg_Val.invalidate();

	circle1Painter.setColor(touchgfx::Color::getColorFromRGB(209, 209, 209));
	circle2Painter.setColor(touchgfx::Color::getColorFromRGB(209, 209, 209));
	circle3Painter.setColor(touchgfx::Color::getColorFromRGB(209, 209, 209));
	circle4Painter.setColor(touchgfx::Color::getColorFromRGB(209, 209, 209));
	circle5Painter.setColor(touchgfx::Color::getColorFromRGB(209, 209, 209));
	circle6Painter.setColor(touchgfx::Color::getColorFromRGB(209, 209, 209));

	switch (select_index)
	{
		case 0:
			circle2Painter.setColor(touchgfx::Color::getColorFromRGB(238, 255, 0));
		break;

		case 1:
			circle1Painter.setColor(touchgfx::Color::getColorFromRGB(238, 255, 0));
		break;

		case 2:
			circle6Painter.setColor(touchgfx::Color::getColorFromRGB(238, 255, 0));
		break;

		case 3:
			circle5Painter.setColor(touchgfx::Color::getColorFromRGB(238, 255, 0));
		break;

		case 4:
			circle4Painter.setColor(touchgfx::Color::getColorFromRGB(238, 255, 0));
		break;

		case 5:
			circle3Painter.setColor(touchgfx::Color::getColorFromRGB(238, 255, 0));
		break;

		default:
			break;
	}

	circle1.invalidate();
	circle2.invalidate();
	circle3.invalidate();
	circle4.invalidate();
	circle5.invalidate();
	circle6.invalidate();
}


void Select_TargetView::handleTickEvent()
{

}
