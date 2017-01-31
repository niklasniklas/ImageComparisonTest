#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImageComparisonTest.h"

class ImageComparisonTest : public QMainWindow
{
    Q_OBJECT

public:
    ImageComparisonTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::ImageComparisonTestClass ui;
};
