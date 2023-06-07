#include "childwin.h"
#include "ui_childwin.h"

#include <QDebug>
#include <QtCore/QProcess>

#define CMD_linux_ver "lsb_release -idr"

// get bash command output
QByteArray getLinuxVersion() {
    QProcess proc;
    proc.start(CMD_linux_ver);
    proc.waitForFinished();
    QByteArray cmdOut = proc.readAllStandardOutput();
    if (cmdOut.isEmpty()) {
        qDebug() << "have error in command!";
    }
    proc.close();

    return cmdOut;
}

ChildWin::ChildWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChildWin)
{
    ui->setupUi(this);
    father = (Cfather*)parent;
}

ChildWin::~ChildWin()
{
    delete ui;
}

void ChildWin::on_btnBox_accepted(){
    QByteArray linuxInfo = getLinuxVersion();
   // qDebug() << linuxInfo.data();

    father->setTextEdit(linuxInfo.data());

    father->hopPage(2);
    father->setVisible(true);
}

void ChildWin::on_btnBox_rejected()
{
    father->setVisible(true);
    father->hopPage(1);
}
