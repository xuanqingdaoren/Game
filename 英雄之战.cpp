#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <math.h>
using namespace std;
void out(string s="����",string a="white",bool d=true,long sudu=20);
void ziliao(void);
string yingxiong[5]={"����","����", "�ŷ�","����","��"};
int yingxiongzhi[5][5]=
{
    {1000,100,50,75,1},
    {1250,150,100,125,1},
    {1500,200,150,175,1},
    {1750,250,200,225,1},
    {2000,300,250,275,1}
};
string duanwei[7]={"��ǿ��ͭ","�������","��ҫ�ƽ�","��󲬽�","������ʯ","������ҫ","��ǿ����"};
string yanse[7]={"white","red","green","blue","yellow","pink","cyan"};
int duijushu=0;
int shengjushu=0;
int baijushu=0;
long jinbi=0;
int main()
{
        ziliao();
        out("��Ϸ����:","red");
        out("�����Ϸ������ѡ��һ��Ӣ�ۣ����˻����ж�ս��ÿ�غ϶���3�У�������ѡһ�У�ף����Ϸ���","blue");Sleep(1000);
        out("�Ծ���������ļ��𣬼���������м���Ӣ�ۿ�ѡ��","yellow");Sleep(1000);
        out("׼����ʼ��Ϸ",yanse[1]);Sleep(1000);system("CLS");
        out();
        srand(time(0));
        int qiandao=rand()%1000+200;
        cout<<"��ϲ�������ǩ�����"<<qiandao<<"���"<<endl;
        jinbi+=qiandao;
        while(true)
        {
                int jibie=duijushu/10+1;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
            cout<<"������"<<jibie<<"��"<<endl;
            cout<<"��λ��"<<duanwei[jibie-1]<<endl;
                cout<<"�Ծ�����"<<duijushu<<endl;
                cout<<"ʤ������"<<shengjushu<<endl;
                cout<<"�ܾ�����"<<baijushu<<endl;
                if(duijushu>0)
                cout<<"ʤ�ʣ�"<<shengjushu/duijushu*100<<"%"<<endl;
                else
                cout<<"��ʤ��"<<endl;
                cout<<"��ң�"<<jinbi<<endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            out("��ѡ��1-��ս 2-�鿴(����)Ӣ�� 3-ѵ����");
                int xuanze;
                cin>>xuanze;
                if(xuanze==1)
                {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            for(int i=0;i<jibie;i++)
            {
                cout<<i+1<<'.';
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"����"<<endl;
                cout<<"Ѫ����"<<yingxiongzhi[0]<<endl
                    <<"��������"<<yingxiongzhi[1]<<endl
                        <<"��������"<<yingxiongzhi[2]<<endl;
            }
            int wfyxz;
            out("����Ҫ��һ��Ӣ�ۣ�",yanse[5]);
            cin>>wfyxz;
            int dfyx=rand()%5;
            int jbfw=yingxiongzhi[wfyxz-1][4]+3;
            int dfjb=rand()%jbfw+1;
            out("�з�ѡ����",yanse[6],false);
            out(yingxiong[dfyx],yanse[0],false);
            cout<<"��"<<dfjb<<"����"<<endl;
            int zhaoshubeishu=pow(2,(dfjb-1));
            int xueliangjibie=500*(jibie-1);
            Sleep(500);
            int wfxl=yingxiongzhi[wfyxz-1][0];
            int dfxl=(yingxiongzhi[dfyx][0]+xueliangjibie);
            int huihe=1;
            Sleep(1000);
            system("CLS");
            out("Ӣ���ǣ�ս���ɣ���������","yellow",true,100);
            while(wfxl>0&&dfxl>0)
            {
                    out("�����ǵ�",yanse[2],false);
                    cout<<huihe;
                    out("�غ�",yanse[2]);
                    cout<<"�з�Ѫ����"<<dfxl<<endl<<"�ҷ�Ѫ����"<<wfxl<<endl;
                    out("�ҷ�������",yanse[3]);
                        cout<<"1.�����������Է�"<<yingxiongzhi[wfyxz-1][1]<<endl
                            <<"2.������Ѫ����"<<yingxiongzhi[wfyxz-1][2]<<endl
                                <<"3.���ã������Է�"<<yingxiongzhi[wfyxz-1][3]<<"Ѫ����"<<yingxiongzhi[wfyxz-1][3]<<endl;
                        out("��Ҫ����һ�У�");
                        int zhaoshu;
                        cin>>zhaoshu;
                        if(zhaoshu==1)
                        {
                                out("���гɹ�",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        else if(zhaoshu==2)
                        {
                                out("���гɹ�",yanse[4]);
                            wfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        else if(zhaoshu==3)
                        {
                                out("���гɹ�",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][3];
                                wfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        else
                        {
                            out("���˷���һ�γ��л���",yanse[4]);
                    }
                        int dfzs=rand()%3;
                        if(dfzs==0)
                        {
                                out("�з����˹�����",yanse[4]);
                                wfxl-=(yingxiongzhi[dfyx][1]*zhaoshubeishu);
                        }
                        if(dfzs==1)
                        {
                                out("�з����˷�����",yanse[4]);
                                dfxl+=(yingxiongzhi[dfyx][2]*zhaoshubeishu);
                        }
                        if(dfzs==2)
                        {
                                out("�з�����������",yanse[4]);
                                wfxl-=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                                dfxl+=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                        }
                        out("���غϽ���",yanse[5]);
                        huihe+=1;
                        Sleep(1000);
                        system("CLS");
        }
        if(wfxl<=0&&dfxl>0)
        {
                out("��ս����","red",true,50);
                        duijushu+=1;
                        baijushu+=1;
                        jinbi+=200;
                }
                if(dfxl<=0&&wfxl>0)
        {
                out("��ʤ����","red",true,50);
                        duijushu+=1;
                        shengjushu+=1;
                        jinbi+=1000;
                }
                if(dfxl<=0&&wfxl<=0)
                {
                        out("��ʤ����","red",true,50);
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
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"����"<<endl;
                cout<<"Ѫ����"<<yingxiongzhi[0]<<endl
                        <<"��������"<<yingxiongzhi[1]<<endl
                            <<"��������"<<yingxiongzhi[2]<<endl;
                        cout<<"��������"<<(i+1)*500<<"���(�밴"<<i+1<<")"<<endl;
                }
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
                cout<<"�����밴1���������밴2"<<endl;
                        int w;
                        cin>>w;
                        if(w==1)
                        {
                        cout<<"������һ�"<<endl;
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
                cout<<"�����ɹ���";
                Sleep(1000);
                system("CLS");
                continue;
                }
                if(yingxiongzhi[x-1][4]>15)
                {
                        cout<<"�����ˣ�����ʲô��"<<endl;
                        system("CLS");
                        }
                if(jinbi<x*500)
                {
                    cout<<"��Ǹ����ûǮ���޷��������Ծֿ���׬Ǯ"<<endl;
                    Sleep(1000);
                    system("CLS");
                        }
                }
                if(w==2)
                {
                   cout<<"������ת"<<endl;
                   Sleep(1000);
                   system("CLS");
                }   
                }
   if(xuanze==3)
                {
                        int qiangdu;
                        cout<<"��ѡ��ǿ�ȣ�1-�� 2-ǿ"<<endl;
                        cin>>qiangdu;
                if(qiangdu==1)
                {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            for(int i=0;i<jibie;i++)
            {
                cout<<i+1<<'.';
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"����"<<endl;
                cout<<"Ѫ����"<<yingxiongzhi[0]<<endl
                    <<"��������"<<yingxiongzhi[1]<<endl
                        <<"��������"<<yingxiongzhi[2]<<endl;
            }
            int wfyxz;
            out("����Ҫ��һ��Ӣ�ۣ�",yanse[5]);
            cin>>wfyxz;
            out("����ѡ���˺���һģһ����Ӣ��",yanse[6],false);
            Sleep(500);
            int wfxl=yingxiongzhi[wfyxz-1][0];
            int dfxl=wfxl;
            int huihe=1;
            Sleep(1000);
            system("CLS");
            out("Ӣ���ǣ�ս���ɣ���������","yellow",true,100);
            while(wfxl>0&&dfxl>0)
            {
                    out("�����ǵ�",yanse[2],false);
                    cout<<huihe;
                    out("�غ�",yanse[2]);
                    cout<<"�з�Ѫ����"<<dfxl<<endl<<"�ҷ�Ѫ����"<<wfxl<<endl;
                    out("�ҷ�������",yanse[3]);
                        cout<<"1.�����������Է�"<<yingxiongzhi[wfyxz-1][1]<<endl
                            <<"2.������Ѫ����"<<yingxiongzhi[wfyxz-1][2]<<endl
                                <<"3.���ã������Է�"<<yingxiongzhi[wfyxz-1][3]<<"Ѫ����"<<yingxiongzhi[wfyxz-1][3]<<endl;
                        out("��Ҫ����һ�У�");
                        int zhaoshu;
                        cin>>zhaoshu;
                        if(zhaoshu==1)
                        {
                                out("���гɹ�",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        else if(zhaoshu==2)
                        {
                                out("���гɹ�",yanse[4]);
                            wfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        else if(zhaoshu==3)
                        {
                                out("���гɹ�",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][3];
                                wfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        else
                        {
                            out("���˷���һ�γ��л���",yanse[4]);
                    }
                        int dfzs=rand()%3;
                        if(dfzs==0)
                        {
                                out("�������˹�����",yanse[4]);
                                wfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        if(dfzs==1)
                        {
                                out("�������˷�����",yanse[4]);
                                dfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        if(dfzs==2)
                        {
                                out("��������������",yanse[4]);
                                wfxl-=yingxiongzhi[wfyxz-1][3];
                                dfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        out("���غϽ���",yanse[5]);
                        huihe+=1;
                        Sleep(2000);
                        system("CLS");
        }
        if(wfxl<=0&&dfxl>0)
        {
                out("��ս����","red",true,50);
                }
                if(dfxl<=0&&wfxl>0)
        {
                out("��ʤ����","red",true,50);
                }
                if(dfxl<=0&&wfxl<=0)
                {
                        out("��ʤ����","red",true,50);
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
                cout<<yingxiong<<"("<<yingxiongzhi[4]<<"����"<<endl;
                cout<<"Ѫ����"<<yingxiongzhi[0]<<endl
                    <<"��������"<<yingxiongzhi[1]<<endl
                        <<"��������"<<yingxiongzhi[2]<<endl;
            }
            int wfyxz;
            out("����Ҫ��һ��Ӣ�ۣ�",yanse[5]);
            cin>>wfyxz;
            int dfyx=rand()%2;
            int dfjb=yingxiongzhi[wfyxz-1][4]+2;
            out("����ѡ����",yanse[6],false);
            out(yingxiong[dfyx],yanse[0],false);
            cout<<"��"<<dfjb<<"����"<<endl;
            int zhaoshubeishu=pow(2,(dfjb-1));
            int xueliangjibie=500*(jibie-1);
            Sleep(500);
            int wfxl=yingxiongzhi[wfyxz-1][0];
            int dfxl=(yingxiongzhi[dfyx][0]+xueliangjibie);
            int huihe=1;
            Sleep(1000);
            system("CLS");
            out("Ӣ���ǣ�ս���ɣ���������","yellow",true,100);
            while(wfxl>0&&dfxl>0)
            {
                    out("�����ǵ�",yanse[2],false);
                    cout<<huihe;
                    out("�غ�",yanse[2]);
                    cout<<"�з�Ѫ����"<<dfxl<<endl<<"�ҷ�Ѫ����"<<wfxl<<endl;
                    out("�ҷ�������",yanse[3]);
                        cout<<"1.�����������Է�"<<yingxiongzhi[wfyxz-1][1]<<endl
                            <<"2.������Ѫ����"<<yingxiongzhi[wfyxz-1][2]<<endl
                                <<"3.���ã������Է�"<<yingxiongzhi[wfyxz-1][3]<<"Ѫ����"<<yingxiongzhi[wfyxz-1][3]<<endl;
                        out("��Ҫ����һ�У�");
                        int zhaoshu;
                        cin>>zhaoshu;
                        if(zhaoshu==1)
                        {
                                out("���гɹ�",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][1];
                        }
                        else if(zhaoshu==2)
                        {
                                out("���гɹ�",yanse[4]);
                            wfxl+=yingxiongzhi[wfyxz-1][2];
                        }
                        else if(zhaoshu==3)
                        {
                                out("���гɹ�",yanse[4]);
                                dfxl-=yingxiongzhi[wfyxz-1][3];
                                wfxl+=yingxiongzhi[wfyxz-1][3];
                        }
                        else
                        {
                            out("���˷���һ�γ��л���",yanse[4]);
                    }
                        int dfzs=rand()%3;
                        if(dfzs==0)
                        {
                                out("�������˹�����",yanse[4]);
                                wfxl-=(yingxiongzhi[dfyx][1]*zhaoshubeishu);
                        }
                        if(dfzs==1)
                        {
                                out("�������˷�����",yanse[4]);
                                dfxl+=(yingxiongzhi[dfyx][2]*zhaoshubeishu);
                        }
                        if(dfzs==2)
                        {
                                out("��������������",yanse[4]);
                                wfxl-=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                                dfxl+=(yingxiongzhi[wfyxz-1][3]*zhaoshubeishu);
                        }
                        out("���غϽ���",yanse[5]);
                        huihe+=1;
                        Sleep(1000);
                        system("CLS");
        }
        if(wfxl<=0&&dfxl>0)
        {
                out("��ս����","red",true,50);
                }
                if(dfxl<=0&&wfxl>0)
        {
                out("��ʤ����","red",true,50);
            }
            if(dfxl<=0&&wfxl<=0)
                {
                        out("��ʤ����","red",true,50);
                }
                Sleep(1000);
                system("CLS");
                }
                }       
    }
}
void out(string s,string a,bool d,long sudu)
{
    if(s!="����")
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
        cout<<"������";
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
    out("���ϣ�","red");
        out("1. ��Ϸ����Ӣ��֮ս","blue");
        out("2. �����ߣ�HUC.����","yellow");
        out("3. �����������ߣ���Ϸ�����й�","pink");
        out("4. ���������䣺100��","cyan");
        Sleep(1000);
        system("CLS");
}


