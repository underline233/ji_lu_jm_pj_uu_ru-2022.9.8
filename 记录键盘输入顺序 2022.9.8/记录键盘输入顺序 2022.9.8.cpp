﻿// 记录键盘输入顺序 2022.9.8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include  <E:\lib\头文件 c++.h>
//#include  <E:\lib\头文件 opcv.h>
//#include  <E:\lib\头文件 qt.h>
//头文件1
#include  <E:\lib\define.cpp>
#include  <E:\lib\全局量.cpp>
#include  <E:\lib\中文关键词.cpp>
#include  <E:\lib\执行.cpp>
#include  <E:\lib\鼠标点击.cpp>
//#include  <E:\lib\按键.cpp>
//#include  <E:\lib\时间.cpp>
//#include  <E:\lib\截图.h>
//#include  <E:\lib\WIN API.cpp>
//#include  <E:\lib\按键检测.cpp>
#include  <E:\lib\输入流检测.cpp>

//#include  <E:\lib\图片识别.cpp>
//#include  <E:\lib\记忆.cpp>
#include  <E:\lib\文件读写.cpp>
#include  <E:\lib\文字读取.cpp>

////头文件2
//#include  <E:\lib\代码识别.cpp>
//#include  <E:\lib\程序正在干什么.cpp>
//#include  <E:\lib\opencv.cpp>





//检测
int main() {
	输入流检测 输入流检测;

	初始化 初始化;
	string 盘符 = 初始化.盘符; 	
	//cout << 存档路径 << "\n"; Sleep (100000);
	fstream 输入流存档;
	string 存档路径;
	//路径 的 组成
	string 文件名="0.cpp";	string 文件名当前时间;		string 存档路径重命名后;	string 每日文件夹名称;

	//存档路径 = 盘符 + 输入流检测.存档路径无头;
	存档路径 = 盘符 + 输入流检测.存档路径无头尾 + 文件名;
	输入流检测.存档路径 = 存档路径; //class内容

	SYSTEMTIME sys{};


	//新建文件
	从头覆盖读写(输入流存档, 存档路径); //输入流存档<<存档路径
	输入流存档.close();


	system("color 0B");//黑蓝
	system("C:\\Windows\\system32\\chcp 65001");//utf-8
	system("mode con cols=84 lines=14 "); //2 3
	//	system("mode con cols=84 lines=14 "); //2 3


	//初始化
	for (输入流检测.四位个数初始化 = 0; 输入流检测.四位个数初始化 < 46; 输入流检测.四位个数初始化 += 1)
	{
		输入流检测.计数[输入流检测.四位个数初始化] = 0;
	}
	输入流检测.之前和现在初始化(200);

	///////////////////////////////////////////////////////////
	输入流检测.写入输入流存档();
	//输入流检测.cout输入流存档();

	int 重命名时时间wMinute =-1, 重命名时时间wMinute加15 =-1
		, 重命名时时间wHour =-1, 重命名时时间wHour加1 =-1;
	//int 已经跳转_已经重命名 = 2; 已经重命名 = 2, 

	//第一次 重命名 是 后一小时
	GetLocalTime(&sys);
	if (sys.wHour == 23)
	{
		重命名时时间wHour加1 = 1;
	}
	else if (sys.wHour == 24)
	{
		重命名时时间wHour加1 = 1;
	}
	else //包括0点
	{
		重命名时时间wHour加1 = sys.wHour + 1;
	}

	//开始就 重命名
	//重命名时时间wHour加1 = sys.wHour;

	while (1)
	{

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		//输入流检测.检测是否按下 //178行
		{
			//鼠标
			//输入流检测.检测是否按下(1, VK_RBUTTON);
			//输入流检测.检测是否按下(3, VK_MBUTTON);
			//输入流检测.检测是否按下(4, VK_XBUTTON1);
			//输入流检测.检测是否按下(5, VK_XBUTTON2);

			输入流检测.检测是否按下(2, VK_CANCEL);
			输入流检测.检测是否按下(6, VK_BACK);
			输入流检测.检测是否按下(7, VK_TAB);
			输入流检测.检测是否按下(8, VK_CLEAR);
			输入流检测.检测是否按下(9, VK_RETURN);
			输入流检测.检测是否按下(10, VK_SHIFT);
			输入流检测.检测是否按下(11, VK_CONTROL);
			输入流检测.检测是否按下(12, VK_MENU);
			输入流检测.检测是否按下(13, VK_PAUSE);
			输入流检测.检测是否按下(14, VK_CAPITAL);
			输入流检测.检测是否按下(15, VK_KANA);
			输入流检测.检测是否按下(16, VK_HANGUL);
			输入流检测.检测是否按下(17, VK_IME_ON);
			输入流检测.检测是否按下(18, VK_JUNJA);
			输入流检测.检测是否按下(19, VK_FINAL);
			输入流检测.检测是否按下(20, VK_HANJA);
			输入流检测.检测是否按下(21, VK_KANJI);
			输入流检测.检测是否按下(22, VK_IME_OFF);
			输入流检测.检测是否按下(23, VK_ESCAPE);
			输入流检测.检测是否按下(24, VK_CONVERT);
			输入流检测.检测是否按下(25, VK_NONCONVERT);
			输入流检测.检测是否按下(26, VK_ACCEPT);
			输入流检测.检测是否按下(27, VK_MODECHANGE);
			输入流检测.检测是否按下(28, VK_SPACE);
			输入流检测.检测是否按下(29, VK_PRIOR);
			输入流检测.检测是否按下(30, VK_NEXT);
			输入流检测.检测是否按下(31, VK_END);
			输入流检测.检测是否按下(32, VK_HOME);
			输入流检测.检测是否按下(33, VK_LEFT);
			输入流检测.检测是否按下(34, VK_UP);
			输入流检测.检测是否按下(35, VK_RIGHT);
			输入流检测.检测是否按下(36, VK_DOWN);
			输入流检测.检测是否按下(37, VK_SELECT);
			输入流检测.检测是否按下(38, VK_PRINT);
			输入流检测.检测是否按下(39, VK_EXECUTE);
			输入流检测.检测是否按下(40, VK_SNAPSHOT);
			输入流检测.检测是否按下(41, VK_INSERT);
			输入流检测.检测是否按下(42, VK_DELETE);
			输入流检测.检测是否按下(43, VK_HELP);
			输入流检测.检测是否按下(44, '0');
			输入流检测.检测是否按下(45, '1');
			输入流检测.检测是否按下(46, '2');
			输入流检测.检测是否按下(47, '3');
			输入流检测.检测是否按下(48, '4');
			输入流检测.检测是否按下(49, '5');
			输入流检测.检测是否按下(50, '6');
			输入流检测.检测是否按下(51, '7');
			输入流检测.检测是否按下(52, '8');
			输入流检测.检测是否按下(53, '9');
			输入流检测.检测是否按下(54, 'A');
			输入流检测.检测是否按下(55, 'B');
			输入流检测.检测是否按下(56, 'C');
			输入流检测.检测是否按下(57, 'D');
			输入流检测.检测是否按下(58, 'E');
			输入流检测.检测是否按下(59, 'F');
			输入流检测.检测是否按下(60, 'G');
			输入流检测.检测是否按下(61, 'H');
			输入流检测.检测是否按下(62, 'I');
			输入流检测.检测是否按下(63, 'J');
			输入流检测.检测是否按下(64, 'K');
			输入流检测.检测是否按下(65, 'L');
			输入流检测.检测是否按下(66, 'M');
			输入流检测.检测是否按下(67, 'N');
			输入流检测.检测是否按下(68, 'O');
			输入流检测.检测是否按下(69, 'P');
			输入流检测.检测是否按下(70, 'Q');
			输入流检测.检测是否按下(71, 'R');
			输入流检测.检测是否按下(72, 'S');
			输入流检测.检测是否按下(73, 'T');
			输入流检测.检测是否按下(74, 'U');
			输入流检测.检测是否按下(75, 'V');
			输入流检测.检测是否按下(76, 'W');
			输入流检测.检测是否按下(77, 'X');
			输入流检测.检测是否按下(78, 'Y');
			输入流检测.检测是否按下(79, 'Z');
			输入流检测.检测是否按下(80, VK_LWIN);
			输入流检测.检测是否按下(81, VK_RWIN);
			输入流检测.检测是否按下(82, VK_APPS);
			输入流检测.检测是否按下(83, VK_SLEEP);
			输入流检测.检测是否按下(84, VK_NUMPAD0);
			输入流检测.检测是否按下(85, VK_NUMPAD1);
			输入流检测.检测是否按下(86, VK_NUMPAD2);
			输入流检测.检测是否按下(87, VK_NUMPAD3);
			输入流检测.检测是否按下(88, VK_NUMPAD4);
			输入流检测.检测是否按下(89, VK_NUMPAD5);
			输入流检测.检测是否按下(90, VK_NUMPAD6);
			输入流检测.检测是否按下(91, VK_NUMPAD7);
			输入流检测.检测是否按下(92, VK_NUMPAD8);
			输入流检测.检测是否按下(93, VK_NUMPAD9);
			输入流检测.检测是否按下(94, VK_MULTIPLY);
			输入流检测.检测是否按下(95, VK_ADD);
			输入流检测.检测是否按下(96, VK_SEPARATOR);
			输入流检测.检测是否按下(97, VK_SUBTRACT);
			输入流检测.检测是否按下(98, VK_DECIMAL);
			输入流检测.检测是否按下(99, VK_DIVIDE);
			输入流检测.检测是否按下(100, VK_F1);
			输入流检测.检测是否按下(101, VK_F2);
			输入流检测.检测是否按下(102, VK_F3);
			输入流检测.检测是否按下(103, VK_F4);
			输入流检测.检测是否按下(104, VK_F5);
			输入流检测.检测是否按下(105, VK_F6);
			输入流检测.检测是否按下(106, VK_F7);
			输入流检测.检测是否按下(107, VK_F8);
			输入流检测.检测是否按下(108, VK_F9);
			输入流检测.检测是否按下(109, VK_F10);
			输入流检测.检测是否按下(110, VK_F11);
			输入流检测.检测是否按下(111, VK_F12);
			输入流检测.检测是否按下(112, VK_F13);
			输入流检测.检测是否按下(113, VK_F14);
			输入流检测.检测是否按下(114, VK_F15);
			输入流检测.检测是否按下(115, VK_F16);
			输入流检测.检测是否按下(116, VK_F17);
			输入流检测.检测是否按下(117, VK_F18);
			输入流检测.检测是否按下(118, VK_F19);
			输入流检测.检测是否按下(119, VK_F20);
			输入流检测.检测是否按下(120, VK_F21);
			输入流检测.检测是否按下(121, VK_F22);
			输入流检测.检测是否按下(122, VK_F23);
			输入流检测.检测是否按下(123, VK_F24);
			输入流检测.检测是否按下(124, VK_NUMLOCK);
			输入流检测.检测是否按下(125, VK_SCROLL);
			输入流检测.检测是否按下(126, VK_LSHIFT);
			输入流检测.检测是否按下(127, VK_RSHIFT);
			输入流检测.检测是否按下(128, VK_LCONTROL);
			输入流检测.检测是否按下(129, VK_RCONTROL);
			输入流检测.检测是否按下(130, VK_LMENU);
			输入流检测.检测是否按下(131, VK_RMENU);
			输入流检测.检测是否按下(132, VK_BROWSER_BACK);
			输入流检测.检测是否按下(133, VK_BROWSER_FORWARD);
			输入流检测.检测是否按下(134, VK_BROWSER_REFRESH);
			输入流检测.检测是否按下(135, VK_BROWSER_STOP);
			输入流检测.检测是否按下(136, VK_BROWSER_SEARCH);
			输入流检测.检测是否按下(137, VK_BROWSER_FAVORITES);
			输入流检测.检测是否按下(138, VK_BROWSER_HOME);
			输入流检测.检测是否按下(139, VK_VOLUME_MUTE);
			输入流检测.检测是否按下(140, VK_VOLUME_DOWN);
			输入流检测.检测是否按下(141, VK_VOLUME_UP);
			输入流检测.检测是否按下(142, VK_MEDIA_NEXT_TRACK);
			输入流检测.检测是否按下(143, VK_MEDIA_PREV_TRACK);
			输入流检测.检测是否按下(144, VK_MEDIA_STOP);
			输入流检测.检测是否按下(145, VK_MEDIA_PLAY_PAUSE);
			输入流检测.检测是否按下(146, VK_LAUNCH_MAIL);
			输入流检测.检测是否按下(147, VK_LAUNCH_MEDIA_SELECT);
			输入流检测.检测是否按下(148, VK_LAUNCH_APP1);
			输入流检测.检测是否按下(149, VK_LAUNCH_APP2);
			输入流检测.检测是否按下(150, VK_OEM_1);
			输入流检测.检测是否按下(151, VK_OEM_PLUS);
			输入流检测.检测是否按下(152, VK_OEM_COMMA);
			输入流检测.检测是否按下(153, VK_OEM_MINUS);
			输入流检测.检测是否按下(154, VK_OEM_PERIOD);
			输入流检测.检测是否按下(155, VK_OEM_2);
			输入流检测.检测是否按下(156, VK_OEM_3);
			输入流检测.检测是否按下(157, VK_OEM_4);
			输入流检测.检测是否按下(158, VK_OEM_5);
			输入流检测.检测是否按下(159, VK_OEM_6);
			输入流检测.检测是否按下(160, VK_OEM_7);
			输入流检测.检测是否按下(161, VK_OEM_8);
			输入流检测.检测是否按下(162, VK_OEM_102);
			输入流检测.检测是否按下(163, VK_PROCESSKEY);
			输入流检测.检测是否按下(164, VK_PACKET);
			输入流检测.检测是否按下(165, VK_ATTN);
			输入流检测.检测是否按下(166, VK_CRSEL);
			输入流检测.检测是否按下(167, VK_EXSEL);
			输入流检测.检测是否按下(168, VK_EREOF);
			输入流检测.检测是否按下(169, VK_PLAY);
			输入流检测.检测是否按下(170, VK_ZOOM);
			输入流检测.检测是否按下(171, VK_NONAME);
			输入流检测.检测是否按下(172, VK_PA1);
			输入流检测.检测是否按下(173, VK_OEM_CLEAR);
			//不是方法
			//if (_kbhit()) {
			//	输入流检测.现在[174] = 1;
			//	if (输入流检测.现在[174] != 输入流检测.之前[174])
			//		//print();
			//		输入流检测.按下 = 1;
			//}
			//else 输入流检测.现在[174] = 0;
		}

		//按下=1输出, 再刷新一次
		if (输入流检测.按下 == 1) 
		{
			输入流检测.写入输入流存档();
			//输入流检测.cout输入流存档();

//////////////在按下键时 是否应该重命名 
			GetLocalTime(&sys);
				//if (sys.wHour == 重命名时时间wHour加1) 
			if (重命名时时间wHour加1 == sys.wHour ) //1重命名 和 2重命名 
			{
			cout << sys.wHour<<"\n"; //ceui
			//pjdyismymy: //判定_重命名 跳转
				//第一次 时间 判定
				//整点 如果时间为 xx:00		if (sys.wHour % 1 == 0) 
				//新建一层 文件夹
					//每日文件夹名称 = "/";
					//每日文件夹名称.append(to_string(sys.wYear));
					//每日文件夹名称.append(".");
					//每日文件夹名称.append(to_string(sys.wMonth));
					//每日文件夹名称.append(".");
					//每日文件夹名称.append(to_string(sys.wDay));
					//每日文件夹名称.append("/");
				// 重命名 \文件名-> 文件名当前时间
				//文件名当前时间 = 输入流检测.文件名当前时间;
				//文件名当前时间.erase(0, 100);
				文件名当前时间 = "/";
					文件名当前时间.append(to_string(sys.wYear));
					文件名当前时间.append(".");
					文件名当前时间.append(to_string(sys.wMonth));
					文件名当前时间.append(".");
					文件名当前时间.append(to_string(sys.wDay));
					文件名当前时间.append(" ");
				文件名当前时间.append(to_string(sys.wHour)); //h
				//文件名当前时间.append(":"); //出错
				//文件名当前时间.append("\\:"); //出错
				文件名当前时间.append(".");
				文件名当前时间.append(to_string(sys.wMinute)); //m
				//文件名当前时间.append(".");
				文件名当前时间.append(" ");
				文件名当前时间.append(to_string(sys.wSecond));
				文件名当前时间.append(".");
				文件名当前时间.append(to_string(sys.wMilliseconds));
				文件名当前时间.append(".cpp");
				//路径 存档路径 重命名后
				//存档路径重命名后 = 盘符 + 输入流检测.存档路径无头尾 + 每日文件夹名称 + 文件名当前时间; //不起作用
				存档路径重命名后 = 盘符 + 输入流检测.存档路径无头尾 + 文件名当前时间;

				//命名失败返回-1，成功返回0
				//输入流存档.close();
				if (0 == rename(存档路径.c_str(), 存档路径重命名后.c_str())) //1== 里面 不会运行
				{
					//重命名时时间wMinute = sys.wMinute;
					//重命名时时间wMinute加15 = 重命名时时间wMinute + 15;

					//下次的 重命名的 时间 跳过0
					if (sys.wHour == 23)
					{
						重命名时时间wHour = 23;
						重命名时时间wHour加1 = 1;
					}
					else if (sys.wHour == 24)
					{
						重命名时时间wHour = 24;
						重命名时时间wHour加1 = 1;
					}
					else //如果0
					{
						重命名时时间wHour = sys.wHour;
						重命名时时间wHour加1 = 重命名时时间wHour + 1;
					}
					//创建新存档 0.cpp
					从头覆盖读写(输入流存档, 存档路径); //输入流存档<<存档路径
					输入流存档.close();
				}

			}
			//第一次后 判定生效用的是这个 \
			第二次判定 重命名时时间wMinute加15 会增加15的
			//else 

			



			输入流检测.按下 = 0;
			//刷新 = 1;
		}//检测到按键状态变化再打印
		输入流检测.之前和现在批量相等(175);

		Sleep(10);//循环时间间隔，防止太占内存 
	//}
	}

	输入流存档.close();
	return 0;
}