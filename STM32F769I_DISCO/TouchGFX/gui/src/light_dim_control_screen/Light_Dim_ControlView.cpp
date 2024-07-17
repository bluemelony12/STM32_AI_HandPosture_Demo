#include <gui/light_dim_control_screen/Light_Dim_ControlView.hpp>
#include "BitmapDatabase.hpp"

Light_Dim_ControlView::Light_Dim_ControlView()
{
	DimLight.setAlpha(0);
	DimLight.invalidate();

	Unicode::snprintf(Dim_ValBuffer, DIM_VAL_SIZE, "0");
	Dim_Val.invalidate();
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
	if(newData > 0) newlevel = newData;

	if(newlevel < 0) newlevel = 0;
	else if(newlevel > 100) newlevel = 100;
	else {}

	gauge1.setValue(newlevel);
	gauge1.invalidate();

	Unicode::snprintf(Dim_ValBuffer, DIM_VAL_SIZE, "%d", newlevel);
	Dim_Val.invalidate();

	newalpha = (newlevel * 255)/100;
	DimLight.setAlpha(newalpha);
	DimLight.invalidate();
}

void Light_Dim_ControlView::setColor(int newData)
{
	int ColorFlag = newData;
	bool ischange = false;

	if(ColorFlag == 1)
	{
		colorindex++;
		if(colorindex > 3) colorindex = 0;
		ischange = true;
	}
	else if(ColorFlag == 2)
	{
		colorindex--;
		if(colorindex < 0) colorindex = 3;
		ischange = true;
	}

	if(ischange)
	{
		switch(colorindex)
		{
			case 0:
			DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM100_Y_ID));
			break;

			case 1:
			DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM100_G_ID));
			break;

			case 2:
			DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM100_B_ID));
			break;

			case 3:
			DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM100_R_ID));
			break;

			default:
			break;
		}
		DimLight.invalidate();
	}
}



void Light_Dim_ControlView::handleTickEvent()
{

}
