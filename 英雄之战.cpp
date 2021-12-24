#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <math.h>
using namespace std;
void out(string s="加载",string a="white",bool d=true,long sudu=20);
void ziliao(void);
string yingxiong[5]={"黄忠","关羽", "张飞","赵云","马超"};
int yingxiongzhi[5][5]=
{
    {1000,100,50,75,1},
    {1250,150,100,125,1},
    {1500,200,150,175,1},
    {1750,250,200,225,1},
    {2000,300,250,275,1}
};
string duanwei[7]={"倔强青铜","秩序白银","荣耀黄金","尊贵铂金","永恒钻石","至尊星耀","最强王者"};
string yanse[7]={"white","red","green","blue","yellow","pink","cyan"};
int duijushu=0;
int shengjushu=0;
int baijushu=0;
long jinbi=0;
int main()
{
        ziliao();
        out("游戏规则:","red");
        out("这款游戏会让你选择一款英雄，与人机进行对战，每回合都有3招，由您任选一招，祝您游戏愉快","blue");Sleep(1000);
        out("对局数决定你的级别，级别决定你有几个英雄可选择","yellow");Sleep(1000);
        out("准备开始游戏",yanse[1]);Sleep(1000);system("CLS");
        out();
        srand(time(0));
        int qiandao=rand()%1000+200;
        cout<<"恭喜你你今天签到获得"<<qiandao<<"金币"<<endl;
        jinbi+=qiandao;
        while(true)
        {
                int jibie=duijushu/10+1;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
            cout<<"你现在"<<jibie<<"级"<<endl;
            cout<<"段位："<<duanwei[jibie-1]<<endl;
                cout<<"对局数："<<duijushu<<endl;
                cout<<"胜局数："<<shengjushu<<endl;
                cout<<"败局数："<<baijushu<<endl;
                if(duijushu>0)
                cout<<"胜率："<<shengjushu/duijushu*100<<"%"<<endl;
                else
                cout<<"无胜率"<<endl;
                cout<<"金币："<<jinbi<<endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            out("请选择：1-对战 2-查看(升级)英雄 3-训练场");
                int xuanze;
                cin>>xuanze;
                if(xuanze==1)
                {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            for(int i=0;i<jibie;i++)
            {
                cout<<i+1<<'.';
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"级）"<<endl;
                cout<<"血量："<<yingxiongzhi[0]<<endl
                    <<"攻击力："<<yingxiongzhi[1]<<endl
                        <<"防御力："<<yingxiongzhi[2]<<endl;
            }
            int wfyxz;
            out("你想要哪一个英雄？",yanse[5]);
            cin>>wfyxz;
            int dfyx=rand()%5;
            int jbfw=yingxiongzhi[wfyxz-1][4]+3;
            int dfjb=rand()%jbfw+1;
            out("敌方选择了",yanse[6],false);
            out(yingxiong[dfyx],yanse[0],false);
            cout<<"（"<<dfjb<<"级）"<<endl;
            int zhaoshubeishu=pow(2,(dfjb-1));
            int xueliangjibie=500*(jibie-1);
            Sleep(500);
            int wfxl=yingxiongzhi[wfyxz-1][0];
            int dfxl=(yingxiongzhi[dfyx][0]+xueliangjibie);
            int huihe=1;
            Sleep(1000);
            system("CLS");
            out("英雄们，战斗吧！！！！！","yellow",true,100);
            while(wfxl>0&&dfxl>0)
            {
                    out("现在是第",yanse[2],false);
                    cout<<huihe;
                    out("回合",yanse[2]);
                    cout<<"敌方血量："<<dfxl<<endl<<"我方血量；"<<wfxl<<endl;
                    out("我方招数：",yanse[3]);
                        cout<<"1.攻击：攻击对方"<<yingxiongzhi[wfyxz-1][1]<<endl
                            <<"2.防御：血量加"<<yingxiongzhi[wfyxz-1][2]<<endl
                                <<"3.连用：攻击对方"<<yingxiongzhi[wfyxz-1][3]<<"血量加"<<yingxiongzhi[wfyxz-1][3]<<endl;
                        out("你要出哪一招？");
                        int zhaoshu;
                        cin>>zhaoshu;
                        if(zhaoshu==1)
                        {
                                out("出招成功",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        else if(zhaoshu==2)
                        {
                                out("出招成功",yanse[4]);
                            wfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        else if(zhaoshu==3)
                        {
                                out("出招成功",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][3];
                                wfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        else
                        {
                            out("你浪费了一次出招机会",yanse[4]);
                    }
                        int dfzs=rand()%3;
                        if(dfzs==0)
                        {
                                out("敌方出了攻击招",yanse[4]);
                                wfxl-=(yingxiongzhi[dfyx][1]*zhaoshubeishu);
                        }
                        if(dfzs==1)
                        {
                                out("敌方出了防御招",yanse[4]);
                                dfxl+=(yingxiongzhi[dfyx][2]*zhaoshubeishu);
                        }
                        if(dfzs==2)
                        {
                                out("敌方出了连用招",yanse[4]);
                                wfxl-=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                                dfxl+=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                        }
                        out("本回合结束",yanse[5]);
                        huihe+=1;
                        Sleep(1000);
                        system("CLS");
        }
        if(wfxl<=0&&dfxl>0)
        {
                out("你战败了","red",true,50);
                        duijushu+=1;
                        baijushu+=1;
                        jinbi+=200;
                }
                if(dfxl<=0&&wfxl>0)
        {
                out("你胜利了","red",true,50);
                        duijushu+=1;
                        shengjushu+=1;
                        jinbi+=1000;
                }
                if(dfxl<=0&&wfxl<=0)
                {
                        out("你胜利了","red",true,50);
                        duijushu+=1;
                        shengjushu+=1;
                        jinbi+=1000;
                }
                Sleep(1000);
                system("CLS");
            }
            if(xuanze==2)
            {
                    for(int i=0;i<jibie;i++)
                {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
                cout<<i+1<<'.';
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"级）"<<endl;
                cout<<"血量："<<yingxiongzhi[0]<<endl
                        <<"攻击力："<<yingxiongzhi[1]<<endl
                            <<"防御力："<<yingxiongzhi[2]<<endl;
                        cout<<"升级花费"<<(i+1)*500<<"金币(请按"<<i+1<<")"<<endl;
                }
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
                cout<<"升级请按1，不升级请按2"<<endl;
                        int w;
                        cin>>w;
                        if(w==1)
                        {
                        cout<<"升级哪一款？"<<endl;
                int x;
                cin>>x;
                if(jinbi>=x*500&&yingxiongzhi[x-1][4]<=15)
                {
                jinbi-=x*500;
                yingxiongzhi[x-1][4]+=1;
                yingxiongzhi[x-1][1]*=2;
                yingxiongzhi[x-1][2]*=2;
                yingxiongzhi[x-1][3]*=2;
                yingxiongzhi[x-1][0]+=500;
                cout<<"升级成功！";
                Sleep(1000);
                system("CLS");
                continue;
                }
                if(yingxiongzhi[x-1][4]>15)
                {
                        cout<<"满级了，升级什么？"<<endl;
                        system("CLS");
                        }
                if(jinbi<x*500)
                {
                    cout<<"抱歉，您没钱，无法升级，对局可以赚钱"<<endl;
                    Sleep(1000);
                    system("CLS");
                        }
                }
                if(w==2)
                {
                   cout<<"正在跳转"<<endl;
                   Sleep(1000);
                   system("CLS");
                }   
                }
   if(xuanze==3)
                {
                        int qiangdu;
                        cout<<"请选择强度：1-弱 2-强"<<endl;
                        cin>>qiangdu;
                if(qiangdu==1)
                {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            for(int i=0;i<jibie;i++)
            {
                cout<<i+1<<'.';
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"级）"<<endl;
                cout<<"血量："<<yingxiongzhi[0]<<endl
                    <<"攻击力："<<yingxiongzhi[1]<<endl
                        <<"防御力："<<yingxiongzhi[2]<<endl;
            }
            int wfyxz;
            out("你想要哪一个英雄？",yanse[5]);
            cin>>wfyxz;
            out("教练选择了和你一模一样的英雄",yanse[6],false);
            Sleep(500);
            int wfxl=yingxiongzhi[wfyxz-1][0];
            int dfxl=wfxl;
            int huihe=1;
            Sleep(1000);
            system("CLS");
            out("英雄们，战斗吧！！！！！","yellow",true,100);
            while(wfxl>0&&dfxl>0)
            {
                    out("现在是第",yanse[2],false);
                    cout<<huihe;
                    out("回合",yanse[2]);
                    cout<<"敌方血量："<<dfxl<<endl<<"我方血量；"<<wfxl<<endl;
                    out("我方招数：",yanse[3]);
                        cout<<"1.攻击：攻击对方"<<yingxiongzhi[wfyxz-1][1]<<endl
                            <<"2.防御：血量加"<<yingxiongzhi[wfyxz-1][2]<<endl
                                <<"3.连用：攻击对方"<<yingxiongzhi[wfyxz-1][3]<<"血量加"<<yingxiongzhi[wfyxz-1][3]<<endl;
                        out("你要出哪一招？");
                        int zhaoshu;
                        cin>>zhaoshu;
                        if(zhaoshu==1)
                        {
                                out("出招成功",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        else if(zhaoshu==2)
                        {
                                out("出招成功",yanse[4]);
                            wfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        else if(zhaoshu==3)
                        {
                                out("出招成功",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][3];
                                wfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        else
                        {
                            out("你浪费了一次出招机会",yanse[4]);
                    }
                        int dfzs=rand()%3;
                        if(dfzs==0)
                        {
                                out("教练出了攻击招",yanse[4]);
                                wfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        if(dfzs==1)
                        {
                                out("教练出了防御招",yanse[4]);
                                dfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        if(dfzs==2)
                        {
                                out("教练出了连用招",yanse[4]);
                                wfxl-=yingxiongzhi[wfyxz-1][3];
                                dfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        out("本回合结束",yanse[5]);
                        huihe+=1;
                        Sleep(2000);
                        system("CLS");
        }
        if(wfxl<=0&&dfxl>0)
        {
                out("你战败了","red",true,50);
                }
                if(dfxl<=0&&wfxl>0)
        {
                out("你胜利了","red",true,50);
                }
                if(dfxl<=0&&wfxl<=0)
                {
                        out("你胜利了","red",true,50);
                }
                Sleep(1000);
                system("CLS");
            }
            if(qiangdu==2)
                {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            for(int i=0;i<jibie;i++)
            {
                cout<<i+1<<'.';
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"级）"<<endl;
                cout<<"血量："<<yingxiongzhi[0]<<endl
                    <<"攻击力："<<yingxiongzhi[1]<<endl
                        <<"防御力："<<yingxiongzhi[2]<<endl;
            }
            int wfyxz;
            out("你想要哪一个英雄？",yanse[5]);
            cin>>wfyxz;
            int dfyx=rand()%2;
            int dfjb=yingxiongzhi[wfyxz-1][4]+2;
            out("教练选择了",yanse[6],false);
            out(yingxiong[dfyx],yanse[0],false);
            cout<<"（"<<dfjb<<"级）"<<endl;
            int zhaoshubeishu=pow(2,(dfjb-1));
            int xueliangjibie=500*(jibie-1);
            Sleep(500);
            int wfxl=yingxiongzhi[wfyxz-1][0];
            int dfxl=(yingxiongzhi[dfyx][0]+xueliangjibie);
            int huihe=1;
            Sleep(1000);
            system("CLS");
            out("英雄们，战斗吧！！！！！","yellow",true,100);
            while(wfxl>0&&dfxl>0)
            {
                    out("现在是第",yanse[2],false);
                    cout<<huihe;
                    out("回合",yanse[2]);
                    cout<<"敌方血量："<<dfxl<<endl<<"我方血量；"<<wfxl<<endl;
                    out("我方招数：",yanse[3]);
                        cout<<"1.攻击：攻击对方"<<yingxiongzhi[wfyxz-1][1]<<endl
                            <<"2.防御：血量加"<<yingxiongzhi[wfyxz-1][2]<<endl
                                <<"3.连用：攻击对方"<<yingxiongzhi[wfyxz-1][3]<<"血量加"<<yingxiongzhi[wfyxz-1][3]<<endl;
                        out("你要出哪一招？");
                        int zhaoshu;
                        cin>>zhaoshu;
                        if(zhaoshu==1)
                        {
                                out("出招成功",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        else if(zhaoshu==2)
                        {
                                out("出招成功",yanse[4]);
                            wfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        else if(zhaoshu==3)
                        {
                                out("出招成功",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][3];
                                wfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        else
                        {
                            out("你浪费了一次出招机会",yanse[4]);
                    }
                        int dfzs=rand()%3;
                        if(dfzs==0)
                        {
                                out("教练出了攻击招",yanse[4]);
                                wfxl-=(yingxiongzhi[dfyx][1]*zhaoshubeishu);
                        }
                        if(dfzs==1)
                        {
                                out("教练出了防御招",yanse[4]);
                                dfxl+=(yingxiongzhi[dfyx][2]*zhaoshubeishu);
                        }
                        if(dfzs==2)
                        {
                                out("教练出了连用招",yanse[4]);
                                wfxl-=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                                dfxl+=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                        }
                        out("本回合结束",yanse[5]);
                        huihe+=1;
                        Sleep(1000);
                        system("CLS");
        }
        if(wfxl<=0&&dfxl>0)
        {
                out("你战败了","red",true,50);
                }
                if(dfxl<=0&&wfxl>0)
        {
                out("你胜利了","red",true,50);
            }
            if(dfxl<=0&&wfxl<=0)
                {
                        out("你胜利了","red",true,50);
                }
                Sleep(1000);
                system("CLS");
                }
                }       
    }
}
void out(string s,string a,bool d,long sudu)
{
    if(s!="加载")
    {
                if(a=="white")
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
                if(a=="red")
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
                if(a=="green")
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
                if(a=="blue")
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
                if(a=="yellow")
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
                if(a=="pink")
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
                if(a=="cyan")
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
        for(int q=0;q<=s.length();q++)
        {
            cout<<s[q];
            Sleep(sudu);
        }
        if(d==true)
            cout<<endl;
        if(d==false)
            return;
    }
        else
        {
        cout<<"加载中";
        for(int i=1;i<=5;i++)
        {
                cout<<"-";
                Sleep(1000);
        }
        system("CLS");
        }
}
void ziliao(void)
{
    out("资料：","red");
        out("1. 游戏名：英雄之战","blue");
        out("2. 开发者：HUC.玄青","yellow");
        out("3. 国籍（开发者，游戏）：中国","pink");
        out("4. 开发者年龄：100岁","cyan");
        Sleep(1000);
        system("CLS");
}


