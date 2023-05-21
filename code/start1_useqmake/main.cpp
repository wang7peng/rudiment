#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel *label = new QLabel("hello");
    label->resize(520, 360);
    label->show();

    return app.exec();
}
