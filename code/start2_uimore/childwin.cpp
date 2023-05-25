#include "childwin.h"

#include "father.h"
#include "ui_childwin.h"

childWin::childWin(QWidget *parent) : QDialog(parent), ui(new Ui::childWin) {
    ui->setupUi(this);
    int pos_x = (SCREEN_WIDTH - width()) / 2;
    int pos_y = (SCREEN_HIGH - height()) / 2;
    move(pos_x, pos_y);

    connect(ui->btnBack, &QPushButton::clicked, this, &childWin::close);
}

childWin::~childWin() { delete ui; }

void childWin::on_backHome_accepted() { close(); }
