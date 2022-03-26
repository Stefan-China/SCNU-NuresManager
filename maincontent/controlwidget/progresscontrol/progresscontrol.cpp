#include "progresscontrol.h"


progresscontrol::progresscontrol(QFrame *parent) :
    QFrame(parent)
{

    this->setFixedWidth(FIXED_WIDTH);
    this->setFixedHeight(FIXED_HEIGHT);
    this->setObjectName("frameApplication");
}

progresscontrol::~progresscontrol()
{

}

void progresscontrol::setLabelPixMap(const QPixmap &pixMap)
{
    if (labelImage != nullptr) {
        labelImage->setPixmap(pixMap);
    }
}

void progresscontrol::setTitleInfo(const QString &title)
{
    if (labelTitle != nullptr) {
        labelTitle->setText(title);
    }
}

void progresscontrol::createFrame(const QPixmap &pixMap, const QString &title,const QString &name)
{
    QHBoxLayout *hBoxLayout = new QHBoxLayout(this);
    labelImage = new QLabel(this);
    labelImage->setFixedSize(IMAGE_SIZE, IMAGE_SIZE);
    labelImage->setPixmap(pixMap);
    labelImage->setScaledContents(true);


    labelTitle = new QLabel(this);
    labelTitle->setText(name);
    labelTitle->setFixedSize(BUTTON_WIDTH, BUTTON_HEIGHT);

    pushButtonDownLoad = new QPushButton(this);
    pushButtonDownLoad->setText(tr("详情"));
    pushButtonDownLoad->setFixedSize(BUTTON_WIDTH, BUTTON_HEIGHT);


    connect(pushButtonDownLoad, &QPushButton::clicked,this,[=](){Button(title); });
    QVBoxLayout *vBoxLayout = new QVBoxLayout();
    vBoxLayout->addWidget(labelTitle);
    vBoxLayout->addWidget(pushButtonDownLoad);
    hBoxLayout->addWidget(labelImage);
    hBoxLayout->addLayout(vBoxLayout);
}

void progresscontrol::Button(QString title)
{

    information_handband *m_information_handband = new information_handband(nullptr,title);
    m_information_handband->show();

}
