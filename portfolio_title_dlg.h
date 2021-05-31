#ifndef PORTFOLIO_TITLE_DLG_H
#define PORTFOLIO_TITLE_DLG_H

#include <QDialog>

namespace Ui {
class PortfolioTitleDlg;
}

class PortfolioTitleDlg : public QDialog
{
    Q_OBJECT

public:
    explicit PortfolioTitleDlg(QWidget *parent = nullptr);
    ~PortfolioTitleDlg();

private:
    Ui::PortfolioTitleDlg *ui;
};

#endif // PORTFOLIO_TITLE_DLG_H
