#ifndef PROFILE_WDG_H
#define PROFILE_WDG_H

#include <QWidget>

namespace Ui {
class ProfileWdg;
}

class ProfileWdg : public QWidget
{
    Q_OBJECT

public:
    explicit ProfileWdg(QWidget *parent = nullptr);
    ~ProfileWdg();

private:
    Ui::ProfileWdg *ui;
};

#endif // PROFILE_WDG_H
