#include "StdAfx.h"

#include <iostream>
#include <ctime>
#include <cstdio> 
#include <cstdlib>

#include "Match.h"
#include "Piece.h"
#include "Ju.h"
#include "Ma.h"
#include "Pao.h"
#include "Shi.h"
#include "Shuai.h"
#include "Xiang.h"
#include "Bing.h"

static const char* sEndInfo[3] = {"���壡", "�췽ʤ��", "�ڷ�ʤ��"};

CMatch::CMatch(void):m_vPieces(33),m_iGoSide(RED)
{
    memset(m_sMatchID, 0, sizeof(m_sMatchID));

    for(size_t i = 0; i < m_vPieces.size(); i++)
    {
        m_vPieces[i] = NULL;
    }
}

CMatch::~CMatch(void)
{
    clean();
}

const CChnChessTable& CMatch::getTable()
{
    return m_vTable;
}

CPiece* CMatch::getPieceByName(int iPieceName)
{
    return m_vPieces[iPieceName];
}

bool CMatch::init()
{
    
    createMatchID();

    //��ʼ��������־�ļ�
    char sMatchLogFile[NORMAL_BUF_SIZE + 1] = {0};
    sprintf(sMatchLogFile, "match%s.txt", m_sMatchID);
    m_logMatch.openLogFile(sMatchLogFile);

    m_logMatch.logInfo("��ֿ�ʼ");

    //��ʼ������
    m_vTable.init();
    m_logMatch.logInfo("��ʼ���������");

    //��ʼ������
    CPiece* pPiece = NULL;
    bool binitResult = true;

    //�췽
    pPiece = new CJu();
    binitResult = binitResult && initPiece(JU_LEFT_RED, RED, 0, 0, pPiece);

    pPiece = new CJu();
    binitResult = binitResult && initPiece(JU_RIGHT_RED, RED, 0, 8, pPiece);

    pPiece = new CMa();
    binitResult = binitResult && initPiece(MA_LEFT_RED, RED, 0, 1, pPiece);

    pPiece = new CMa();
    binitResult = binitResult && initPiece(MA_RIGHT_RED, RED, 0, 7, pPiece);

    pPiece = new CXiang();
    binitResult = binitResult && initPiece(XIANG_LEFT_RED, RED, 0, 2, pPiece);

    pPiece = new CXiang();
    binitResult = binitResult && initPiece(XIANG_RIGHT_RED, RED, 0, 6, pPiece);

    pPiece = new CShi();
    binitResult = binitResult && initPiece(SHI_LEFT_RED, RED, 0, 3, pPiece);

    pPiece = new CShi();
    binitResult = binitResult && initPiece(SHI_RIGHT_RED, RED, 0, 5, pPiece);

    pPiece = new CShuai();
    binitResult = binitResult && initPiece(SHUAI_RED, RED, 0, 4, pPiece);

    pPiece = new CPao();
    binitResult = binitResult && initPiece(PAO_LEFT_RED, RED, 2, 1, pPiece);

    pPiece = new CPao();
    binitResult = binitResult && initPiece(PAO_RIGHT_RED, RED, 2, 7, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(BING_ONE_RED, RED, 3, 0, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(BING_TWO_RED, RED, 3, 2, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(BING_THREE_RED, RED, 3, 4, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(BING_FOUR_RED, RED, 3, 6, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(BING_FIVE_RED, RED, 3, 8, pPiece);

    //�ڷ�
    pPiece = new CJu();
    binitResult = binitResult && initPiece(JU_LEFT_BLACK, BLACK, 9, 0, pPiece);

    pPiece = new CJu();
    binitResult = binitResult && initPiece(JU_RIGHT_BLACK, BLACK, 9, 8, pPiece);

    pPiece = new CMa();
    binitResult = binitResult && initPiece(MA_LEFT_BLACK, BLACK, 9, 1, pPiece);

    pPiece = new CMa();
    binitResult = binitResult && initPiece(MA_RIGHT_BLACK, BLACK, 9, 7, pPiece);

    pPiece = new CXiang();
    binitResult = binitResult && initPiece(XIANG_LEFT_BLACK, BLACK, 9, 2, pPiece);

    pPiece = new CXiang();
    binitResult = binitResult && initPiece(XIANG_RIGHT_BLACK, BLACK, 9, 6, pPiece);

    pPiece = new CShi();
    binitResult = binitResult && initPiece(SHI_LEFT_BLACK, BLACK, 9, 3, pPiece);

    pPiece = new CShi();
    binitResult = binitResult && initPiece(SHI_RIGHT_BLACK, BLACK, 9, 5, pPiece);

    pPiece = new CShuai();
    binitResult = binitResult && initPiece(JIANG_BLACK, BLACK, 9, 4, pPiece);

    pPiece = new CPao();
    binitResult = binitResult && initPiece(PAO_LEFT_BLACK, BLACK, 7, 1, pPiece);

    pPiece = new CPao();
    binitResult = binitResult && initPiece(PAO_RIGHT_BLACK, BLACK, 7, 7, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(ZU_ONE_BLACK, BLACK, 6, 0, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(ZU_TWO_BLACK, BLACK, 6, 2, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(ZU_THREE_BLACK, BLACK, 6, 4, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(ZU_FOUR_BLACK, BLACK, 6, 6, pPiece);

    pPiece = new CBing();
    binitResult = binitResult && initPiece(ZU_FIVE_BLACK, BLACK, 6, 8, pPiece);

    pPiece = NULL;

    if(binitResult)
    {
        m_vTable.print();
    }

    m_logMatch.logInfo("��ʼ���������");
    return binitResult;
}

void CMatch::go(int iPieceName, TPosition pos)
{
    m_logMatch.logDebug("����CMatch::go����");
    CPiece* pPiece = m_vPieces[iPieceName];
    if(NULL == pPiece)
    {
        return;
    }

    //����Ƿ񱾷�����
    if(m_iGoSide != pPiece->getType())
    {
        m_logMatch.logInfo("�Է�����");
        return;
    }

    TStepInfo step;
    step.m_Src = pPiece->getPos();
    step.m_Des = pos;
    step.m_iPiece = iPieceName;
    step.m_iDesPiece = m_vTable.getPieceNameByPos(pos);

    if(pPiece->move(pos, this))
    {
        swapGoSide(m_iGoSide);

        //����ǳ��ӣ��ѱ��Ե��ӵ�λ���Ƶ������⡣
        if(NO_PIECE != step.m_iDesPiece)
        {
            m_logMatch.logInfo("�����Ե��ӵ�λ���Ƶ�������");
            CPiece* tmpPtrPiece = getPieceByName(step.m_iDesPiece);
            if(NULL != tmpPtrPiece)
            {
                TPosition tmpPos;
                tmpPos.col = -1;
                tmpPos.row = -1;
                tmpPtrPiece->setPos(tmpPos);
            }
        }

        saveToHistory(step);

        step.m_iDesPiece = NO_PIECE; //��������ʱ��Ҫ�ѳ���λ���ÿ�
        m_vTable.update(step);

        m_vTable.print();
        
        int iType = pPiece->getType();
        if(isEnd(iType))
        {
            m_logMatch.logInfo(sEndInfo[iType]);
            std::cout<<sEndInfo[iType]<<std::endl;
        }
    }

}

void CMatch::saveToHistory(TStepInfo step)
{
    m_logMatch.logDebug("����CMatch::saveToHistory����");
    m_logMatch.logInfo("�������岽��");
    m_stackHistory.push(step);
}

bool CMatch::isEnd(int iType)
{
    m_logMatch.logDebug("����CMatch::isEnd����");

    //���iType����һ����˧�����������ˣ������
    CPiece* tmpPtrPiece = NULL;
    TPosition tmpPos;
    if(RED == iType)
    {
        tmpPtrPiece = getPieceByName(JIANG_BLACK);
        if(NULL != tmpPtrPiece)
        {
            tmpPos = tmpPtrPiece->getPos();
            if(tmpPos.row != -1)
            {
                return false;
            }
        }
    }
    else if(BLACK == iType)
    {
        tmpPtrPiece = getPieceByName(SHUAI_RED);
        if(NULL != tmpPtrPiece)
        {
            tmpPos = tmpPtrPiece->getPos();
            if(tmpPos.row != -1)
            {
                return false;
            }
        }
    }
    else
    {
        m_logMatch.logError("�����쳣");
    }

    return true;
}

void CMatch::goBack()
{
    m_logMatch.logDebug("����CMatch::goBack����");

    if(m_stackHistory.empty())
    {
        return;
    }

    //�����һ�����ջ
    TStepInfo step = m_stackHistory.top();
    m_stackHistory.pop();

    //��������λ������
    CPiece* tmpPtrPiece = getPieceByName(step.m_iDesPiece);
    if(NULL != tmpPtrPiece)
    {
        tmpPtrPiece->setPos(step.m_Des);
    }
    tmpPtrPiece = getPieceByName(step.m_iPiece);
    tmpPtrPiece->setPos(step.m_Src);
    swapGoSide(m_iGoSide);   //�������巽

    //�������ϵ������˻�ԭ��λ��
    int iPiece = step.m_iDesPiece;
    step.m_iDesPiece = step.m_iPiece;
    step.m_iPiece = iPiece;
    m_vTable.update(step);

    //���´�ӡ����
    m_vTable.print();
}

bool CMatch::initPiece(int iName, int iType, int iRow, int iCol, CPiece* pPiece)
{
    m_logMatch.logDebug("����CMatch::initPiece����");

    if( NULL == pPiece)
    {
        m_logMatch.logInfo("��ʼ������ʧ��");
        return false;
    }
    pPiece->setName(iName);
    pPiece->setType(iType);
    TPosition pos;
    pos.row = iRow;
    pos.col = iCol;
    pPiece->setPos(pos);
    m_vPieces[iName] = pPiece;

    return true;
}

void CMatch::clean()
{
    for(size_t i = 0; i < m_vPieces.size(); i++)
    {
        if(NULL != m_vPieces[i])
        {
            delete m_vPieces[i];
            m_vPieces[i] = NULL;
        }
    }
}

void CMatch::finish()
{
    m_logMatch.logDebug("����CMatch::finish����");
    m_logMatch.logInfo("��ֽ���");

    if(NULL != this)
    {
        delete this;
    }
}

void CMatch::swapGoSide(int iType)
{
    m_logMatch.logDebug("����CMatch::swapGoSide����");

    if(RED == iType)
    {
        m_logMatch.logInfo("�ֵ��ڷ���");
        m_iGoSide = BLACK;
    }
    else if(BLACK == iType)
    {
        m_logMatch.logInfo("�ֵ��췽��");
        m_iGoSide = RED;
    }
    else
    {
        m_logMatch.logError("�����쳣");
    }
}

//�������ֱ���ID��yyyymmddhhmmss+4λ1000~9999�����
//���������������־������IDʱ����־�ļ���û�д���
void CMatch::createMatchID()
{
    time_t nowtime = time(0);
    struct tm _tm;
    localtime_s(&_tm, &nowtime);
    strftime(m_sMatchID, NORMAL_BUF_SIZE, "%Y%m%d%H%M%S", &_tm); 

    srand((unsigned)time(NULL));
    int iRandom = (double)rand() / (RAND_MAX + 1) * (9999 - 1000) + 1000;
    sprintf(m_sMatchID, "%s%4d", m_sMatchID, iRandom);

}

CLog& CMatch::getLogHandle()
{
    return m_logMatch;
}
