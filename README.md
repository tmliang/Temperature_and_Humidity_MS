# 007智能温湿度管理系统
![License](http://img.shields.io/apm/l/vim-mode.svg)
![Status](http://img.shields.io/pypi/status/Django.svg)
![qt version](http://img.shields.io/badge/qt%20version-4.87-red.svg)

**007智能温湿度管理系统**是我们007小组的Zigbee生产实习作品。它作为一个基于CC2530开发板和DHT11湿温度传感器的嵌入式系统，结合了C++、QT、Zigbee、Z-Stack等嵌入式开发技术，融入了我们007小组每个人的想法和创意。

* qt/QTChartApp.pro: 上位机工程文件
* CoordinatorEB/Projects/zstack/Samples/SampleApp/CC2530DB/SampleApp.eww : 协调器工程文件
* EndDeviceEB/Projects/zstack/Samples/SampleApp/CC2530DB/SampleApp.eww  : 终端工程文件
* 2018.7.25
***
## 实现功能：
* 湿温度环境数据的采集
* Zigbee设备之间的无线通信
* 温湿度参数的显示
* 温湿度警告门限的设置及提醒
* 温湿度历史信息查询
