#include "src\main_widget.h"
#include <qcoreapplication.h>



int main(int argc, char* argv[])
{
    QCoreApplication app(argc, argv);

    MainWidget w;
    w.show();

    return app.exec();
}