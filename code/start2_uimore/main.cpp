#include <QtWidgets/QApplication>

#include "father.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    father *firstWin = new father;
    firstWin->show();

    return app.exec();
}
