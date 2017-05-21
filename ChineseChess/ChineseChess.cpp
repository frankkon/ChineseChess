// ChineseChess.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

#include "Match.h"

int _tmain(int argc, _TCHAR* argv[])
{
    CMatch* pMatch = new CMatch();
    if(NULL == pMatch)
    {
        std::cout<<"创建棋局失败！"<<std::endl;
    }

    pMatch->init();

    TPosition des;

    ////车测试
    //des.row = 8;
    //des.col = 8;
    //pMatch->go(JU_RIGHT_BLACK, des);
    //des.row = 8;
    //des.col = 5;
    //pMatch->go(JU_RIGHT_BLACK, des);
    //des.row = 5;
    //des.col = 5;
    //pMatch->go(JU_RIGHT_BLACK, des);
    //des.row = 4;
    //des.col = 5;
    //pMatch->go(JU_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 6;
    //des.col = 5;
    //pMatch->go(JU_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 5;
    //des.col = 4;
    //pMatch->go(JU_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 5;
    //des.col = 6;
    //pMatch->go(JU_RIGHT_BLACK, des);
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();

    ////卒兵测试
    //des.row = 7;
    //des.col = 8;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //des.row = 5;
    //des.col = 8;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //des.row = 4;
    //des.col = 8;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //des.row = 3;
    //des.col = 8;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //des.row = 3;
    //des.col = 7;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //des.row = 2;
    //des.col = 7;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //des.row = 6;
    //des.col = 7;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //des.row = 5;
    //des.col = 7;
    //pMatch->go(ZU_FIVE_BLACK, des);
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();

    ////马测试
    //des.row = 9;
    //des.col = 7;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //des.row = 7;
    //des.col = 6;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //des.row = 7;
    //des.col = 7;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //des.row = 5;
    //des.col = 5;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //des.row = 5;
    //des.col = 7;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //des.row = 8;
    //des.col = 4;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 6;
    //des.col = 4;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //pMatch->goBack();
    //des.row = 7;
    //des.col = 8;
    //pMatch->go(MA_RIGHT_BLACK, des);
    //des.row = 9;
    //des.col = 7;
    //pMatch->go(MA_RIGHT_BLACK, des);

    ////炮测试
    //des.row = 0;
    //des.col = 7;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 1;
    //des.col = 7;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 3;
    //des.col = 7;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 7;
    //des.col = 4;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 2;
    //des.col = 7;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 8;
    //des.col = 7;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 7;
    //des.col = 8;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 6;
    //des.col = 7;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 7;
    //des.col = 6;
    //pMatch->go(PAO_RIGHT_BLACK, des);
    //pMatch->goBack();

    ////士测试
    //des.row = 8;
    //des.col = 4;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //des.row = 7;
    //des.col = 3;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 7;
    //des.col = 5;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 9;
    //des.col = 3;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //des.row = 8;
    //des.col = 3;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //des.row = 8;
    //des.col = 5;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //des.row = 7;
    //des.col = 4;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //des.row = 9;
    //des.col = 4;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //pMatch->goBack();
    //des.row = 9;
    //des.col = 6;
    //pMatch->go(SHI_RIGHT_BLACK, des);
    //des.row = 8;
    //des.col = 6;
    //pMatch->go(SHI_RIGHT_BLACK, des);

    ////帅测试
    //des.row = 8;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 7;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 6;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 7;
    //des.col = 3;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 8;
    //des.col = 3;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 8;
    //des.col = 2;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 9;
    //des.col = 3;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 8;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 8;
    //des.col = 5;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 8;
    //des.col = 6;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 7;
    //des.col = 5;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 7;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 8;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 9;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 9;
    //des.col = 3;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 9;
    //des.col = 5;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 8;
    //des.col = 4;
    //pMatch->go(JIANG_BLACK, des);
    //des.row = 7;
    //des.col = 5;
    //pMatch->go(JIANG_BLACK, des);

    ////相测试
    //des.row = 7;
    //des.col = 4;
    //pMatch->go(XIANG_RIGHT_BLACK, des);
    //des.row = 5;
    //des.col = 6;
    //pMatch->go(XIANG_RIGHT_BLACK, des);
    //des.row = 3;
    //des.col = 4;
    //pMatch->go(XIANG_RIGHT_BLACK, des);
    //des.row = 3;
    //des.col = 8;
    //pMatch->go(XIANG_RIGHT_BLACK, des);
    //des.row = 7;
    //des.col = 8;
    //pMatch->go(XIANG_RIGHT_BLACK, des);
    //des.row = 9;
    //des.col = 6;
    //pMatch->go(XIANG_RIGHT_BLACK, des);
    //des.row = 7;
    //des.col = 5;
    //pMatch->go(XIANG_RIGHT_BLACK, des);
    //des.row = 2;
    //des.col = 0;
    //pMatch->go(XIANG_LEFT_RED, des);
    //des.row = 4;
    //des.col = 2;
    //pMatch->go(XIANG_LEFT_RED, des);
    //des.row = 2;
    //des.col = 4;
    //pMatch->go(XIANG_LEFT_RED, des);
    //des.row = 0;
    //des.col = 6;
    //pMatch->go(XIANG_LEFT_RED, des);
    //des.row = 4;
    //des.col = 6;
    //pMatch->go(XIANG_LEFT_RED, des);
    //des.row = 6;
    //des.col = 4;
    //pMatch->go(XIANG_LEFT_RED, des);
    //des.row = 6;
    //des.col = 8;
    //pMatch->go(XIANG_LEFT_RED, des);
    //des.row = 2;
    //des.col = 8;
    //pMatch->go(XIANG_LEFT_RED, des);

    //判负测试
    //炮吃帅
    des.row = 7;
    des.col = 5;
    pMatch->go(PAO_RIGHT_BLACK, des);
    des.row = 5;
    des.col = 5;
    pMatch->go(PAO_RIGHT_BLACK, des);
    des.row = 5;
    des.col = 4;
    pMatch->go(PAO_RIGHT_BLACK, des);
    des.row = 0;
    des.col = 4;
    pMatch->go(PAO_RIGHT_BLACK, des);
    pMatch->goBack();
    pMatch->goBack();

    pMatch->finish();
    pMatch = NULL;
	return 0;
}

