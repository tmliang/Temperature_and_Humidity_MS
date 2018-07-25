# 007智能温湿度管理系统
![License](https://img.shields.io/apm/l/vim-mode.svg)
![Status](https://img.shields.io/pypi/status/Django.svg)
![qt version](https://img.shields.io/badge/qt%20version-4.87-red.svg)

**007智能温湿度管理系统**是一个基于CC2530开发板和DHT11湿温度传感器的嵌入式温湿度监控系统，结合了C++、QT、Zigbee、Z-Stack等嵌入式开发技术。

* qt/QTChartApp.pro: 上位机工程文件
* CoordinatorEB/Projects/zstack/Samples/SampleApp/CC2530DB/SampleApp.eww : 协调器工程文件
* EndDeviceEB/Projects/zstack/Samples/SampleApp/CC2530DB/SampleApp.eww  : 终端工程文件
* 问题和讨论可以发到我的邮箱 tm.liang@outlook.com
* 2018.7.25
***
## 开发环境：
* Win 10/8/7/xp
* Qt 4.87
* Qt Creator 4.62
* IAR kegen PartA810
## 实现功能：
* 湿温度环境数据的采集
* Zigbee设备之间的无线通信
* 温湿度参数的显示
* 温湿度警告门限的设置及提醒
* 温湿度历史信息查询
* 终端空调和除湿器的远程控制
* 界面主题切换
## 窗口界面展示
![](https://github.com/Leotemp/mymarkdownphoto/raw/master/temhum_img/d.gif)
## 运行步骤
#### 1. 协调器程序烧录
![](https://github.com/Leotemp/mymarkdownphoto/raw/master/temhum_img/a.png)
#### 2. 终端程序烧录
![](https://github.com/Leotemp/mymarkdownphoto/raw/master/temhum_img/b.png)
#### 3. 运行程序，打开串口
![](https://github.com/Leotemp/mymarkdownphoto/raw/master/temhum_img/e.png)
#### 4. 切换主题
![](https://github.com/Leotemp/mymarkdownphoto/raw/master/temhum_img/f.png)
![](https://github.com/Leotemp/mymarkdownphoto/raw/master/temhum_img/g.png)
## 补充几句
这是我们007小组的Zigbee生产实习作品，因为项目开发时间很短，所以这个系统也十分简陋，但是这个小小的作品已经融入了我们小组每一个人的想法和创意，我们当初说要做到的都做到了,我很自豪能拥有这一群队友。

谨以此纪念我们这一段短暂而难忘的合作时光，祝愿007小组每个人都能实现自己想要的未来。
