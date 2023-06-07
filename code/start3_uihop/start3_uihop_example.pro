TEMPLATE = app
TARGET = $$PWD/bin/uihop
INCLUDEPATH += .

QT += core gui widgets

# Input
HEADERS += childwin.h father.h
FORMS += childwin.ui father.ui
SOURCES += childwin.cpp father.cpp \
    main.cpp
