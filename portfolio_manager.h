#ifndef PORTFOLIOMANAGER_H
#define PORTFOLIOMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PortfolioManager; }
QT_END_NAMESPACE

class PortfolioManager : public QMainWindow
{
    Q_OBJECT

public:
    PortfolioManager(QWidget *parent = nullptr);
    ~PortfolioManager();

private:
    Ui::PortfolioManager *ui;
};
#endif // PORTFOLIOMANAGER_H
