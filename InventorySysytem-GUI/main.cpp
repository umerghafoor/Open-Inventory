#include "InventorySysytemGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QIcon icon(QString::fromStdString(iconPath));
    a.setWindowIcon(icon);

    SignInMenu w;
    w.show();
    return a.exec();
    //main
}

