#include "father.h"

#include "childwin.h"
#include "ui_father.h"

father::father(QWidget *parent) : QMainWindow(parent), ui(new Ui::father) {
    ui->setupUi(this);
    setMinimumSize(520, 360);
    setMaximumSize(520, 360);

    int pos_x = (SCREEN_WIDTH - width()) / 2;
    int pos_y = (SCREEN_HIGH - height()) / 2;
    move(pos_x, pos_y);
}

father::~father() { delete ui; }

void father::on_openSon_clicked() {
    setVisible(false);
    child = new childWin;
    connect(child, &childWin::childClose, this, &QWidget::show);
    child->setVisible(true);
}
