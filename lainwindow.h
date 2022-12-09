#ifndef LAINWINDOW_H
#define LAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LainWindow; }
QT_END_NAMESPACE

class LainWindow : public QMainWindow
{
    Q_OBJECT

public:
    LainWindow(QWidget *parent = nullptr);
    ~LainWindow();

private:
    Ui::LainWindow *ui;
};
#endif // LAINWINDOW_H
