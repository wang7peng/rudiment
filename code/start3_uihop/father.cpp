#include "father.h"

#include "ui_father.h"

Cfather::Cfather(QWidget *parent)
    : QMainWindow(parent), child(new ChildWin(this)), ui(new Ui::Cfather) {
    ui->setupUi(this);
    setMinimumSize(520, 360);
    setMaximumSize(520, 360);

    move((SCREEN_WIDTH - width()) / 2, (SCREEN_HIGH - height()) / 2);
}

Cfather::~Cfather() {
    delete ui;
    delete child;
}

void Cfather::hopPage(int index) { ui->stackedWidget->setCurrentIndex(index); }

void Cfather::setTextEdit(const QString &info) { ui->textEdit->setText(info); }

void Cfather::on_btnPage0_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void Cfather::on_btnPage1_clicked() { ui->stackedWidget->setCurrentIndex(1); }

void Cfather::on_btnPage2_clicked() { ui->stackedWidget->setCurrentIndex(2); }

void Cfather::on_btnPage3_clicked() { ui->stackedWidget->setCurrentIndex(3); }

void Cfather::on_btnOpenSon_clicked() {
    close();
    child->setVisible(true);
}

void Cfather::on_btnClear_clicked() {
    if (ui->textEdit->document()->lineCount() > 1) {
        ui->textEdit->clear();
    }
}
