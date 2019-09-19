#ifndef _CALENDAR_DAY_H_
#define _CALENDAR_DAY_H_

#include "qwidget.h"
#include "qobject.h"
#include "qevent.h"

class CalendarWidget : public QWidget 
{
    Q_OBJECT
public:
    CalendarWidget(const int Day);
    ~CalendarWidget();
private:
    int GetDesktopWidth();
    int GetDesktopHeight();
    void SetUi();
protected:
    void paintEvent(QPaintEvent* ) override;
    void mousePressEvent(QMouseEvent* ) override;
    void mouseReleaseEvent(QMouseEvent* ) override;

};




#endif // !_CALENDAR_DAY_H_
