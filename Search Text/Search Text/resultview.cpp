#include "resultview.h"
#include "ui_resultview.h"

ResultView::ResultView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ResultView)
{
    ui->setupUi(this);
}

ResultView::~ResultView()
{
    delete ui;
}

void ResultView::setl(QString str){
    ui->label->setText(str);
}
