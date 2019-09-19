#include "src\main_widget.h"
#include <qcoreapplication.h>
#include "qapplication.h"



int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    MainWidget w;
    w.show();

    return app.exec();
}