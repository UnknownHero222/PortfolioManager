#include "portfolio_title_dlg.h"
#include "ui_portfolio_title_dlg.h"

PortfolioTitleDlg::PortfolioTitleDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortfolioTitleDlg)
{
    ui->setupUi(this);
}

PortfolioTitleDlg::~PortfolioTitleDlg()
{
    delete ui;
}
