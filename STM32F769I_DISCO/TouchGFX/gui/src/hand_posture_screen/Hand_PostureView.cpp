#include <gui/hand_posture_screen/Hand_PostureView.hpp>
#include "BitmapDatabase.hpp"

Hand_PostureView::Hand_PostureView()
{

}

void Hand_PostureView::setupScreen()
{
    Hand_PostureViewBase::setupScreen();
}

void Hand_PostureView::tearDownScreen()
{
    Hand_PostureViewBase::tearDownScreen();
}

void Hand_PostureView::setPostureR(int* newData)
{
	const char* PostureR_index[8] = {"None", "Flat", "Like", "Love", "DisLike", "Time", "Cross", "Fist"};

	int Result_PostureR1 = newData[0];
	int Result_PostureR2 = newData[1];
	int Result_PostureR3 = newData[2];

	switch(Result_PostureR1)
	{
		case 0:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_NONE_ID));
			break;

		case 1:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_FLAT_ID));
			break;

		case 2:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_LIKE_ID));
			break;

		case 3:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_LOVE_ID));
			break;

		case 4:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_DISLIKE_ID));
		break;

		case 5:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_BREAKTIME_ID));
		break;

		case 6:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_CROSSHANDS_ID));
		break;

		case 7:
			Result_Img.setBitmap(touchgfx::Bitmap(BITMAP_FIST_ID));
		break;

		default:
			break;
	}
	Result_Img.setPosition(107, 189, 200, 200);
	Result_Img.invalidate();

	touchgfx::Unicode::strncpy(Val1Buffer1, PostureR_index[Result_PostureR1], VAL1BUFFER1_SIZE);
	touchgfx::Unicode::strncpy(Val2Buffer1, PostureR_index[Result_PostureR2], VAL2BUFFER1_SIZE);
	touchgfx::Unicode::strncpy(Val3Buffer1, PostureR_index[Result_PostureR3], VAL3BUFFER1_SIZE);

	Val1.invalidate();
	Val2.invalidate();
	Val3.invalidate();
}


void Hand_PostureView::setPostureV(int* newData)
{
	int Result_PosturePercent1 = newData[0];
	int Result_PosturePercent2 = newData[1];
	int Result_PosturePercent3 = newData[2];

	touchgfx::Unicode::snprintf(Val1Buffer2, VAL1BUFFER2_SIZE, "%d", Result_PosturePercent1);
	touchgfx::Unicode::snprintf(Val2Buffer2, VAL2BUFFER2_SIZE, "%d", Result_PosturePercent2);
	touchgfx::Unicode::snprintf(Val3Buffer2, VAL3BUFFER2_SIZE, "%d", Result_PosturePercent3);

	Val1.invalidate();
	Val2.invalidate();
	Val3.invalidate();
}


void Hand_PostureView::handleTickEvent()
{

}
