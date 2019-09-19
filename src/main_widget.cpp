#include "main_widget.h"
#include "qdesktopwidget.h"
#include "qapplication.h"
#include "weekday_bar.h"

MainWidget::MainWidget()
{
   SetUi();
}



MainWidget::~MainWidget()
{

}


void MainWidget::SetUi()
{
    //get the screen size
    QDesktopWidget* desktop_wdiget = QApplication::desktop();
    QSize screen_size = desktop_wdiget->size();
    
    //set the size to Calendar widget
    this->setFixedSize(screen_size);

    

}
