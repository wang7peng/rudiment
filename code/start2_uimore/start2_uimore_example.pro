TEMPLATE = app
TARGET = twopages
INCLUDEPATH += .

QT += widgets

# Input
HEADERS += father.h \
    childwin.h
FORMS += father.ui \
    childwin.ui
SOURCES += father.cpp main.cpp \
    childwin.cpp
