#include "InventorySysytemGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InventorySysytemGUI w;
    w.show();
    return a.exec();
}
