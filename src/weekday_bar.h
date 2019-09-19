#ifndef  WEEKDAY_BAR_H_
#define WEEKDAY_BAR_H_

#include "qwidget.h"
#include "qevent.h"

class WeekdayBar : QWidget
{
public:
    WeekdayBar(const QString weekday);
    ~WeekdayBar();
private:
    void SetUi();
protected:
    void paintEvent(QPaintEvent*) override; 
};


#endif // ! WEEKDAY_BAR_H_
