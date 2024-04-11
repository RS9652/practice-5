#include <QApplication>
#include <QColor>
#include <QBoxLayout>
#include <QObject>
#include <QPalette>
#include <QPushButton>
#include <QSizePolicy>
#include <QWidget>

void setWidgetBackground(QWidget *centralWidget, const QColor &color) {
    QPalette pal = centralWidget->palette();
    pal.setColor(centralWidget->backgroundRole(), color);
    centralWidget->setPalette(pal);
    centralWidget->setAutoFillBackground(true);
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    auto *window = new QWidget;
    window->setWindowTitle("Problem #2");
    window->resize(500, 500);

    auto *canvas = new QWidget;
    canvas->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    setWidgetBackground(canvas, Qt::red);

    auto *toolbar = new QWidget;
    auto *redButton   = new QPushButton("Red", toolbar);
    auto *greenButton = new QPushButton("Green", toolbar);
    auto *blueButton  = new QPushButton("Blue", toolbar);
    QObject::connect(redButton, &QPushButton::clicked, canvas, [canvas](){
        setWidgetBackground(canvas, Qt::red);
    });

    QObject::connect(greenButton, &QPushButton::clicked, canvas, [canvas](){
        setWidgetBackground(canvas, Qt::green);
    });

    QObject::connect(blueButton, &QPushButton::clicked, canvas, [canvas](){
        setWidgetBackground(canvas, Qt::blue);
    });


    auto *buttonLayout = new QHBoxLayout(toolbar);
    buttonLayout->addWidget(redButton);
    buttonLayout->addWidget(greenButton);
    buttonLayout->addWidget(blueButton);

    auto *mainLayout = new QVBoxLayout(window);
    mainLayout->addWidget(canvas);
    mainLayout->addWidget(toolbar);

    window->show();

    return QApplication::exec();
}