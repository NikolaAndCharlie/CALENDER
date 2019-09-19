#ifndef MAIN_WIDGET_H_
#define MAIN_WIDGET_H_

#include <qwidget.h>
#include <qobject.h>



class MainWidget : public QWidget 
{
    Q_OBJECT
public:
    MainWidget() ;
    ~MainWidget();
private:
    void SetUi();
};





#endif  // Main_Widget