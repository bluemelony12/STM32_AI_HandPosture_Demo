#include <gui/light_dim_control_screen/Light_Dim_ControlView.hpp>
#include "BitmapDatabase.hpp"

Light_Dim_ControlView::Light_Dim_ControlView()
{

}

void Light_Dim_ControlView::setupScreen()
{
    Light_Dim_ControlViewBase::setupScreen();
}

void Light_Dim_ControlView::tearDownScreen()
{
    Light_Dim_ControlViewBase::tearDownScreen();
}

void Light_Dim_ControlView::setLevel(int newData)
{
	int level = newData;

	if(level < 0) level = 0;
	else if(level > 100) level = 100;
	else {}

	gauge1.setValue(level);
	gauge1.invalidate();

	Unicode::snprintf(Dim_ValBuffer, DIM_VAL_SIZE, "%d", level);
	Dim_Val.invalidate();

	if(level >= 0 && level < 10) DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM10_ID));
	else if(level >= 10 && level < 30) DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM30_ID));
	else if(level >= 30 && level < 50) DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM50_ID));
	else if(level >= 50 && level < 70) DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM70_ID));
	else DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM100_ID));
	DimLight.invalidate();
}



void Light_Dim_ControlView::handleTickEvent()
{

}
