TEMPLATE = app
TARGET = firstapp  # -1- can change
INCLUDEPATH += .

QT += widgets # -2- must add, it will become argument -lQt5Widgets of g++

# Input
SOURCES += main.cpp
