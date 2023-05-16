QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Class/admin.cpp \
    Class/customer.cpp \
    Class/inventory.cpp \
    Class/user.cpp \
    Class/venderor.cpp \
    customerview.cpp \
    inventorysysytemgui.cpp \
    main.cpp

HEADERS += \
    Class/admin.h \
    Class/customer.h \
    Class/inventory.h \
    Class/user.h \
    Class/venderor.h \
    comman/constants.h \
    customerview.h \
    inventorysysytemgui.h

FORMS += \
    customerview.ui \
    inventorysysytemgui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
