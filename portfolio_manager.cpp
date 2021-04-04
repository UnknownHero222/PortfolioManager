#include "portfolio_manager.h"
#include "./ui_portfolio_manager.h"

PortfolioManager::PortfolioManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PortfolioManager)
{
    ui->setupUi(this);
}

PortfolioManager::~PortfolioManager()
{
    delete ui;
}

