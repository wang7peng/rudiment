#ifndef CHILDWIN_H
#define CHILDWIN_H

#include <QDialog>

namespace Ui {
class childWin;
}

class childWin : public QDialog {
    Q_OBJECT

   public:
    explicit childWin(QWidget *parent = 0);
    ~childWin();

    void closeEvent(QCloseEvent *) { emit childClose(); }

   signals:
    void childClose();

   private slots:
    void on_backHome_accepted();

   private:
    Ui::childWin *ui;
};

#endif  // CHILDWIN_H
