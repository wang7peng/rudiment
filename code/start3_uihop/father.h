#ifndef FATHER_H
#define FATHER_H
#include <QMainWindow>

#include "childwin.h"
#define SCREEN_WIDTH 1440
#define SCREEN_HIGH 900

namespace Ui {
class Cfather;
}

class ChildWin;

class Cfather : public QMainWindow {
    Q_OBJECT

   public:
    explicit Cfather(QWidget *parent = 0);
    ~Cfather();
    // 直接跳转到stackWidget 指定的页
    void hopPage(int index);
    // 给其他类调用 TextEdit控件
    void setTextEdit(const QString &info);

   private slots:
    void on_btnPage0_clicked();
    void on_btnPage1_clicked();
    void on_btnPage2_clicked();
    void on_btnPage3_clicked();

    void on_btnOpenSon_clicked();
    // 清空控件内容
    void on_btnClear_clicked();

   private:
    Ui::Cfather *ui;
    ChildWin *child;
};

#endif  // FATHER_H
