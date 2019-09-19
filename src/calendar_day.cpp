#include"calendar_day.h"
#include"qdesktopwidget.h"
#include"qcoreapplication.h"
#include"qapplication.h"



CalendarWidget::CalendarWidget(const int Day)
{
    SetUi();
}

CalendarWidget::~CalendarWidget()
{

}

int CalendarWidget::GetDesktopWidth()
{
   QDesktopWidget* desktop_screen = QApplication::desktop();

 //  return desktop_screen->size().width();
     return 1080;
}

int CalendarWidget::GetDesktopHeight()
{
    QDesktopWidget* desktop_screen = QApplication::desktop();

 //   return desktop_screen->size().height();
     return 1920;
}

void CalendarWidget::paintEvent(QPaintEvent* e)
{

}

void CalendarWidget::mousePressEvent(QMouseEvent* e)
{

}

void CalendarWidget::mouseReleaseEvent(QMouseEvent* e)
{

}

void CalendarWidget::SetUi()
{
    
}