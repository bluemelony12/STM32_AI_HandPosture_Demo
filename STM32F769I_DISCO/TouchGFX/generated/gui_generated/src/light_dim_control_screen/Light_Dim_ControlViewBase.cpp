/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/light_dim_control_screen/Light_Dim_ControlViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Light_Dim_ControlViewBase::Light_Dim_ControlViewBase() :
    buttonCallback(this, &Light_Dim_ControlViewBase::buttonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    backgronds.setXY(0, 0);
    backgronds.setBitmap(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_BACKGROUNDS_800X480_HIVE_ID));
    add(backgronds);

    Title_Bar.setXY(0, 0);
    Title_Bar.setBitmap(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_BARS_800X480_BOTTOM_DIM_DARK_ID));
    add(Title_Bar);

    Title.setXY(196, 16);
    Title.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Title.setLinespacing(0);
    Title.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AQQ0));
    add(Title);

    Disc1.setXY(160, 90);
    Disc1.setColor(touchgfx::Color::getColorFromRGB(89, 247, 74));
    Disc1.setLinespacing(0);
    Disc1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CT22));
    add(Disc1);

    BackButton.setXY(670, 424);
    BackButton.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_CHEVRON_LEFT_50_50_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_CHEVRON_LEFT_50_50_E8F6FB_SVG_ID));
    BackButton.setIconXY(25, -7);
    BackButton.setAction(buttonCallback);
    add(BackButton);

    Bulb.setBitmap(touchgfx::Bitmap(BITMAP_DIM_ID));
    Bulb.setPosition(93, 115, 400, 350);
    Bulb.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(Bulb);

    DimLight.setXY(192, 171);
    DimLight.setBitmap(touchgfx::Bitmap(BITMAP_DIM100_Y_ID));
    add(DimLight);

    Dim_Val.setXY(514, 353);
    Dim_Val.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Dim_Val.setLinespacing(0);
    Unicode::snprintf(Dim_ValBuffer, DIM_VAL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JSQ5).getText());
    Dim_Val.setWildcard(Dim_ValBuffer);
    Dim_Val.resizeToCurrentText();
    Dim_Val.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1V3J));
    add(Dim_Val);

    gauge1.setBackground(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_WIDGETS_GAUGE_SMALL_BACKGROUNDS_DARK_FILLED_ID));
    gauge1.setPosition(510, 169, 184, 184);
    gauge1.setCenter(92, 92);
    gauge1.setStartEndAngle(-119, 122);
    gauge1.setRange(0, 100);
    gauge1.setValue(0);
    gauge1.setEasingEquation(touchgfx::EasingEquations::linearEaseIn);
    gauge1.setNeedle(BITMAP_DARK_THEME_IMAGES_WIDGETS_GAUGE_SMALL_NEEDLES_ROUGH_ID, 8, 53);
    gauge1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setArcVisible();
    gauge1Painter.setBitmap(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_WIDGETS_GAUGE_SMALL_FILLERS_SWOOP_ID));
    gauge1.getArc().setPainter(gauge1Painter);
    gauge1.getArc().setRadius(79);
    gauge1.getArc().setLineWidth(78);
    gauge1.getArc().setCapPrecision(180);
    gauge1.setArcPosition(19, 19, 146, 108);
    gauge1.setAlpha(224);
    add(gauge1);
}

Light_Dim_ControlViewBase::~Light_Dim_ControlViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Light_Dim_ControlViewBase::setupScreen()
{

}

void Light_Dim_ControlViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &BackButton)
    {
        //Back_Menu
        //When BackButton clicked change screen to Main_Menu
        //Go to Main_Menu with screen transition towards West
        application().gotoMain_MenuScreenSlideTransitionWest();
    }
}
