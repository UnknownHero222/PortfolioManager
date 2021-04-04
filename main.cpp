#include "portfolio_manager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PortfolioManager w;
    w.show();
    return a.exec();
}
