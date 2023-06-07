#include <QApplication>

#include "father.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Cfather w;
    w.show();

    return a.exec();
}
