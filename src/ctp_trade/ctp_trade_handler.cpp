#include "ctp_trade_handler.h"

void ctp_trade_handle::OnFrontConnected()
{
    std::cout << "OnFrontConnected" << std::endl;
    Task task = Task();
    task.task_name = ONFRONTCONNECTED;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnFrontDisconnected(int nReason)
{
    Task task = Task();
    task.task_name = ONFRONTDISCONNECTED;
    task.task_id = nReason;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnHeartBeatWarning(int nTimeLapse)
{
    Task task = Task();
    task.task_name = ONHEARTBEATWARNING;
    task.task_id = nTimeLapse;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPAUTHENTICATE;
    if (pRspAuthenticateField)
    {
        CThostFtdcRspAuthenticateField *task_data = new CThostFtdcRspAuthenticateField();
        *task_data = *pRspAuthenticateField;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    std::cout << "OnRspUserLogin" << std::endl;
    Task task = Task();
    task.task_name = ONRSPUSERLOGIN;
    if (pRspUserLogin)
    {
        CThostFtdcRspUserLoginField *task_data = new CThostFtdcRspUserLoginField();
        *task_data = *pRspUserLogin;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPUSERLOGOUT;
    if (pUserLogout)
    {
        CThostFtdcUserLogoutField *task_data = new CThostFtdcUserLogoutField();
        *task_data = *pUserLogout;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPUSERPASSWORDUPDATE;
    if (pUserPasswordUpdate)
    {
        CThostFtdcUserPasswordUpdateField *task_data = new CThostFtdcUserPasswordUpdateField();
        *task_data = *pUserPasswordUpdate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPTRADINGACCOUNTPASSWORDUPDATE;
    if (pTradingAccountPasswordUpdate)
    {
        CThostFtdcTradingAccountPasswordUpdateField *task_data = new CThostFtdcTradingAccountPasswordUpdateField();
        *task_data = *pTradingAccountPasswordUpdate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPUSERAUTHMETHOD;
    if (pRspUserAuthMethod)
    {
        CThostFtdcRspUserAuthMethodField *task_data = new CThostFtdcRspUserAuthMethodField();
        *task_data = *pRspUserAuthMethod;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPGENUSERCAPTCHA;
    if (pRspGenUserCaptcha)
    {
        CThostFtdcRspGenUserCaptchaField *task_data = new CThostFtdcRspGenUserCaptchaField();
        *task_data = *pRspGenUserCaptcha;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPGENUSERTEXT;
    if (pRspGenUserText)
    {
        CThostFtdcRspGenUserTextField *task_data = new CThostFtdcRspGenUserTextField();
        *task_data = *pRspGenUserText;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPORDERINSERT;
    if (pInputOrder)
    {
        CThostFtdcInputOrderField *task_data = new CThostFtdcInputOrderField();
        *task_data = *pInputOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPPARKEDORDERINSERT;
    if (pParkedOrder)
    {
        CThostFtdcParkedOrderField *task_data = new CThostFtdcParkedOrderField();
        *task_data = *pParkedOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPPARKEDORDERACTION;
    if (pParkedOrderAction)
    {
        CThostFtdcParkedOrderActionField *task_data = new CThostFtdcParkedOrderActionField();
        *task_data = *pParkedOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPORDERACTION;
    if (pInputOrderAction)
    {
        CThostFtdcInputOrderActionField *task_data = new CThostFtdcInputOrderActionField();
        *task_data = *pInputOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQUERYMAXORDERVOLUME;
    if (pQueryMaxOrderVolume)
    {
        CThostFtdcQueryMaxOrderVolumeField *task_data = new CThostFtdcQueryMaxOrderVolumeField();
        *task_data = *pQueryMaxOrderVolume;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPSETTLEMENTINFOCONFIRM;
    if (pSettlementInfoConfirm)
    {
        CThostFtdcSettlementInfoConfirmField *task_data = new CThostFtdcSettlementInfoConfirmField();
        *task_data = *pSettlementInfoConfirm;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPREMOVEPARKEDORDER;
    if (pRemoveParkedOrder)
    {
        CThostFtdcRemoveParkedOrderField *task_data = new CThostFtdcRemoveParkedOrderField();
        *task_data = *pRemoveParkedOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPREMOVEPARKEDORDERACTION;
    if (pRemoveParkedOrderAction)
    {
        CThostFtdcRemoveParkedOrderActionField *task_data = new CThostFtdcRemoveParkedOrderActionField();
        *task_data = *pRemoveParkedOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPEXECORDERINSERT;
    if (pInputExecOrder)
    {
        CThostFtdcInputExecOrderField *task_data = new CThostFtdcInputExecOrderField();
        *task_data = *pInputExecOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPEXECORDERACTION;
    if (pInputExecOrderAction)
    {
        CThostFtdcInputExecOrderActionField *task_data = new CThostFtdcInputExecOrderActionField();
        *task_data = *pInputExecOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPFORQUOTEINSERT;
    if (pInputForQuote)
    {
        CThostFtdcInputForQuoteField *task_data = new CThostFtdcInputForQuoteField();
        *task_data = *pInputForQuote;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQUOTEINSERT;
    if (pInputQuote)
    {
        CThostFtdcInputQuoteField *task_data = new CThostFtdcInputQuoteField();
        *task_data = *pInputQuote;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQUOTEACTION;
    if (pInputQuoteAction)
    {
        CThostFtdcInputQuoteActionField *task_data = new CThostFtdcInputQuoteActionField();
        *task_data = *pInputQuoteAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPBATCHORDERACTION;
    if (pInputBatchOrderAction)
    {
        CThostFtdcInputBatchOrderActionField *task_data = new CThostFtdcInputBatchOrderActionField();
        *task_data = *pInputBatchOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPOPTIONSELFCLOSEINSERT;
    if (pInputOptionSelfClose)
    {
        CThostFtdcInputOptionSelfCloseField *task_data = new CThostFtdcInputOptionSelfCloseField();
        *task_data = *pInputOptionSelfClose;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPOPTIONSELFCLOSEACTION;
    if (pInputOptionSelfCloseAction)
    {
        CThostFtdcInputOptionSelfCloseActionField *task_data = new CThostFtdcInputOptionSelfCloseActionField();
        *task_data = *pInputOptionSelfCloseAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPCOMBACTIONINSERT;
    if (pInputCombAction)
    {
        CThostFtdcInputCombActionField *task_data = new CThostFtdcInputCombActionField();
        *task_data = *pInputCombAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYORDER;
    if (pOrder)
    {
        CThostFtdcOrderField *task_data = new CThostFtdcOrderField();
        *task_data = *pOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYTRADE;
    if (pTrade)
    {
        CThostFtdcTradeField *task_data = new CThostFtdcTradeField();
        *task_data = *pTrade;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINVESTORPOSITION;
    if (pInvestorPosition)
    {
        CThostFtdcInvestorPositionField *task_data = new CThostFtdcInvestorPositionField();
        *task_data = *pInvestorPosition;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYTRADINGACCOUNT;
    if (pTradingAccount)
    {
        CThostFtdcTradingAccountField *task_data = new CThostFtdcTradingAccountField();
        *task_data = *pTradingAccount;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINVESTOR;
    if (pInvestor)
    {
        CThostFtdcInvestorField *task_data = new CThostFtdcInvestorField();
        *task_data = *pInvestor;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYTRADINGCODE;
    if (pTradingCode)
    {
        CThostFtdcTradingCodeField *task_data = new CThostFtdcTradingCodeField();
        *task_data = *pTradingCode;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINSTRUMENTMARGINRATE;
    if (pInstrumentMarginRate)
    {
        CThostFtdcInstrumentMarginRateField *task_data = new CThostFtdcInstrumentMarginRateField();
        *task_data = *pInstrumentMarginRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINSTRUMENTCOMMISSIONRATE;
    if (pInstrumentCommissionRate)
    {
        CThostFtdcInstrumentCommissionRateField *task_data = new CThostFtdcInstrumentCommissionRateField();
        *task_data = *pInstrumentCommissionRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYEXCHANGE;
    if (pExchange)
    {
        CThostFtdcExchangeField *task_data = new CThostFtdcExchangeField();
        *task_data = *pExchange;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYPRODUCT;
    if (pProduct)
    {
        CThostFtdcProductField *task_data = new CThostFtdcProductField();
        *task_data = *pProduct;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINSTRUMENT;
    if (pInstrument)
    {
        CThostFtdcInstrumentField *task_data = new CThostFtdcInstrumentField();
        *task_data = *pInstrument;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYDEPTHMARKETDATA;
    if (pDepthMarketData)
    {
        CThostFtdcDepthMarketDataField *task_data = new CThostFtdcDepthMarketDataField();
        *task_data = *pDepthMarketData;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYSETTLEMENTINFO;
    if (pSettlementInfo)
    {
        CThostFtdcSettlementInfoField *task_data = new CThostFtdcSettlementInfoField();
        *task_data = *pSettlementInfo;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYTRANSFERBANK;
    if (pTransferBank)
    {
        CThostFtdcTransferBankField *task_data = new CThostFtdcTransferBankField();
        *task_data = *pTransferBank;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINVESTORPOSITIONDETAIL;
    if (pInvestorPositionDetail)
    {
        CThostFtdcInvestorPositionDetailField *task_data = new CThostFtdcInvestorPositionDetailField();
        *task_data = *pInvestorPositionDetail;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYNOTICE;
    if (pNotice)
    {
        CThostFtdcNoticeField *task_data = new CThostFtdcNoticeField();
        *task_data = *pNotice;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYSETTLEMENTINFOCONFIRM;
    if (pSettlementInfoConfirm)
    {
        CThostFtdcSettlementInfoConfirmField *task_data = new CThostFtdcSettlementInfoConfirmField();
        *task_data = *pSettlementInfoConfirm;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINVESTORPOSITIONCOMBINEDETAIL;
    if (pInvestorPositionCombineDetail)
    {
        CThostFtdcInvestorPositionCombineDetailField *task_data = new CThostFtdcInvestorPositionCombineDetailField();
        *task_data = *pInvestorPositionCombineDetail;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYCFMMCTRADINGACCOUNTKEY;
    if (pCFMMCTradingAccountKey)
    {
        CThostFtdcCFMMCTradingAccountKeyField *task_data = new CThostFtdcCFMMCTradingAccountKeyField();
        *task_data = *pCFMMCTradingAccountKey;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYEWARRANTOFFSET;
    if (pEWarrantOffset)
    {
        CThostFtdcEWarrantOffsetField *task_data = new CThostFtdcEWarrantOffsetField();
        *task_data = *pEWarrantOffset;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINVESTORPRODUCTGROUPMARGIN;
    if (pInvestorProductGroupMargin)
    {
        CThostFtdcInvestorProductGroupMarginField *task_data = new CThostFtdcInvestorProductGroupMarginField();
        *task_data = *pInvestorProductGroupMargin;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYEXCHANGEMARGINRATE;
    if (pExchangeMarginRate)
    {
        CThostFtdcExchangeMarginRateField *task_data = new CThostFtdcExchangeMarginRateField();
        *task_data = *pExchangeMarginRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYEXCHANGEMARGINRATEADJUST;
    if (pExchangeMarginRateAdjust)
    {
        CThostFtdcExchangeMarginRateAdjustField *task_data = new CThostFtdcExchangeMarginRateAdjustField();
        *task_data = *pExchangeMarginRateAdjust;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYEXCHANGERATE;
    if (pExchangeRate)
    {
        CThostFtdcExchangeRateField *task_data = new CThostFtdcExchangeRateField();
        *task_data = *pExchangeRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYSECAGENTACIDMAP;
    if (pSecAgentACIDMap)
    {
        CThostFtdcSecAgentACIDMapField *task_data = new CThostFtdcSecAgentACIDMapField();
        *task_data = *pSecAgentACIDMap;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYPRODUCTEXCHRATE;
    if (pProductExchRate)
    {
        CThostFtdcProductExchRateField *task_data = new CThostFtdcProductExchRateField();
        *task_data = *pProductExchRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYPRODUCTGROUP;
    if (pProductGroup)
    {
        CThostFtdcProductGroupField *task_data = new CThostFtdcProductGroupField();
        *task_data = *pProductGroup;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYMMINSTRUMENTCOMMISSIONRATE;
    if (pMMInstrumentCommissionRate)
    {
        CThostFtdcMMInstrumentCommissionRateField *task_data = new CThostFtdcMMInstrumentCommissionRateField();
        *task_data = *pMMInstrumentCommissionRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYMMOPTIONINSTRCOMMRATE;
    if (pMMOptionInstrCommRate)
    {
        CThostFtdcMMOptionInstrCommRateField *task_data = new CThostFtdcMMOptionInstrCommRateField();
        *task_data = *pMMOptionInstrCommRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINSTRUMENTORDERCOMMRATE;
    if (pInstrumentOrderCommRate)
    {
        CThostFtdcInstrumentOrderCommRateField *task_data = new CThostFtdcInstrumentOrderCommRateField();
        *task_data = *pInstrumentOrderCommRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYSECAGENTTRADINGACCOUNT;
    if (pTradingAccount)
    {
        CThostFtdcTradingAccountField *task_data = new CThostFtdcTradingAccountField();
        *task_data = *pTradingAccount;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYSECAGENTCHECKMODE;
    if (pSecAgentCheckMode)
    {
        CThostFtdcSecAgentCheckModeField *task_data = new CThostFtdcSecAgentCheckModeField();
        *task_data = *pSecAgentCheckMode;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYSECAGENTTRADEINFO;
    if (pSecAgentTradeInfo)
    {
        CThostFtdcSecAgentTradeInfoField *task_data = new CThostFtdcSecAgentTradeInfoField();
        *task_data = *pSecAgentTradeInfo;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYOPTIONINSTRTRADECOST;
    if (pOptionInstrTradeCost)
    {
        CThostFtdcOptionInstrTradeCostField *task_data = new CThostFtdcOptionInstrTradeCostField();
        *task_data = *pOptionInstrTradeCost;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYOPTIONINSTRCOMMRATE;
    if (pOptionInstrCommRate)
    {
        CThostFtdcOptionInstrCommRateField *task_data = new CThostFtdcOptionInstrCommRateField();
        *task_data = *pOptionInstrCommRate;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYEXECORDER;
    if (pExecOrder)
    {
        CThostFtdcExecOrderField *task_data = new CThostFtdcExecOrderField();
        *task_data = *pExecOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYFORQUOTE;
    if (pForQuote)
    {
        CThostFtdcForQuoteField *task_data = new CThostFtdcForQuoteField();
        *task_data = *pForQuote;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYQUOTE;
    if (pQuote)
    {
        CThostFtdcQuoteField *task_data = new CThostFtdcQuoteField();
        *task_data = *pQuote;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYOPTIONSELFCLOSE;
    if (pOptionSelfClose)
    {
        CThostFtdcOptionSelfCloseField *task_data = new CThostFtdcOptionSelfCloseField();
        *task_data = *pOptionSelfClose;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYINVESTUNIT;
    if (pInvestUnit)
    {
        CThostFtdcInvestUnitField *task_data = new CThostFtdcInvestUnitField();
        *task_data = *pInvestUnit;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYCOMBINSTRUMENTGUARD;
    if (pCombInstrumentGuard)
    {
        CThostFtdcCombInstrumentGuardField *task_data = new CThostFtdcCombInstrumentGuardField();
        *task_data = *pCombInstrumentGuard;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYCOMBACTION;
    if (pCombAction)
    {
        CThostFtdcCombActionField *task_data = new CThostFtdcCombActionField();
        *task_data = *pCombAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYTRANSFERSERIAL;
    if (pTransferSerial)
    {
        CThostFtdcTransferSerialField *task_data = new CThostFtdcTransferSerialField();
        *task_data = *pTransferSerial;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYACCOUNTREGISTER;
    if (pAccountregister)
    {
        CThostFtdcAccountregisterField *task_data = new CThostFtdcAccountregisterField();
        *task_data = *pAccountregister;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPERROR;
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnOrder(CThostFtdcOrderField *pOrder)
{
    Task task = Task();
    task.task_name = ONRTNORDER;
    if (pOrder)
    {
        CThostFtdcOrderField *task_data = new CThostFtdcOrderField();
        *task_data = *pOrder;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
    Task task = Task();
    task.task_name = ONRTNTRADE;
    if (pTrade)
    {
        CThostFtdcTradeField *task_data = new CThostFtdcTradeField();
        *task_data = *pTrade;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNORDERINSERT;
    if (pInputOrder)
    {
        CThostFtdcInputOrderField *task_data = new CThostFtdcInputOrderField();
        *task_data = *pInputOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNORDERACTION;
    if (pOrderAction)
    {
        CThostFtdcOrderActionField *task_data = new CThostFtdcOrderActionField();
        *task_data = *pOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
{
    Task task = Task();
    task.task_name = ONRTNINSTRUMENTSTATUS;
    if (pInstrumentStatus)
    {
        CThostFtdcInstrumentStatusField *task_data = new CThostFtdcInstrumentStatusField();
        *task_data = *pInstrumentStatus;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnBulletin(CThostFtdcBulletinField *pBulletin)
{
    Task task = Task();
    task.task_name = ONRTNBULLETIN;
    if (pBulletin)
    {
        CThostFtdcBulletinField *task_data = new CThostFtdcBulletinField();
        *task_data = *pBulletin;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
{
    Task task = Task();
    task.task_name = ONRTNTRADINGNOTICE;
    if (pTradingNoticeInfo)
    {
        CThostFtdcTradingNoticeInfoField *task_data = new CThostFtdcTradingNoticeInfoField();
        *task_data = *pTradingNoticeInfo;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
{
    Task task = Task();
    task.task_name = ONRTNERRORCONDITIONALORDER;
    if (pErrorConditionalOrder)
    {
        CThostFtdcErrorConditionalOrderField *task_data = new CThostFtdcErrorConditionalOrderField();
        *task_data = *pErrorConditionalOrder;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder)
{
    Task task = Task();
    task.task_name = ONRTNEXECORDER;
    if (pExecOrder)
    {
        CThostFtdcExecOrderField *task_data = new CThostFtdcExecOrderField();
        *task_data = *pExecOrder;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNEXECORDERINSERT;
    if (pInputExecOrder)
    {
        CThostFtdcInputExecOrderField *task_data = new CThostFtdcInputExecOrderField();
        *task_data = *pInputExecOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNEXECORDERACTION;
    if (pExecOrderAction)
    {
        CThostFtdcExecOrderActionField *task_data = new CThostFtdcExecOrderActionField();
        *task_data = *pExecOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNFORQUOTEINSERT;
    if (pInputForQuote)
    {
        CThostFtdcInputForQuoteField *task_data = new CThostFtdcInputForQuoteField();
        *task_data = *pInputForQuote;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnQuote(CThostFtdcQuoteField *pQuote)
{
    Task task = Task();
    task.task_name = ONRTNQUOTE;
    if (pQuote)
    {
        CThostFtdcQuoteField *task_data = new CThostFtdcQuoteField();
        *task_data = *pQuote;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNQUOTEINSERT;
    if (pInputQuote)
    {
        CThostFtdcInputQuoteField *task_data = new CThostFtdcInputQuoteField();
        *task_data = *pInputQuote;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNQUOTEACTION;
    if (pQuoteAction)
    {
        CThostFtdcQuoteActionField *task_data = new CThostFtdcQuoteActionField();
        *task_data = *pQuoteAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
{
    Task task = Task();
    task.task_name = ONRTNFORQUOTERSP;
    if (pForQuoteRsp)
    {
        CThostFtdcForQuoteRspField *task_data = new CThostFtdcForQuoteRspField();
        *task_data = *pForQuoteRsp;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken)
{
    Task task = Task();
    task.task_name = ONRTNCFMMCTRADINGACCOUNTTOKEN;
    if (pCFMMCTradingAccountToken)
    {
        CThostFtdcCFMMCTradingAccountTokenField *task_data = new CThostFtdcCFMMCTradingAccountTokenField();
        *task_data = *pCFMMCTradingAccountToken;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNBATCHORDERACTION;
    if (pBatchOrderAction)
    {
        CThostFtdcBatchOrderActionField *task_data = new CThostFtdcBatchOrderActionField();
        *task_data = *pBatchOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose)
{
    Task task = Task();
    task.task_name = ONRTNOPTIONSELFCLOSE;
    if (pOptionSelfClose)
    {
        CThostFtdcOptionSelfCloseField *task_data = new CThostFtdcOptionSelfCloseField();
        *task_data = *pOptionSelfClose;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNOPTIONSELFCLOSEINSERT;
    if (pInputOptionSelfClose)
    {
        CThostFtdcInputOptionSelfCloseField *task_data = new CThostFtdcInputOptionSelfCloseField();
        *task_data = *pInputOptionSelfClose;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNOPTIONSELFCLOSEACTION;
    if (pOptionSelfCloseAction)
    {
        CThostFtdcOptionSelfCloseActionField *task_data = new CThostFtdcOptionSelfCloseActionField();
        *task_data = *pOptionSelfCloseAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnCombAction(CThostFtdcCombActionField *pCombAction)
{
    Task task = Task();
    task.task_name = ONRTNCOMBACTION;
    if (pCombAction)
    {
        CThostFtdcCombActionField *task_data = new CThostFtdcCombActionField();
        *task_data = *pCombAction;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNCOMBACTIONINSERT;
    if (pInputCombAction)
    {
        CThostFtdcInputCombActionField *task_data = new CThostFtdcInputCombActionField();
        *task_data = *pInputCombAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYCONTRACTBANK;
    if (pContractBank)
    {
        CThostFtdcContractBankField *task_data = new CThostFtdcContractBankField();
        *task_data = *pContractBank;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYPARKEDORDER;
    if (pParkedOrder)
    {
        CThostFtdcParkedOrderField *task_data = new CThostFtdcParkedOrderField();
        *task_data = *pParkedOrder;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYPARKEDORDERACTION;
    if (pParkedOrderAction)
    {
        CThostFtdcParkedOrderActionField *task_data = new CThostFtdcParkedOrderActionField();
        *task_data = *pParkedOrderAction;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYTRADINGNOTICE;
    if (pTradingNotice)
    {
        CThostFtdcTradingNoticeField *task_data = new CThostFtdcTradingNoticeField();
        *task_data = *pTradingNotice;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYBROKERTRADINGPARAMS;
    if (pBrokerTradingParams)
    {
        CThostFtdcBrokerTradingParamsField *task_data = new CThostFtdcBrokerTradingParamsField();
        *task_data = *pBrokerTradingParams;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQRYBROKERTRADINGALGOS;
    if (pBrokerTradingAlgos)
    {
        CThostFtdcBrokerTradingAlgosField *task_data = new CThostFtdcBrokerTradingAlgosField();
        *task_data = *pBrokerTradingAlgos;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQUERYCFMMCTRADINGACCOUNTTOKEN;
    if (pQueryCFMMCTradingAccountToken)
    {
        CThostFtdcQueryCFMMCTradingAccountTokenField *task_data = new CThostFtdcQueryCFMMCTradingAccountTokenField();
        *task_data = *pQueryCFMMCTradingAccountToken;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer)
{
    Task task = Task();
    task.task_name = ONRTNFROMBANKTOFUTUREBYBANK;
    if (pRspTransfer)
    {
        CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
        *task_data = *pRspTransfer;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer)
{
    Task task = Task();
    task.task_name = ONRTNFROMFUTURETOBANKBYBANK;
    if (pRspTransfer)
    {
        CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
        *task_data = *pRspTransfer;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal)
{
    Task task = Task();
    task.task_name = ONRTNREPEALFROMBANKTOFUTUREBYBANK;
    if (pRspRepeal)
    {
        CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
        *task_data = *pRspRepeal;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal)
{
    Task task = Task();
    task.task_name = ONRTNREPEALFROMFUTURETOBANKBYBANK;
    if (pRspRepeal)
    {
        CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
        *task_data = *pRspRepeal;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
    Task task = Task();
    task.task_name = ONRTNFROMBANKTOFUTUREBYFUTURE;
    if (pRspTransfer)
    {
        CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
        *task_data = *pRspTransfer;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer)
{
    Task task = Task();
    task.task_name = ONRTNFROMFUTURETOBANKBYFUTURE;
    if (pRspTransfer)
    {
        CThostFtdcRspTransferField *task_data = new CThostFtdcRspTransferField();
        *task_data = *pRspTransfer;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
    Task task = Task();
    task.task_name = ONRTNREPEALFROMBANKTOFUTUREBYFUTUREMANUAL;
    if (pRspRepeal)
    {
        CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
        *task_data = *pRspRepeal;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
{
    Task task = Task();
    task.task_name = ONRTNREPEALFROMFUTURETOBANKBYFUTUREMANUAL;
    if (pRspRepeal)
    {
        CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
        *task_data = *pRspRepeal;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
{
    Task task = Task();
    task.task_name = ONRTNQUERYBANKBALANCEBYFUTURE;
    if (pNotifyQueryAccount)
    {
        CThostFtdcNotifyQueryAccountField *task_data = new CThostFtdcNotifyQueryAccountField();
        *task_data = *pNotifyQueryAccount;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNBANKTOFUTUREBYFUTURE;
    if (pReqTransfer)
    {
        CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
        *task_data = *pReqTransfer;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNFUTURETOBANKBYFUTURE;
    if (pReqTransfer)
    {
        CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
        *task_data = *pReqTransfer;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNREPEALBANKTOFUTUREBYFUTUREMANUAL;
    if (pReqRepeal)
    {
        CThostFtdcReqRepealField *task_data = new CThostFtdcReqRepealField();
        *task_data = *pReqRepeal;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNREPEALFUTURETOBANKBYFUTUREMANUAL;
    if (pReqRepeal)
    {
        CThostFtdcReqRepealField *task_data = new CThostFtdcReqRepealField();
        *task_data = *pReqRepeal;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo)
{
    Task task = Task();
    task.task_name = ONERRRTNQUERYBANKBALANCEBYFUTURE;
    if (pReqQueryAccount)
    {
        CThostFtdcReqQueryAccountField *task_data = new CThostFtdcReqQueryAccountField();
        *task_data = *pReqQueryAccount;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
    Task task = Task();
    task.task_name = ONRTNREPEALFROMBANKTOFUTUREBYFUTURE;
    if (pRspRepeal)
    {
        CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
        *task_data = *pRspRepeal;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal)
{
    Task task = Task();
    task.task_name = ONRTNREPEALFROMFUTURETOBANKBYFUTURE;
    if (pRspRepeal)
    {
        CThostFtdcRspRepealField *task_data = new CThostFtdcRspRepealField();
        *task_data = *pRspRepeal;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPFROMBANKTOFUTUREBYFUTURE;
    if (pReqTransfer)
    {
        CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
        *task_data = *pReqTransfer;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPFROMFUTURETOBANKBYFUTURE;
    if (pReqTransfer)
    {
        CThostFtdcReqTransferField *task_data = new CThostFtdcReqTransferField();
        *task_data = *pReqTransfer;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    Task task = Task();
    task.task_name = ONRSPQUERYBANKACCOUNTMONEYBYFUTURE;
    if (pReqQueryAccount)
    {
        CThostFtdcReqQueryAccountField *task_data = new CThostFtdcReqQueryAccountField();
        *task_data = *pReqQueryAccount;
        task.task_data = task_data;
    }
    if (pRspInfo)
    {
        CThostFtdcRspInfoField *task_error = new CThostFtdcRspInfoField();
        *task_error = *pRspInfo;
        task.task_error = task_error;
    }
    task.task_id = nRequestID;
    task.task_last = bIsLast;
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount)
{
    Task task = Task();
    task.task_name = ONRTNOPENACCOUNTBYBANK;
    if (pOpenAccount)
    {
        CThostFtdcOpenAccountField *task_data = new CThostFtdcOpenAccountField();
        *task_data = *pOpenAccount;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount)
{
    Task task = Task();
    task.task_name = ONRTNCANCELACCOUNTBYBANK;
    if (pCancelAccount)
    {
        CThostFtdcCancelAccountField *task_data = new CThostFtdcCancelAccountField();
        *task_data = *pCancelAccount;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};

void ctp_trade_handle::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount)
{
    Task task = Task();
    task.task_name = ONRTNCHANGEACCOUNTBYBANK;
    if (pChangeAccount)
    {
        CThostFtdcChangeAccountField *task_data = new CThostFtdcChangeAccountField();
        *task_data = *pChangeAccount;
        task.task_data = task_data;
    }
    this->_task_queue.push(task);
};
void ctp_trade_handle::processFrontConnected(Task *task){};

void ctp_trade_handle::processFrontDisconnected(Task *task){};

void ctp_trade_handle::processHeartBeatWarning(Task *task){};

void ctp_trade_handle::processRspAuthenticate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspAuthenticateField *task_data = (CThostFtdcRspAuthenticateField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("AppID = %s\n", toUtf(task_data->AppID));
        printf("AppType = %d\n", task_data->AppType);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspUserLogin(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspUserLoginField *task_data = (CThostFtdcRspUserLoginField *)task->task_data;
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("LoginTime = %s\n", toUtf(task_data->LoginTime));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("SystemName = %s\n", toUtf(task_data->SystemName));
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("MaxOrderRef = %s\n", toUtf(task_data->MaxOrderRef));
        printf("SHFETime = %s\n", toUtf(task_data->SHFETime));
        printf("DCETime = %s\n", toUtf(task_data->DCETime));
        printf("CZCETime = %s\n", toUtf(task_data->CZCETime));
        printf("FFEXTime = %s\n", toUtf(task_data->FFEXTime));
        printf("INETime = %s\n", toUtf(task_data->INETime));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspUserLogout(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcUserLogoutField *task_data = (CThostFtdcUserLogoutField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspUserPasswordUpdate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcUserPasswordUpdateField *task_data = (CThostFtdcUserPasswordUpdateField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OldPassword = %s\n", toUtf(task_data->OldPassword));
        printf("NewPassword = %s\n", toUtf(task_data->NewPassword));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspTradingAccountPasswordUpdate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradingAccountPasswordUpdateField *task_data = (CThostFtdcTradingAccountPasswordUpdateField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("OldPassword = %s\n", toUtf(task_data->OldPassword));
        printf("NewPassword = %s\n", toUtf(task_data->NewPassword));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspUserAuthMethod(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspUserAuthMethodField *task_data = (CThostFtdcRspUserAuthMethodField *)task->task_data;
        printf("UsableAuthMethod = %d\n", task_data->UsableAuthMethod);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspGenUserCaptcha(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspGenUserCaptchaField *task_data = (CThostFtdcRspGenUserCaptchaField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("CaptchaInfoLen = %d\n", task_data->CaptchaInfoLen);
        printf("CaptchaInfo = %s\n", toUtf(task_data->CaptchaInfo));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspGenUserText(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspGenUserTextField *task_data = (CThostFtdcRspGenUserTextField *)task->task_data;
        printf("UserTextSeq = %d\n", task_data->UserTextSeq);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspOrderInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputOrderField *task_data = (CThostFtdcInputOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OrderPriceType = %d\n", task_data->OrderPriceType);
        printf("Direction = %d\n", task_data->Direction);
        printf("CombOffsetFlag = %s\n", toUtf(task_data->CombOffsetFlag));
        printf("CombHedgeFlag = %s\n", toUtf(task_data->CombHedgeFlag));
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeTotalOriginal = %d\n", task_data->VolumeTotalOriginal);
        printf("TimeCondition = %d\n", task_data->TimeCondition);
        printf("GTDDate = %s\n", toUtf(task_data->GTDDate));
        printf("VolumeCondition = %d\n", task_data->VolumeCondition);
        printf("MinVolume = %d\n", task_data->MinVolume);
        printf("ContingentCondition = %d\n", task_data->ContingentCondition);
        printf("StopPrice = %f\n", task_data->StopPrice);
        printf("ForceCloseReason = %d\n", task_data->ForceCloseReason);
        printf("IsAutoSuspend = %d\n", task_data->IsAutoSuspend);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("UserForceClose = %d\n", task_data->UserForceClose);
        printf("IsSwapOrder = %d\n", task_data->IsSwapOrder);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspParkedOrderInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcParkedOrderField *task_data = (CThostFtdcParkedOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OrderPriceType = %d\n", task_data->OrderPriceType);
        printf("Direction = %d\n", task_data->Direction);
        printf("CombOffsetFlag = %s\n", toUtf(task_data->CombOffsetFlag));
        printf("CombHedgeFlag = %s\n", toUtf(task_data->CombHedgeFlag));
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeTotalOriginal = %d\n", task_data->VolumeTotalOriginal);
        printf("TimeCondition = %d\n", task_data->TimeCondition);
        printf("GTDDate = %s\n", toUtf(task_data->GTDDate));
        printf("VolumeCondition = %d\n", task_data->VolumeCondition);
        printf("MinVolume = %d\n", task_data->MinVolume);
        printf("ContingentCondition = %d\n", task_data->ContingentCondition);
        printf("StopPrice = %f\n", task_data->StopPrice);
        printf("ForceCloseReason = %d\n", task_data->ForceCloseReason);
        printf("IsAutoSuspend = %d\n", task_data->IsAutoSuspend);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("UserForceClose = %d\n", task_data->UserForceClose);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParkedOrderID = %s\n", toUtf(task_data->ParkedOrderID));
        printf("UserType = %d\n", task_data->UserType);
        printf("Status = %d\n", task_data->Status);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("IsSwapOrder = %d\n", task_data->IsSwapOrder);
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspParkedOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcParkedOrderActionField *task_data = (CThostFtdcParkedOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OrderActionRef = %d\n", task_data->OrderActionRef);
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeChange = %d\n", task_data->VolumeChange);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ParkedOrderActionID = %s\n", toUtf(task_data->ParkedOrderActionID));
        printf("UserType = %d\n", task_data->UserType);
        printf("Status = %d\n", task_data->Status);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputOrderActionField *task_data = (CThostFtdcInputOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OrderActionRef = %d\n", task_data->OrderActionRef);
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeChange = %d\n", task_data->VolumeChange);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQueryMaxOrderVolume(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcQueryMaxOrderVolumeField *task_data = (CThostFtdcQueryMaxOrderVolumeField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("Direction = %d\n", task_data->Direction);
        printf("OffsetFlag = %d\n", task_data->OffsetFlag);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("MaxVolume = %d\n", task_data->MaxVolume);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspSettlementInfoConfirm(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcSettlementInfoConfirmField *task_data = (CThostFtdcSettlementInfoConfirmField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ConfirmDate = %s\n", toUtf(task_data->ConfirmDate));
        printf("ConfirmTime = %s\n", toUtf(task_data->ConfirmTime));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspRemoveParkedOrder(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRemoveParkedOrderField *task_data = (CThostFtdcRemoveParkedOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ParkedOrderID = %s\n", toUtf(task_data->ParkedOrderID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspRemoveParkedOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRemoveParkedOrderActionField *task_data = (CThostFtdcRemoveParkedOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ParkedOrderActionID = %s\n", toUtf(task_data->ParkedOrderActionID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspExecOrderInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputExecOrderField *task_data = (CThostFtdcInputExecOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ExecOrderRef = %s\n", toUtf(task_data->ExecOrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OffsetFlag = %d\n", task_data->OffsetFlag);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ActionType = %d\n", task_data->ActionType);
        printf("PosiDirection = %d\n", task_data->PosiDirection);
        printf("ReservePositionFlag = %d\n", task_data->ReservePositionFlag);
        printf("CloseFlag = %d\n", task_data->CloseFlag);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspExecOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputExecOrderActionField *task_data = (CThostFtdcInputExecOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ExecOrderActionRef = %d\n", task_data->ExecOrderActionRef);
        printf("ExecOrderRef = %s\n", toUtf(task_data->ExecOrderRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ExecOrderSysID = %s\n", toUtf(task_data->ExecOrderSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspForQuoteInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputForQuoteField *task_data = (CThostFtdcInputForQuoteField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ForQuoteRef = %s\n", toUtf(task_data->ForQuoteRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQuoteInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputQuoteField *task_data = (CThostFtdcInputQuoteField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("QuoteRef = %s\n", toUtf(task_data->QuoteRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("AskPrice = %f\n", task_data->AskPrice);
        printf("BidPrice = %f\n", task_data->BidPrice);
        printf("AskVolume = %d\n", task_data->AskVolume);
        printf("BidVolume = %d\n", task_data->BidVolume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("AskOffsetFlag = %d\n", task_data->AskOffsetFlag);
        printf("BidOffsetFlag = %d\n", task_data->BidOffsetFlag);
        printf("AskHedgeFlag = %d\n", task_data->AskHedgeFlag);
        printf("BidHedgeFlag = %d\n", task_data->BidHedgeFlag);
        printf("AskOrderRef = %s\n", toUtf(task_data->AskOrderRef));
        printf("BidOrderRef = %s\n", toUtf(task_data->BidOrderRef));
        printf("ForQuoteSysID = %s\n", toUtf(task_data->ForQuoteSysID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQuoteAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputQuoteActionField *task_data = (CThostFtdcInputQuoteActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("QuoteActionRef = %d\n", task_data->QuoteActionRef);
        printf("QuoteRef = %s\n", toUtf(task_data->QuoteRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("QuoteSysID = %s\n", toUtf(task_data->QuoteSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspBatchOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputBatchOrderActionField *task_data = (CThostFtdcInputBatchOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OrderActionRef = %d\n", task_data->OrderActionRef);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspOptionSelfCloseInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputOptionSelfCloseField *task_data = (CThostFtdcInputOptionSelfCloseField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OptionSelfCloseRef = %s\n", toUtf(task_data->OptionSelfCloseRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("OptSelfCloseFlag = %d\n", task_data->OptSelfCloseFlag);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspOptionSelfCloseAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputOptionSelfCloseActionField *task_data = (CThostFtdcInputOptionSelfCloseActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OptionSelfCloseActionRef = %d\n", task_data->OptionSelfCloseActionRef);
        printf("OptionSelfCloseRef = %s\n", toUtf(task_data->OptionSelfCloseRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("OptionSelfCloseSysID = %s\n", toUtf(task_data->OptionSelfCloseSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspCombActionInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputCombActionField *task_data = (CThostFtdcInputCombActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("CombActionRef = %s\n", toUtf(task_data->CombActionRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Direction = %d\n", task_data->Direction);
        printf("Volume = %d\n", task_data->Volume);
        printf("CombDirection = %d\n", task_data->CombDirection);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryOrder(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOrderField *task_data = (CThostFtdcOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OrderPriceType = %d\n", task_data->OrderPriceType);
        printf("Direction = %d\n", task_data->Direction);
        printf("CombOffsetFlag = %s\n", toUtf(task_data->CombOffsetFlag));
        printf("CombHedgeFlag = %s\n", toUtf(task_data->CombHedgeFlag));
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeTotalOriginal = %d\n", task_data->VolumeTotalOriginal);
        printf("TimeCondition = %d\n", task_data->TimeCondition);
        printf("GTDDate = %s\n", toUtf(task_data->GTDDate));
        printf("VolumeCondition = %d\n", task_data->VolumeCondition);
        printf("MinVolume = %d\n", task_data->MinVolume);
        printf("ContingentCondition = %d\n", task_data->ContingentCondition);
        printf("StopPrice = %f\n", task_data->StopPrice);
        printf("ForceCloseReason = %d\n", task_data->ForceCloseReason);
        printf("IsAutoSuspend = %d\n", task_data->IsAutoSuspend);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("OrderLocalID = %s\n", toUtf(task_data->OrderLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("OrderSource = %d\n", task_data->OrderSource);
        printf("OrderStatus = %d\n", task_data->OrderStatus);
        printf("OrderType = %d\n", task_data->OrderType);
        printf("VolumeTraded = %d\n", task_data->VolumeTraded);
        printf("VolumeTotal = %d\n", task_data->VolumeTotal);
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("ActiveTime = %s\n", toUtf(task_data->ActiveTime));
        printf("SuspendTime = %s\n", toUtf(task_data->SuspendTime));
        printf("UpdateTime = %s\n", toUtf(task_data->UpdateTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("ActiveTraderID = %s\n", toUtf(task_data->ActiveTraderID));
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("UserForceClose = %d\n", task_data->UserForceClose);
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerOrderSeq = %d\n", task_data->BrokerOrderSeq);
        printf("RelativeOrderSysID = %s\n", toUtf(task_data->RelativeOrderSysID));
        printf("ZCETotalTradedVolume = %d\n", task_data->ZCETotalTradedVolume);
        printf("IsSwapOrder = %d\n", task_data->IsSwapOrder);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryTrade(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradeField *task_data = (CThostFtdcTradeField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("TradeID = %s\n", toUtf(task_data->TradeID));
        printf("Direction = %d\n", task_data->Direction);
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("TradingRole = %d\n", task_data->TradingRole);
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("OffsetFlag = %d\n", task_data->OffsetFlag);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("Price = %f\n", task_data->Price);
        printf("Volume = %d\n", task_data->Volume);
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("TradeType = %d\n", task_data->TradeType);
        printf("PriceSource = %d\n", task_data->PriceSource);
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("OrderLocalID = %s\n", toUtf(task_data->OrderLocalID));
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("BrokerOrderSeq = %d\n", task_data->BrokerOrderSeq);
        printf("TradeSource = %d\n", task_data->TradeSource);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInvestorPosition(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInvestorPositionField *task_data = (CThostFtdcInvestorPositionField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("PosiDirection = %d\n", task_data->PosiDirection);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("PositionDate = %d\n", task_data->PositionDate);
        printf("YdPosition = %d\n", task_data->YdPosition);
        printf("Position = %d\n", task_data->Position);
        printf("LongFrozen = %d\n", task_data->LongFrozen);
        printf("ShortFrozen = %d\n", task_data->ShortFrozen);
        printf("LongFrozenAmount = %f\n", task_data->LongFrozenAmount);
        printf("ShortFrozenAmount = %f\n", task_data->ShortFrozenAmount);
        printf("OpenVolume = %d\n", task_data->OpenVolume);
        printf("CloseVolume = %d\n", task_data->CloseVolume);
        printf("OpenAmount = %f\n", task_data->OpenAmount);
        printf("CloseAmount = %f\n", task_data->CloseAmount);
        printf("PositionCost = %f\n", task_data->PositionCost);
        printf("PreMargin = %f\n", task_data->PreMargin);
        printf("UseMargin = %f\n", task_data->UseMargin);
        printf("FrozenMargin = %f\n", task_data->FrozenMargin);
        printf("FrozenCash = %f\n", task_data->FrozenCash);
        printf("FrozenCommission = %f\n", task_data->FrozenCommission);
        printf("CashIn = %f\n", task_data->CashIn);
        printf("Commission = %f\n", task_data->Commission);
        printf("CloseProfit = %f\n", task_data->CloseProfit);
        printf("PositionProfit = %f\n", task_data->PositionProfit);
        printf("PreSettlementPrice = %f\n", task_data->PreSettlementPrice);
        printf("SettlementPrice = %f\n", task_data->SettlementPrice);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("OpenCost = %f\n", task_data->OpenCost);
        printf("ExchangeMargin = %f\n", task_data->ExchangeMargin);
        printf("CombPosition = %d\n", task_data->CombPosition);
        printf("CombLongFrozen = %d\n", task_data->CombLongFrozen);
        printf("CombShortFrozen = %d\n", task_data->CombShortFrozen);
        printf("CloseProfitByDate = %f\n", task_data->CloseProfitByDate);
        printf("CloseProfitByTrade = %f\n", task_data->CloseProfitByTrade);
        printf("TodayPosition = %d\n", task_data->TodayPosition);
        printf("MarginRateByMoney = %f\n", task_data->MarginRateByMoney);
        printf("MarginRateByVolume = %f\n", task_data->MarginRateByVolume);
        printf("StrikeFrozen = %d\n", task_data->StrikeFrozen);
        printf("StrikeFrozenAmount = %f\n", task_data->StrikeFrozenAmount);
        printf("AbandonFrozen = %d\n", task_data->AbandonFrozen);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("YdStrikeFrozen = %d\n", task_data->YdStrikeFrozen);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("PositionCostOffset = %f\n", task_data->PositionCostOffset);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryTradingAccount(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradingAccountField *task_data = (CThostFtdcTradingAccountField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("PreMortgage = %f\n", task_data->PreMortgage);
        printf("PreCredit = %f\n", task_data->PreCredit);
        printf("PreDeposit = %f\n", task_data->PreDeposit);
        printf("PreBalance = %f\n", task_data->PreBalance);
        printf("PreMargin = %f\n", task_data->PreMargin);
        printf("InterestBase = %f\n", task_data->InterestBase);
        printf("Interest = %f\n", task_data->Interest);
        printf("Deposit = %f\n", task_data->Deposit);
        printf("Withdraw = %f\n", task_data->Withdraw);
        printf("FrozenMargin = %f\n", task_data->FrozenMargin);
        printf("FrozenCash = %f\n", task_data->FrozenCash);
        printf("FrozenCommission = %f\n", task_data->FrozenCommission);
        printf("CurrMargin = %f\n", task_data->CurrMargin);
        printf("CashIn = %f\n", task_data->CashIn);
        printf("Commission = %f\n", task_data->Commission);
        printf("CloseProfit = %f\n", task_data->CloseProfit);
        printf("PositionProfit = %f\n", task_data->PositionProfit);
        printf("Balance = %f\n", task_data->Balance);
        printf("Available = %f\n", task_data->Available);
        printf("WithdrawQuota = %f\n", task_data->WithdrawQuota);
        printf("Reserve = %f\n", task_data->Reserve);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("Credit = %f\n", task_data->Credit);
        printf("Mortgage = %f\n", task_data->Mortgage);
        printf("ExchangeMargin = %f\n", task_data->ExchangeMargin);
        printf("DeliveryMargin = %f\n", task_data->DeliveryMargin);
        printf("ExchangeDeliveryMargin = %f\n", task_data->ExchangeDeliveryMargin);
        printf("ReserveBalance = %f\n", task_data->ReserveBalance);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("PreFundMortgageIn = %f\n", task_data->PreFundMortgageIn);
        printf("PreFundMortgageOut = %f\n", task_data->PreFundMortgageOut);
        printf("FundMortgageIn = %f\n", task_data->FundMortgageIn);
        printf("FundMortgageOut = %f\n", task_data->FundMortgageOut);
        printf("FundMortgageAvailable = %f\n", task_data->FundMortgageAvailable);
        printf("MortgageableFund = %f\n", task_data->MortgageableFund);
        printf("SpecProductMargin = %f\n", task_data->SpecProductMargin);
        printf("SpecProductFrozenMargin = %f\n", task_data->SpecProductFrozenMargin);
        printf("SpecProductCommission = %f\n", task_data->SpecProductCommission);
        printf("SpecProductFrozenCommission = %f\n", task_data->SpecProductFrozenCommission);
        printf("SpecProductPositionProfit = %f\n", task_data->SpecProductPositionProfit);
        printf("SpecProductCloseProfit = %f\n", task_data->SpecProductCloseProfit);
        printf("SpecProductPositionProfitByAlg = %f\n", task_data->SpecProductPositionProfitByAlg);
        printf("SpecProductExchangeMargin = %f\n", task_data->SpecProductExchangeMargin);
        printf("BizType = %d\n", task_data->BizType);
        printf("FrozenSwap = %f\n", task_data->FrozenSwap);
        printf("RemainSwap = %f\n", task_data->RemainSwap);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInvestor(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInvestorField *task_data = (CThostFtdcInvestorField *)task->task_data;
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorGroupID = %s\n", toUtf(task_data->InvestorGroupID));
        printf("InvestorName = %s\n", toUtf(task_data->InvestorName));
        printf("IdentifiedCardType = %d\n", task_data->IdentifiedCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("IsActive = %d\n", task_data->IsActive);
        printf("Telephone = %s\n", toUtf(task_data->Telephone));
        printf("Address = %s\n", toUtf(task_data->Address));
        printf("OpenDate = %s\n", toUtf(task_data->OpenDate));
        printf("Mobile = %s\n", toUtf(task_data->Mobile));
        printf("CommModelID = %s\n", toUtf(task_data->CommModelID));
        printf("MarginModelID = %s\n", toUtf(task_data->MarginModelID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryTradingCode(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradingCodeField *task_data = (CThostFtdcTradingCodeField *)task->task_data;
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IsActive = %d\n", task_data->IsActive);
        printf("ClientIDType = %d\n", task_data->ClientIDType);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("BizType = %d\n", task_data->BizType);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInstrumentMarginRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInstrumentMarginRateField *task_data = (CThostFtdcInstrumentMarginRateField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestorRange = %d\n", task_data->InvestorRange);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("LongMarginRatioByMoney = %f\n", task_data->LongMarginRatioByMoney);
        printf("LongMarginRatioByVolume = %f\n", task_data->LongMarginRatioByVolume);
        printf("ShortMarginRatioByMoney = %f\n", task_data->ShortMarginRatioByMoney);
        printf("ShortMarginRatioByVolume = %f\n", task_data->ShortMarginRatioByVolume);
        printf("IsRelative = %d\n", task_data->IsRelative);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInstrumentCommissionRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInstrumentCommissionRateField *task_data = (CThostFtdcInstrumentCommissionRateField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestorRange = %d\n", task_data->InvestorRange);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OpenRatioByMoney = %f\n", task_data->OpenRatioByMoney);
        printf("OpenRatioByVolume = %f\n", task_data->OpenRatioByVolume);
        printf("CloseRatioByMoney = %f\n", task_data->CloseRatioByMoney);
        printf("CloseRatioByVolume = %f\n", task_data->CloseRatioByVolume);
        printf("CloseTodayRatioByMoney = %f\n", task_data->CloseTodayRatioByMoney);
        printf("CloseTodayRatioByVolume = %f\n", task_data->CloseTodayRatioByVolume);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("BizType = %d\n", task_data->BizType);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryExchange(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcExchangeField *task_data = (CThostFtdcExchangeField *)task->task_data;
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ExchangeName = %s\n", toUtf(task_data->ExchangeName));
        printf("ExchangeProperty = %d\n", task_data->ExchangeProperty);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryProduct(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcProductField *task_data = (CThostFtdcProductField *)task->task_data;
        printf("ProductID = %s\n", toUtf(task_data->ProductID));
        printf("ProductName = %s\n", toUtf(task_data->ProductName));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ProductClass = %d\n", task_data->ProductClass);
        printf("VolumeMultiple = %d\n", task_data->VolumeMultiple);
        printf("PriceTick = %f\n", task_data->PriceTick);
        printf("MaxMarketOrderVolume = %d\n", task_data->MaxMarketOrderVolume);
        printf("MinMarketOrderVolume = %d\n", task_data->MinMarketOrderVolume);
        printf("MaxLimitOrderVolume = %d\n", task_data->MaxLimitOrderVolume);
        printf("MinLimitOrderVolume = %d\n", task_data->MinLimitOrderVolume);
        printf("PositionType = %d\n", task_data->PositionType);
        printf("PositionDateType = %d\n", task_data->PositionDateType);
        printf("CloseDealType = %d\n", task_data->CloseDealType);
        printf("TradeCurrencyID = %s\n", toUtf(task_data->TradeCurrencyID));
        printf("MortgageFundUseRange = %d\n", task_data->MortgageFundUseRange);
        printf("ExchangeProductID = %s\n", toUtf(task_data->ExchangeProductID));
        printf("UnderlyingMultiple = %f\n", task_data->UnderlyingMultiple);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInstrument(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInstrumentField *task_data = (CThostFtdcInstrumentField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InstrumentName = %s\n", toUtf(task_data->InstrumentName));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("ProductID = %s\n", toUtf(task_data->ProductID));
        printf("ProductClass = %d\n", task_data->ProductClass);
        printf("DeliveryYear = %d\n", task_data->DeliveryYear);
        printf("DeliveryMonth = %d\n", task_data->DeliveryMonth);
        printf("MaxMarketOrderVolume = %d\n", task_data->MaxMarketOrderVolume);
        printf("MinMarketOrderVolume = %d\n", task_data->MinMarketOrderVolume);
        printf("MaxLimitOrderVolume = %d\n", task_data->MaxLimitOrderVolume);
        printf("MinLimitOrderVolume = %d\n", task_data->MinLimitOrderVolume);
        printf("VolumeMultiple = %d\n", task_data->VolumeMultiple);
        printf("PriceTick = %f\n", task_data->PriceTick);
        printf("CreateDate = %s\n", toUtf(task_data->CreateDate));
        printf("OpenDate = %s\n", toUtf(task_data->OpenDate));
        printf("ExpireDate = %s\n", toUtf(task_data->ExpireDate));
        printf("StartDelivDate = %s\n", toUtf(task_data->StartDelivDate));
        printf("EndDelivDate = %s\n", toUtf(task_data->EndDelivDate));
        printf("InstLifePhase = %d\n", task_data->InstLifePhase);
        printf("IsTrading = %d\n", task_data->IsTrading);
        printf("PositionType = %d\n", task_data->PositionType);
        printf("PositionDateType = %d\n", task_data->PositionDateType);
        printf("LongMarginRatio = %f\n", task_data->LongMarginRatio);
        printf("ShortMarginRatio = %f\n", task_data->ShortMarginRatio);
        printf("MaxMarginSideAlgorithm = %d\n", task_data->MaxMarginSideAlgorithm);
        printf("UnderlyingInstrID = %s\n", toUtf(task_data->UnderlyingInstrID));
        printf("StrikePrice = %f\n", task_data->StrikePrice);
        printf("OptionsType = %d\n", task_data->OptionsType);
        printf("UnderlyingMultiple = %f\n", task_data->UnderlyingMultiple);
        printf("CombinationType = %d\n", task_data->CombinationType);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryDepthMarketData(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcDepthMarketDataField *task_data = (CThostFtdcDepthMarketDataField *)task->task_data;
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("LastPrice = %f\n", task_data->LastPrice);
        printf("PreSettlementPrice = %f\n", task_data->PreSettlementPrice);
        printf("PreClosePrice = %f\n", task_data->PreClosePrice);
        printf("PreOpenInterest = %f\n", task_data->PreOpenInterest);
        printf("OpenPrice = %f\n", task_data->OpenPrice);
        printf("HighestPrice = %f\n", task_data->HighestPrice);
        printf("LowestPrice = %f\n", task_data->LowestPrice);
        printf("Volume = %d\n", task_data->Volume);
        printf("Turnover = %f\n", task_data->Turnover);
        printf("OpenInterest = %f\n", task_data->OpenInterest);
        printf("ClosePrice = %f\n", task_data->ClosePrice);
        printf("SettlementPrice = %f\n", task_data->SettlementPrice);
        printf("UpperLimitPrice = %f\n", task_data->UpperLimitPrice);
        printf("LowerLimitPrice = %f\n", task_data->LowerLimitPrice);
        printf("PreDelta = %f\n", task_data->PreDelta);
        printf("CurrDelta = %f\n", task_data->CurrDelta);
        printf("UpdateTime = %s\n", toUtf(task_data->UpdateTime));
        printf("UpdateMillisec = %d\n", task_data->UpdateMillisec);
        printf("BidPrice1 = %f\n", task_data->BidPrice1);
        printf("BidVolume1 = %d\n", task_data->BidVolume1);
        printf("AskPrice1 = %f\n", task_data->AskPrice1);
        printf("AskVolume1 = %d\n", task_data->AskVolume1);
        printf("BidPrice2 = %f\n", task_data->BidPrice2);
        printf("BidVolume2 = %d\n", task_data->BidVolume2);
        printf("AskPrice2 = %f\n", task_data->AskPrice2);
        printf("AskVolume2 = %d\n", task_data->AskVolume2);
        printf("BidPrice3 = %f\n", task_data->BidPrice3);
        printf("BidVolume3 = %d\n", task_data->BidVolume3);
        printf("AskPrice3 = %f\n", task_data->AskPrice3);
        printf("AskVolume3 = %d\n", task_data->AskVolume3);
        printf("BidPrice4 = %f\n", task_data->BidPrice4);
        printf("BidVolume4 = %d\n", task_data->BidVolume4);
        printf("AskPrice4 = %f\n", task_data->AskPrice4);
        printf("AskVolume4 = %d\n", task_data->AskVolume4);
        printf("BidPrice5 = %f\n", task_data->BidPrice5);
        printf("BidVolume5 = %d\n", task_data->BidVolume5);
        printf("AskPrice5 = %f\n", task_data->AskPrice5);
        printf("AskVolume5 = %d\n", task_data->AskVolume5);
        printf("AveragePrice = %f\n", task_data->AveragePrice);
        printf("ActionDay = %s\n", toUtf(task_data->ActionDay));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQrySettlementInfo(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcSettlementInfoField *task_data = (CThostFtdcSettlementInfoField *)task->task_data;
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("Content = %s\n", toUtf(task_data->Content));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryTransferBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTransferBankField *task_data = (CThostFtdcTransferBankField *)task->task_data;
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBrchID = %s\n", toUtf(task_data->BankBrchID));
        printf("BankName = %s\n", toUtf(task_data->BankName));
        printf("IsActive = %d\n", task_data->IsActive);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInvestorPositionDetail(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInvestorPositionDetailField *task_data = (CThostFtdcInvestorPositionDetailField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("Direction = %d\n", task_data->Direction);
        printf("OpenDate = %s\n", toUtf(task_data->OpenDate));
        printf("TradeID = %s\n", toUtf(task_data->TradeID));
        printf("Volume = %d\n", task_data->Volume);
        printf("OpenPrice = %f\n", task_data->OpenPrice);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("TradeType = %d\n", task_data->TradeType);
        printf("CombInstrumentID = %s\n", toUtf(task_data->CombInstrumentID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("CloseProfitByDate = %f\n", task_data->CloseProfitByDate);
        printf("CloseProfitByTrade = %f\n", task_data->CloseProfitByTrade);
        printf("PositionProfitByDate = %f\n", task_data->PositionProfitByDate);
        printf("PositionProfitByTrade = %f\n", task_data->PositionProfitByTrade);
        printf("Margin = %f\n", task_data->Margin);
        printf("ExchMargin = %f\n", task_data->ExchMargin);
        printf("MarginRateByMoney = %f\n", task_data->MarginRateByMoney);
        printf("MarginRateByVolume = %f\n", task_data->MarginRateByVolume);
        printf("LastSettlementPrice = %f\n", task_data->LastSettlementPrice);
        printf("SettlementPrice = %f\n", task_data->SettlementPrice);
        printf("CloseVolume = %d\n", task_data->CloseVolume);
        printf("CloseAmount = %f\n", task_data->CloseAmount);
        printf("TimeFirstVolume = %d\n", task_data->TimeFirstVolume);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryNotice(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcNoticeField *task_data = (CThostFtdcNoticeField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("Content = %s\n", toUtf(task_data->Content));
        printf("SequenceLabel = %s\n", toUtf(task_data->SequenceLabel));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQrySettlementInfoConfirm(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcSettlementInfoConfirmField *task_data = (CThostFtdcSettlementInfoConfirmField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ConfirmDate = %s\n", toUtf(task_data->ConfirmDate));
        printf("ConfirmTime = %s\n", toUtf(task_data->ConfirmTime));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInvestorPositionCombineDetail(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInvestorPositionCombineDetailField *task_data = (CThostFtdcInvestorPositionCombineDetailField *)task->task_data;
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("OpenDate = %s\n", toUtf(task_data->OpenDate));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ComTradeID = %s\n", toUtf(task_data->ComTradeID));
        printf("TradeID = %s\n", toUtf(task_data->TradeID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("Direction = %d\n", task_data->Direction);
        printf("TotalAmt = %d\n", task_data->TotalAmt);
        printf("Margin = %f\n", task_data->Margin);
        printf("ExchMargin = %f\n", task_data->ExchMargin);
        printf("MarginRateByMoney = %f\n", task_data->MarginRateByMoney);
        printf("MarginRateByVolume = %f\n", task_data->MarginRateByVolume);
        printf("LegID = %d\n", task_data->LegID);
        printf("LegMultiple = %d\n", task_data->LegMultiple);
        printf("CombInstrumentID = %s\n", toUtf(task_data->CombInstrumentID));
        printf("TradeGroupID = %d\n", task_data->TradeGroupID);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryCFMMCTradingAccountKey(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcCFMMCTradingAccountKeyField *task_data = (CThostFtdcCFMMCTradingAccountKeyField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("KeyID = %d\n", task_data->KeyID);
        printf("CurrentKey = %s\n", toUtf(task_data->CurrentKey));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryEWarrantOffset(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcEWarrantOffsetField *task_data = (CThostFtdcEWarrantOffsetField *)task->task_data;
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("Direction = %d\n", task_data->Direction);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("Volume = %d\n", task_data->Volume);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInvestorProductGroupMargin(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInvestorProductGroupMarginField *task_data = (CThostFtdcInvestorProductGroupMarginField *)task->task_data;
        printf("ProductGroupID = %s\n", toUtf(task_data->ProductGroupID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("FrozenMargin = %f\n", task_data->FrozenMargin);
        printf("LongFrozenMargin = %f\n", task_data->LongFrozenMargin);
        printf("ShortFrozenMargin = %f\n", task_data->ShortFrozenMargin);
        printf("UseMargin = %f\n", task_data->UseMargin);
        printf("LongUseMargin = %f\n", task_data->LongUseMargin);
        printf("ShortUseMargin = %f\n", task_data->ShortUseMargin);
        printf("ExchMargin = %f\n", task_data->ExchMargin);
        printf("LongExchMargin = %f\n", task_data->LongExchMargin);
        printf("ShortExchMargin = %f\n", task_data->ShortExchMargin);
        printf("CloseProfit = %f\n", task_data->CloseProfit);
        printf("FrozenCommission = %f\n", task_data->FrozenCommission);
        printf("Commission = %f\n", task_data->Commission);
        printf("FrozenCash = %f\n", task_data->FrozenCash);
        printf("CashIn = %f\n", task_data->CashIn);
        printf("PositionProfit = %f\n", task_data->PositionProfit);
        printf("OffsetAmount = %f\n", task_data->OffsetAmount);
        printf("LongOffsetAmount = %f\n", task_data->LongOffsetAmount);
        printf("ShortOffsetAmount = %f\n", task_data->ShortOffsetAmount);
        printf("ExchOffsetAmount = %f\n", task_data->ExchOffsetAmount);
        printf("LongExchOffsetAmount = %f\n", task_data->LongExchOffsetAmount);
        printf("ShortExchOffsetAmount = %f\n", task_data->ShortExchOffsetAmount);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryExchangeMarginRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcExchangeMarginRateField *task_data = (CThostFtdcExchangeMarginRateField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("LongMarginRatioByMoney = %f\n", task_data->LongMarginRatioByMoney);
        printf("LongMarginRatioByVolume = %f\n", task_data->LongMarginRatioByVolume);
        printf("ShortMarginRatioByMoney = %f\n", task_data->ShortMarginRatioByMoney);
        printf("ShortMarginRatioByVolume = %f\n", task_data->ShortMarginRatioByVolume);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryExchangeMarginRateAdjust(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcExchangeMarginRateAdjustField *task_data = (CThostFtdcExchangeMarginRateAdjustField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("LongMarginRatioByMoney = %f\n", task_data->LongMarginRatioByMoney);
        printf("LongMarginRatioByVolume = %f\n", task_data->LongMarginRatioByVolume);
        printf("ShortMarginRatioByMoney = %f\n", task_data->ShortMarginRatioByMoney);
        printf("ShortMarginRatioByVolume = %f\n", task_data->ShortMarginRatioByVolume);
        printf("ExchLongMarginRatioByMoney = %f\n", task_data->ExchLongMarginRatioByMoney);
        printf("ExchLongMarginRatioByVolume = %f\n", task_data->ExchLongMarginRatioByVolume);
        printf("ExchShortMarginRatioByMoney = %f\n", task_data->ExchShortMarginRatioByMoney);
        printf("ExchShortMarginRatioByVolume = %f\n", task_data->ExchShortMarginRatioByVolume);
        printf("NoLongMarginRatioByMoney = %f\n", task_data->NoLongMarginRatioByMoney);
        printf("NoLongMarginRatioByVolume = %f\n", task_data->NoLongMarginRatioByVolume);
        printf("NoShortMarginRatioByMoney = %f\n", task_data->NoShortMarginRatioByMoney);
        printf("NoShortMarginRatioByVolume = %f\n", task_data->NoShortMarginRatioByVolume);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryExchangeRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcExchangeRateField *task_data = (CThostFtdcExchangeRateField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("FromCurrencyID = %s\n", toUtf(task_data->FromCurrencyID));
        printf("FromCurrencyUnit = %f\n", task_data->FromCurrencyUnit);
        printf("ToCurrencyID = %s\n", toUtf(task_data->ToCurrencyID));
        printf("ExchangeRate = %f\n", task_data->ExchangeRate);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQrySecAgentACIDMap(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcSecAgentACIDMapField *task_data = (CThostFtdcSecAgentACIDMapField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("BrokerSecAgentID = %s\n", toUtf(task_data->BrokerSecAgentID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryProductExchRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcProductExchRateField *task_data = (CThostFtdcProductExchRateField *)task->task_data;
        printf("ProductID = %s\n", toUtf(task_data->ProductID));
        printf("QuoteCurrencyID = %s\n", toUtf(task_data->QuoteCurrencyID));
        printf("ExchangeRate = %f\n", task_data->ExchangeRate);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryProductGroup(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcProductGroupField *task_data = (CThostFtdcProductGroupField *)task->task_data;
        printf("ProductID = %s\n", toUtf(task_data->ProductID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ProductGroupID = %s\n", toUtf(task_data->ProductGroupID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryMMInstrumentCommissionRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcMMInstrumentCommissionRateField *task_data = (CThostFtdcMMInstrumentCommissionRateField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestorRange = %d\n", task_data->InvestorRange);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OpenRatioByMoney = %f\n", task_data->OpenRatioByMoney);
        printf("OpenRatioByVolume = %f\n", task_data->OpenRatioByVolume);
        printf("CloseRatioByMoney = %f\n", task_data->CloseRatioByMoney);
        printf("CloseRatioByVolume = %f\n", task_data->CloseRatioByVolume);
        printf("CloseTodayRatioByMoney = %f\n", task_data->CloseTodayRatioByMoney);
        printf("CloseTodayRatioByVolume = %f\n", task_data->CloseTodayRatioByVolume);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryMMOptionInstrCommRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcMMOptionInstrCommRateField *task_data = (CThostFtdcMMOptionInstrCommRateField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestorRange = %d\n", task_data->InvestorRange);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OpenRatioByMoney = %f\n", task_data->OpenRatioByMoney);
        printf("OpenRatioByVolume = %f\n", task_data->OpenRatioByVolume);
        printf("CloseRatioByMoney = %f\n", task_data->CloseRatioByMoney);
        printf("CloseRatioByVolume = %f\n", task_data->CloseRatioByVolume);
        printf("CloseTodayRatioByMoney = %f\n", task_data->CloseTodayRatioByMoney);
        printf("CloseTodayRatioByVolume = %f\n", task_data->CloseTodayRatioByVolume);
        printf("StrikeRatioByMoney = %f\n", task_data->StrikeRatioByMoney);
        printf("StrikeRatioByVolume = %f\n", task_data->StrikeRatioByVolume);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInstrumentOrderCommRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInstrumentOrderCommRateField *task_data = (CThostFtdcInstrumentOrderCommRateField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestorRange = %d\n", task_data->InvestorRange);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("OrderCommByVolume = %f\n", task_data->OrderCommByVolume);
        printf("OrderActionCommByVolume = %f\n", task_data->OrderActionCommByVolume);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQrySecAgentTradingAccount(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradingAccountField *task_data = (CThostFtdcTradingAccountField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("PreMortgage = %f\n", task_data->PreMortgage);
        printf("PreCredit = %f\n", task_data->PreCredit);
        printf("PreDeposit = %f\n", task_data->PreDeposit);
        printf("PreBalance = %f\n", task_data->PreBalance);
        printf("PreMargin = %f\n", task_data->PreMargin);
        printf("InterestBase = %f\n", task_data->InterestBase);
        printf("Interest = %f\n", task_data->Interest);
        printf("Deposit = %f\n", task_data->Deposit);
        printf("Withdraw = %f\n", task_data->Withdraw);
        printf("FrozenMargin = %f\n", task_data->FrozenMargin);
        printf("FrozenCash = %f\n", task_data->FrozenCash);
        printf("FrozenCommission = %f\n", task_data->FrozenCommission);
        printf("CurrMargin = %f\n", task_data->CurrMargin);
        printf("CashIn = %f\n", task_data->CashIn);
        printf("Commission = %f\n", task_data->Commission);
        printf("CloseProfit = %f\n", task_data->CloseProfit);
        printf("PositionProfit = %f\n", task_data->PositionProfit);
        printf("Balance = %f\n", task_data->Balance);
        printf("Available = %f\n", task_data->Available);
        printf("WithdrawQuota = %f\n", task_data->WithdrawQuota);
        printf("Reserve = %f\n", task_data->Reserve);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("Credit = %f\n", task_data->Credit);
        printf("Mortgage = %f\n", task_data->Mortgage);
        printf("ExchangeMargin = %f\n", task_data->ExchangeMargin);
        printf("DeliveryMargin = %f\n", task_data->DeliveryMargin);
        printf("ExchangeDeliveryMargin = %f\n", task_data->ExchangeDeliveryMargin);
        printf("ReserveBalance = %f\n", task_data->ReserveBalance);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("PreFundMortgageIn = %f\n", task_data->PreFundMortgageIn);
        printf("PreFundMortgageOut = %f\n", task_data->PreFundMortgageOut);
        printf("FundMortgageIn = %f\n", task_data->FundMortgageIn);
        printf("FundMortgageOut = %f\n", task_data->FundMortgageOut);
        printf("FundMortgageAvailable = %f\n", task_data->FundMortgageAvailable);
        printf("MortgageableFund = %f\n", task_data->MortgageableFund);
        printf("SpecProductMargin = %f\n", task_data->SpecProductMargin);
        printf("SpecProductFrozenMargin = %f\n", task_data->SpecProductFrozenMargin);
        printf("SpecProductCommission = %f\n", task_data->SpecProductCommission);
        printf("SpecProductFrozenCommission = %f\n", task_data->SpecProductFrozenCommission);
        printf("SpecProductPositionProfit = %f\n", task_data->SpecProductPositionProfit);
        printf("SpecProductCloseProfit = %f\n", task_data->SpecProductCloseProfit);
        printf("SpecProductPositionProfitByAlg = %f\n", task_data->SpecProductPositionProfitByAlg);
        printf("SpecProductExchangeMargin = %f\n", task_data->SpecProductExchangeMargin);
        printf("BizType = %d\n", task_data->BizType);
        printf("FrozenSwap = %f\n", task_data->FrozenSwap);
        printf("RemainSwap = %f\n", task_data->RemainSwap);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQrySecAgentCheckMode(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcSecAgentCheckModeField *task_data = (CThostFtdcSecAgentCheckModeField *)task->task_data;
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("BrokerSecAgentID = %s\n", toUtf(task_data->BrokerSecAgentID));
        printf("CheckSelfAccount = %d\n", task_data->CheckSelfAccount);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQrySecAgentTradeInfo(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcSecAgentTradeInfoField *task_data = (CThostFtdcSecAgentTradeInfoField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerSecAgentID = %s\n", toUtf(task_data->BrokerSecAgentID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryOptionInstrTradeCost(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOptionInstrTradeCostField *task_data = (CThostFtdcOptionInstrTradeCostField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("FixedMargin = %f\n", task_data->FixedMargin);
        printf("MiniMargin = %f\n", task_data->MiniMargin);
        printf("Royalty = %f\n", task_data->Royalty);
        printf("ExchFixedMargin = %f\n", task_data->ExchFixedMargin);
        printf("ExchMiniMargin = %f\n", task_data->ExchMiniMargin);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryOptionInstrCommRate(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOptionInstrCommRateField *task_data = (CThostFtdcOptionInstrCommRateField *)task->task_data;
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InvestorRange = %d\n", task_data->InvestorRange);
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OpenRatioByMoney = %f\n", task_data->OpenRatioByMoney);
        printf("OpenRatioByVolume = %f\n", task_data->OpenRatioByVolume);
        printf("CloseRatioByMoney = %f\n", task_data->CloseRatioByMoney);
        printf("CloseRatioByVolume = %f\n", task_data->CloseRatioByVolume);
        printf("CloseTodayRatioByMoney = %f\n", task_data->CloseTodayRatioByMoney);
        printf("CloseTodayRatioByVolume = %f\n", task_data->CloseTodayRatioByVolume);
        printf("StrikeRatioByMoney = %f\n", task_data->StrikeRatioByMoney);
        printf("StrikeRatioByVolume = %f\n", task_data->StrikeRatioByVolume);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryExecOrder(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcExecOrderField *task_data = (CThostFtdcExecOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ExecOrderRef = %s\n", toUtf(task_data->ExecOrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OffsetFlag = %d\n", task_data->OffsetFlag);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ActionType = %d\n", task_data->ActionType);
        printf("PosiDirection = %d\n", task_data->PosiDirection);
        printf("ReservePositionFlag = %d\n", task_data->ReservePositionFlag);
        printf("CloseFlag = %d\n", task_data->CloseFlag);
        printf("ExecOrderLocalID = %s\n", toUtf(task_data->ExecOrderLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("ExecOrderSysID = %s\n", toUtf(task_data->ExecOrderSysID));
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("ExecResult = %d\n", task_data->ExecResult);
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerExecOrderSeq = %d\n", task_data->BrokerExecOrderSeq);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryForQuote(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcForQuoteField *task_data = (CThostFtdcForQuoteField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ForQuoteRef = %s\n", toUtf(task_data->ForQuoteRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ForQuoteLocalID = %s\n", toUtf(task_data->ForQuoteLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("ForQuoteStatus = %d\n", task_data->ForQuoteStatus);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerForQutoSeq = %d\n", task_data->BrokerForQutoSeq);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryQuote(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcQuoteField *task_data = (CThostFtdcQuoteField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("QuoteRef = %s\n", toUtf(task_data->QuoteRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("AskPrice = %f\n", task_data->AskPrice);
        printf("BidPrice = %f\n", task_data->BidPrice);
        printf("AskVolume = %d\n", task_data->AskVolume);
        printf("BidVolume = %d\n", task_data->BidVolume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("AskOffsetFlag = %d\n", task_data->AskOffsetFlag);
        printf("BidOffsetFlag = %d\n", task_data->BidOffsetFlag);
        printf("AskHedgeFlag = %d\n", task_data->AskHedgeFlag);
        printf("BidHedgeFlag = %d\n", task_data->BidHedgeFlag);
        printf("QuoteLocalID = %s\n", toUtf(task_data->QuoteLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("QuoteSysID = %s\n", toUtf(task_data->QuoteSysID));
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("QuoteStatus = %d\n", task_data->QuoteStatus);
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("AskOrderSysID = %s\n", toUtf(task_data->AskOrderSysID));
        printf("BidOrderSysID = %s\n", toUtf(task_data->BidOrderSysID));
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerQuoteSeq = %d\n", task_data->BrokerQuoteSeq);
        printf("AskOrderRef = %s\n", toUtf(task_data->AskOrderRef));
        printf("BidOrderRef = %s\n", toUtf(task_data->BidOrderRef));
        printf("ForQuoteSysID = %s\n", toUtf(task_data->ForQuoteSysID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryOptionSelfClose(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOptionSelfCloseField *task_data = (CThostFtdcOptionSelfCloseField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OptionSelfCloseRef = %s\n", toUtf(task_data->OptionSelfCloseRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("OptSelfCloseFlag = %d\n", task_data->OptSelfCloseFlag);
        printf("OptionSelfCloseLocalID = %s\n", toUtf(task_data->OptionSelfCloseLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("OptionSelfCloseSysID = %s\n", toUtf(task_data->OptionSelfCloseSysID));
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("ExecResult = %d\n", task_data->ExecResult);
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerOptionSelfCloseSeq = %d\n", task_data->BrokerOptionSelfCloseSeq);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryInvestUnit(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInvestUnitField *task_data = (CThostFtdcInvestUnitField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("InvestorUnitName = %s\n", toUtf(task_data->InvestorUnitName));
        printf("InvestorGroupID = %s\n", toUtf(task_data->InvestorGroupID));
        printf("CommModelID = %s\n", toUtf(task_data->CommModelID));
        printf("MarginModelID = %s\n", toUtf(task_data->MarginModelID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryCombInstrumentGuard(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcCombInstrumentGuardField *task_data = (CThostFtdcCombInstrumentGuardField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("GuarantRatio = %f\n", task_data->GuarantRatio);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryCombAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcCombActionField *task_data = (CThostFtdcCombActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("CombActionRef = %s\n", toUtf(task_data->CombActionRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Direction = %d\n", task_data->Direction);
        printf("Volume = %d\n", task_data->Volume);
        printf("CombDirection = %d\n", task_data->CombDirection);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ActionLocalID = %s\n", toUtf(task_data->ActionLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("ActionStatus = %d\n", task_data->ActionStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        printf("ComTradeID = %s\n", toUtf(task_data->ComTradeID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryTransferSerial(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTransferSerialField *task_data = (CThostFtdcTransferSerialField *)task->task_data;
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("SessionID = %d\n", task_data->SessionID);
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("FutureAccType = %d\n", task_data->FutureAccType);
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("AvailabilityFlag = %d\n", task_data->AvailabilityFlag);
        printf("OperatorCode = %s\n", toUtf(task_data->OperatorCode));
        printf("BankNewAccount = %s\n", toUtf(task_data->BankNewAccount));
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryAccountregister(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcAccountregisterField *task_data = (CThostFtdcAccountregisterField *)task->task_data;
        printf("TradeDay = %s\n", toUtf(task_data->TradeDay));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("OpenOrDestroy = %d\n", task_data->OpenOrDestroy);
        printf("RegDate = %s\n", toUtf(task_data->RegDate));
        printf("OutDate = %s\n", toUtf(task_data->OutDate));
        printf("TID = %d\n", task_data->TID);
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspError(Task *task)
{
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnOrder(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOrderField *task_data = (CThostFtdcOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OrderPriceType = %d\n", task_data->OrderPriceType);
        printf("Direction = %d\n", task_data->Direction);
        printf("CombOffsetFlag = %s\n", toUtf(task_data->CombOffsetFlag));
        printf("CombHedgeFlag = %s\n", toUtf(task_data->CombHedgeFlag));
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeTotalOriginal = %d\n", task_data->VolumeTotalOriginal);
        printf("TimeCondition = %d\n", task_data->TimeCondition);
        printf("GTDDate = %s\n", toUtf(task_data->GTDDate));
        printf("VolumeCondition = %d\n", task_data->VolumeCondition);
        printf("MinVolume = %d\n", task_data->MinVolume);
        printf("ContingentCondition = %d\n", task_data->ContingentCondition);
        printf("StopPrice = %f\n", task_data->StopPrice);
        printf("ForceCloseReason = %d\n", task_data->ForceCloseReason);
        printf("IsAutoSuspend = %d\n", task_data->IsAutoSuspend);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("OrderLocalID = %s\n", toUtf(task_data->OrderLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("OrderSource = %d\n", task_data->OrderSource);
        printf("OrderStatus = %d\n", task_data->OrderStatus);
        printf("OrderType = %d\n", task_data->OrderType);
        printf("VolumeTraded = %d\n", task_data->VolumeTraded);
        printf("VolumeTotal = %d\n", task_data->VolumeTotal);
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("ActiveTime = %s\n", toUtf(task_data->ActiveTime));
        printf("SuspendTime = %s\n", toUtf(task_data->SuspendTime));
        printf("UpdateTime = %s\n", toUtf(task_data->UpdateTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("ActiveTraderID = %s\n", toUtf(task_data->ActiveTraderID));
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("UserForceClose = %d\n", task_data->UserForceClose);
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerOrderSeq = %d\n", task_data->BrokerOrderSeq);
        printf("RelativeOrderSysID = %s\n", toUtf(task_data->RelativeOrderSysID));
        printf("ZCETotalTradedVolume = %d\n", task_data->ZCETotalTradedVolume);
        printf("IsSwapOrder = %d\n", task_data->IsSwapOrder);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnTrade(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradeField *task_data = (CThostFtdcTradeField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("TradeID = %s\n", toUtf(task_data->TradeID));
        printf("Direction = %d\n", task_data->Direction);
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("TradingRole = %d\n", task_data->TradingRole);
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("OffsetFlag = %d\n", task_data->OffsetFlag);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("Price = %f\n", task_data->Price);
        printf("Volume = %d\n", task_data->Volume);
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("TradeType = %d\n", task_data->TradeType);
        printf("PriceSource = %d\n", task_data->PriceSource);
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("OrderLocalID = %s\n", toUtf(task_data->OrderLocalID));
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("BrokerOrderSeq = %d\n", task_data->BrokerOrderSeq);
        printf("TradeSource = %d\n", task_data->TradeSource);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
};

void ctp_trade_handle::processErrRtnOrderInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputOrderField *task_data = (CThostFtdcInputOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OrderPriceType = %d\n", task_data->OrderPriceType);
        printf("Direction = %d\n", task_data->Direction);
        printf("CombOffsetFlag = %s\n", toUtf(task_data->CombOffsetFlag));
        printf("CombHedgeFlag = %s\n", toUtf(task_data->CombHedgeFlag));
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeTotalOriginal = %d\n", task_data->VolumeTotalOriginal);
        printf("TimeCondition = %d\n", task_data->TimeCondition);
        printf("GTDDate = %s\n", toUtf(task_data->GTDDate));
        printf("VolumeCondition = %d\n", task_data->VolumeCondition);
        printf("MinVolume = %d\n", task_data->MinVolume);
        printf("ContingentCondition = %d\n", task_data->ContingentCondition);
        printf("StopPrice = %f\n", task_data->StopPrice);
        printf("ForceCloseReason = %d\n", task_data->ForceCloseReason);
        printf("IsAutoSuspend = %d\n", task_data->IsAutoSuspend);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("UserForceClose = %d\n", task_data->UserForceClose);
        printf("IsSwapOrder = %d\n", task_data->IsSwapOrder);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOrderActionField *task_data = (CThostFtdcOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OrderActionRef = %d\n", task_data->OrderActionRef);
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeChange = %d\n", task_data->VolumeChange);
        printf("ActionDate = %s\n", toUtf(task_data->ActionDate));
        printf("ActionTime = %s\n", toUtf(task_data->ActionTime));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderLocalID = %s\n", toUtf(task_data->OrderLocalID));
        printf("ActionLocalID = %s\n", toUtf(task_data->ActionLocalID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OrderActionStatus = %d\n", task_data->OrderActionStatus);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnInstrumentStatus(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInstrumentStatusField *task_data = (CThostFtdcInstrumentStatusField *)task->task_data;
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("SettlementGroupID = %s\n", toUtf(task_data->SettlementGroupID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("InstrumentStatus = %d\n", task_data->InstrumentStatus);
        printf("TradingSegmentSN = %d\n", task_data->TradingSegmentSN);
        printf("EnterTime = %s\n", toUtf(task_data->EnterTime));
        printf("EnterReason = %d\n", task_data->EnterReason);
        delete task_data;
    }
};

void ctp_trade_handle::processRtnBulletin(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcBulletinField *task_data = (CThostFtdcBulletinField *)task->task_data;
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("BulletinID = %d\n", task_data->BulletinID);
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("NewsType = %s\n", toUtf(task_data->NewsType));
        printf("NewsUrgency = %d\n", task_data->NewsUrgency);
        printf("SendTime = %s\n", toUtf(task_data->SendTime));
        printf("Abstract = %s\n", toUtf(task_data->Abstract));
        printf("ComeFrom = %s\n", toUtf(task_data->ComeFrom));
        printf("Content = %s\n", toUtf(task_data->Content));
        printf("URLLink = %s\n", toUtf(task_data->URLLink));
        printf("MarketID = %s\n", toUtf(task_data->MarketID));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnTradingNotice(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradingNoticeInfoField *task_data = (CThostFtdcTradingNoticeInfoField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("SendTime = %s\n", toUtf(task_data->SendTime));
        printf("FieldContent = %s\n", toUtf(task_data->FieldContent));
        printf("SequenceSeries = %d\n", task_data->SequenceSeries);
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnErrorConditionalOrder(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcErrorConditionalOrderField *task_data = (CThostFtdcErrorConditionalOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OrderPriceType = %d\n", task_data->OrderPriceType);
        printf("Direction = %d\n", task_data->Direction);
        printf("CombOffsetFlag = %s\n", toUtf(task_data->CombOffsetFlag));
        printf("CombHedgeFlag = %s\n", toUtf(task_data->CombHedgeFlag));
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeTotalOriginal = %d\n", task_data->VolumeTotalOriginal);
        printf("TimeCondition = %d\n", task_data->TimeCondition);
        printf("GTDDate = %s\n", toUtf(task_data->GTDDate));
        printf("VolumeCondition = %d\n", task_data->VolumeCondition);
        printf("MinVolume = %d\n", task_data->MinVolume);
        printf("ContingentCondition = %d\n", task_data->ContingentCondition);
        printf("StopPrice = %f\n", task_data->StopPrice);
        printf("ForceCloseReason = %d\n", task_data->ForceCloseReason);
        printf("IsAutoSuspend = %d\n", task_data->IsAutoSuspend);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("OrderLocalID = %s\n", toUtf(task_data->OrderLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("OrderSource = %d\n", task_data->OrderSource);
        printf("OrderStatus = %d\n", task_data->OrderStatus);
        printf("OrderType = %d\n", task_data->OrderType);
        printf("VolumeTraded = %d\n", task_data->VolumeTraded);
        printf("VolumeTotal = %d\n", task_data->VolumeTotal);
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("ActiveTime = %s\n", toUtf(task_data->ActiveTime));
        printf("SuspendTime = %s\n", toUtf(task_data->SuspendTime));
        printf("UpdateTime = %s\n", toUtf(task_data->UpdateTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("ActiveTraderID = %s\n", toUtf(task_data->ActiveTraderID));
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("UserForceClose = %d\n", task_data->UserForceClose);
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerOrderSeq = %d\n", task_data->BrokerOrderSeq);
        printf("RelativeOrderSysID = %s\n", toUtf(task_data->RelativeOrderSysID));
        printf("ZCETotalTradedVolume = %d\n", task_data->ZCETotalTradedVolume);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("IsSwapOrder = %d\n", task_data->IsSwapOrder);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnExecOrder(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcExecOrderField *task_data = (CThostFtdcExecOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ExecOrderRef = %s\n", toUtf(task_data->ExecOrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OffsetFlag = %d\n", task_data->OffsetFlag);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ActionType = %d\n", task_data->ActionType);
        printf("PosiDirection = %d\n", task_data->PosiDirection);
        printf("ReservePositionFlag = %d\n", task_data->ReservePositionFlag);
        printf("CloseFlag = %d\n", task_data->CloseFlag);
        printf("ExecOrderLocalID = %s\n", toUtf(task_data->ExecOrderLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("ExecOrderSysID = %s\n", toUtf(task_data->ExecOrderSysID));
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("ExecResult = %d\n", task_data->ExecResult);
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerExecOrderSeq = %d\n", task_data->BrokerExecOrderSeq);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
};

void ctp_trade_handle::processErrRtnExecOrderInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputExecOrderField *task_data = (CThostFtdcInputExecOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ExecOrderRef = %s\n", toUtf(task_data->ExecOrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OffsetFlag = %d\n", task_data->OffsetFlag);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ActionType = %d\n", task_data->ActionType);
        printf("PosiDirection = %d\n", task_data->PosiDirection);
        printf("ReservePositionFlag = %d\n", task_data->ReservePositionFlag);
        printf("CloseFlag = %d\n", task_data->CloseFlag);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnExecOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcExecOrderActionField *task_data = (CThostFtdcExecOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("ExecOrderActionRef = %d\n", task_data->ExecOrderActionRef);
        printf("ExecOrderRef = %s\n", toUtf(task_data->ExecOrderRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ExecOrderSysID = %s\n", toUtf(task_data->ExecOrderSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("ActionDate = %s\n", toUtf(task_data->ActionDate));
        printf("ActionTime = %s\n", toUtf(task_data->ActionTime));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("ExecOrderLocalID = %s\n", toUtf(task_data->ExecOrderLocalID));
        printf("ActionLocalID = %s\n", toUtf(task_data->ActionLocalID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OrderActionStatus = %d\n", task_data->OrderActionStatus);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ActionType = %d\n", task_data->ActionType);
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnForQuoteInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputForQuoteField *task_data = (CThostFtdcInputForQuoteField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ForQuoteRef = %s\n", toUtf(task_data->ForQuoteRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnQuote(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcQuoteField *task_data = (CThostFtdcQuoteField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("QuoteRef = %s\n", toUtf(task_data->QuoteRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("AskPrice = %f\n", task_data->AskPrice);
        printf("BidPrice = %f\n", task_data->BidPrice);
        printf("AskVolume = %d\n", task_data->AskVolume);
        printf("BidVolume = %d\n", task_data->BidVolume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("AskOffsetFlag = %d\n", task_data->AskOffsetFlag);
        printf("BidOffsetFlag = %d\n", task_data->BidOffsetFlag);
        printf("AskHedgeFlag = %d\n", task_data->AskHedgeFlag);
        printf("BidHedgeFlag = %d\n", task_data->BidHedgeFlag);
        printf("QuoteLocalID = %s\n", toUtf(task_data->QuoteLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("QuoteSysID = %s\n", toUtf(task_data->QuoteSysID));
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("QuoteStatus = %d\n", task_data->QuoteStatus);
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("AskOrderSysID = %s\n", toUtf(task_data->AskOrderSysID));
        printf("BidOrderSysID = %s\n", toUtf(task_data->BidOrderSysID));
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerQuoteSeq = %d\n", task_data->BrokerQuoteSeq);
        printf("AskOrderRef = %s\n", toUtf(task_data->AskOrderRef));
        printf("BidOrderRef = %s\n", toUtf(task_data->BidOrderRef));
        printf("ForQuoteSysID = %s\n", toUtf(task_data->ForQuoteSysID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
};

void ctp_trade_handle::processErrRtnQuoteInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputQuoteField *task_data = (CThostFtdcInputQuoteField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("QuoteRef = %s\n", toUtf(task_data->QuoteRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("AskPrice = %f\n", task_data->AskPrice);
        printf("BidPrice = %f\n", task_data->BidPrice);
        printf("AskVolume = %d\n", task_data->AskVolume);
        printf("BidVolume = %d\n", task_data->BidVolume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("AskOffsetFlag = %d\n", task_data->AskOffsetFlag);
        printf("BidOffsetFlag = %d\n", task_data->BidOffsetFlag);
        printf("AskHedgeFlag = %d\n", task_data->AskHedgeFlag);
        printf("BidHedgeFlag = %d\n", task_data->BidHedgeFlag);
        printf("AskOrderRef = %s\n", toUtf(task_data->AskOrderRef));
        printf("BidOrderRef = %s\n", toUtf(task_data->BidOrderRef));
        printf("ForQuoteSysID = %s\n", toUtf(task_data->ForQuoteSysID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnQuoteAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcQuoteActionField *task_data = (CThostFtdcQuoteActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("QuoteActionRef = %d\n", task_data->QuoteActionRef);
        printf("QuoteRef = %s\n", toUtf(task_data->QuoteRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("QuoteSysID = %s\n", toUtf(task_data->QuoteSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("ActionDate = %s\n", toUtf(task_data->ActionDate));
        printf("ActionTime = %s\n", toUtf(task_data->ActionTime));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("QuoteLocalID = %s\n", toUtf(task_data->QuoteLocalID));
        printf("ActionLocalID = %s\n", toUtf(task_data->ActionLocalID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OrderActionStatus = %d\n", task_data->OrderActionStatus);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnForQuoteRsp(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcForQuoteRspField *task_data = (CThostFtdcForQuoteRspField *)task->task_data;
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ForQuoteSysID = %s\n", toUtf(task_data->ForQuoteSysID));
        printf("ForQuoteTime = %s\n", toUtf(task_data->ForQuoteTime));
        printf("ActionDay = %s\n", toUtf(task_data->ActionDay));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnCFMMCTradingAccountToken(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcCFMMCTradingAccountTokenField *task_data = (CThostFtdcCFMMCTradingAccountTokenField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("KeyID = %d\n", task_data->KeyID);
        printf("Token = %s\n", toUtf(task_data->Token));
        delete task_data;
    }
};

void ctp_trade_handle::processErrRtnBatchOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcBatchOrderActionField *task_data = (CThostFtdcBatchOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OrderActionRef = %d\n", task_data->OrderActionRef);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ActionDate = %s\n", toUtf(task_data->ActionDate));
        printf("ActionTime = %s\n", toUtf(task_data->ActionTime));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("ActionLocalID = %s\n", toUtf(task_data->ActionLocalID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OrderActionStatus = %d\n", task_data->OrderActionStatus);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnOptionSelfClose(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOptionSelfCloseField *task_data = (CThostFtdcOptionSelfCloseField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OptionSelfCloseRef = %s\n", toUtf(task_data->OptionSelfCloseRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("OptSelfCloseFlag = %d\n", task_data->OptSelfCloseFlag);
        printf("OptionSelfCloseLocalID = %s\n", toUtf(task_data->OptionSelfCloseLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OrderSubmitStatus = %d\n", task_data->OrderSubmitStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("OptionSelfCloseSysID = %s\n", toUtf(task_data->OptionSelfCloseSysID));
        printf("InsertDate = %s\n", toUtf(task_data->InsertDate));
        printf("InsertTime = %s\n", toUtf(task_data->InsertTime));
        printf("CancelTime = %s\n", toUtf(task_data->CancelTime));
        printf("ExecResult = %d\n", task_data->ExecResult);
        printf("ClearingPartID = %s\n", toUtf(task_data->ClearingPartID));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("ActiveUserID = %s\n", toUtf(task_data->ActiveUserID));
        printf("BrokerOptionSelfCloseSeq = %d\n", task_data->BrokerOptionSelfCloseSeq);
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
};

void ctp_trade_handle::processErrRtnOptionSelfCloseInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputOptionSelfCloseField *task_data = (CThostFtdcInputOptionSelfCloseField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OptionSelfCloseRef = %s\n", toUtf(task_data->OptionSelfCloseRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Volume = %d\n", task_data->Volume);
        printf("RequestID = %d\n", task_data->RequestID);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("OptSelfCloseFlag = %d\n", task_data->OptSelfCloseFlag);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnOptionSelfCloseAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOptionSelfCloseActionField *task_data = (CThostFtdcOptionSelfCloseActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OptionSelfCloseActionRef = %d\n", task_data->OptionSelfCloseActionRef);
        printf("OptionSelfCloseRef = %s\n", toUtf(task_data->OptionSelfCloseRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("OptionSelfCloseSysID = %s\n", toUtf(task_data->OptionSelfCloseSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("ActionDate = %s\n", toUtf(task_data->ActionDate));
        printf("ActionTime = %s\n", toUtf(task_data->ActionTime));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("OptionSelfCloseLocalID = %s\n", toUtf(task_data->OptionSelfCloseLocalID));
        printf("ActionLocalID = %s\n", toUtf(task_data->ActionLocalID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("OrderActionStatus = %d\n", task_data->OrderActionStatus);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnCombAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcCombActionField *task_data = (CThostFtdcCombActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("CombActionRef = %s\n", toUtf(task_data->CombActionRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Direction = %d\n", task_data->Direction);
        printf("Volume = %d\n", task_data->Volume);
        printf("CombDirection = %d\n", task_data->CombDirection);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ActionLocalID = %s\n", toUtf(task_data->ActionLocalID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParticipantID = %s\n", toUtf(task_data->ParticipantID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("ExchangeInstID = %s\n", toUtf(task_data->ExchangeInstID));
        printf("TraderID = %s\n", toUtf(task_data->TraderID));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("ActionStatus = %d\n", task_data->ActionStatus);
        printf("NotifySequence = %d\n", task_data->NotifySequence);
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("SettlementID = %d\n", task_data->SettlementID);
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("UserProductInfo = %s\n", toUtf(task_data->UserProductInfo));
        printf("StatusMsg = %s\n", toUtf(task_data->StatusMsg));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        printf("ComTradeID = %s\n", toUtf(task_data->ComTradeID));
        printf("BranchID = %s\n", toUtf(task_data->BranchID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
};

void ctp_trade_handle::processErrRtnCombActionInsert(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcInputCombActionField *task_data = (CThostFtdcInputCombActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("CombActionRef = %s\n", toUtf(task_data->CombActionRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("Direction = %d\n", task_data->Direction);
        printf("Volume = %d\n", task_data->Volume);
        printf("CombDirection = %d\n", task_data->CombDirection);
        printf("HedgeFlag = %d\n", task_data->HedgeFlag);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryContractBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcContractBankField *task_data = (CThostFtdcContractBankField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBrchID = %s\n", toUtf(task_data->BankBrchID));
        printf("BankName = %s\n", toUtf(task_data->BankName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryParkedOrder(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcParkedOrderField *task_data = (CThostFtdcParkedOrderField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("OrderPriceType = %d\n", task_data->OrderPriceType);
        printf("Direction = %d\n", task_data->Direction);
        printf("CombOffsetFlag = %s\n", toUtf(task_data->CombOffsetFlag));
        printf("CombHedgeFlag = %s\n", toUtf(task_data->CombHedgeFlag));
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeTotalOriginal = %d\n", task_data->VolumeTotalOriginal);
        printf("TimeCondition = %d\n", task_data->TimeCondition);
        printf("GTDDate = %s\n", toUtf(task_data->GTDDate));
        printf("VolumeCondition = %d\n", task_data->VolumeCondition);
        printf("MinVolume = %d\n", task_data->MinVolume);
        printf("ContingentCondition = %d\n", task_data->ContingentCondition);
        printf("StopPrice = %f\n", task_data->StopPrice);
        printf("ForceCloseReason = %d\n", task_data->ForceCloseReason);
        printf("IsAutoSuspend = %d\n", task_data->IsAutoSuspend);
        printf("BusinessUnit = %s\n", toUtf(task_data->BusinessUnit));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("UserForceClose = %d\n", task_data->UserForceClose);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("ParkedOrderID = %s\n", toUtf(task_data->ParkedOrderID));
        printf("UserType = %d\n", task_data->UserType);
        printf("Status = %d\n", task_data->Status);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("IsSwapOrder = %d\n", task_data->IsSwapOrder);
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("ClientID = %s\n", toUtf(task_data->ClientID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryParkedOrderAction(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcParkedOrderActionField *task_data = (CThostFtdcParkedOrderActionField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("OrderActionRef = %d\n", task_data->OrderActionRef);
        printf("OrderRef = %s\n", toUtf(task_data->OrderRef));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("FrontID = %d\n", task_data->FrontID);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("OrderSysID = %s\n", toUtf(task_data->OrderSysID));
        printf("ActionFlag = %d\n", task_data->ActionFlag);
        printf("LimitPrice = %f\n", task_data->LimitPrice);
        printf("VolumeChange = %d\n", task_data->VolumeChange);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("ParkedOrderActionID = %s\n", toUtf(task_data->ParkedOrderActionID));
        printf("UserType = %d\n", task_data->UserType);
        printf("Status = %d\n", task_data->Status);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        printf("IPAddress = %s\n", toUtf(task_data->IPAddress));
        printf("MacAddress = %s\n", toUtf(task_data->MacAddress));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryTradingNotice(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcTradingNoticeField *task_data = (CThostFtdcTradingNoticeField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorRange = %d\n", task_data->InvestorRange);
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("SequenceSeries = %d\n", task_data->SequenceSeries);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("SendTime = %s\n", toUtf(task_data->SendTime));
        printf("SequenceNo = %d\n", task_data->SequenceNo);
        printf("FieldContent = %s\n", toUtf(task_data->FieldContent));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryBrokerTradingParams(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcBrokerTradingParamsField *task_data = (CThostFtdcBrokerTradingParamsField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("MarginPriceType = %d\n", task_data->MarginPriceType);
        printf("Algorithm = %d\n", task_data->Algorithm);
        printf("AvailIncludeCloseProfit = %d\n", task_data->AvailIncludeCloseProfit);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("OptionRoyaltyPriceType = %d\n", task_data->OptionRoyaltyPriceType);
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQryBrokerTradingAlgos(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcBrokerTradingAlgosField *task_data = (CThostFtdcBrokerTradingAlgosField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("ExchangeID = %s\n", toUtf(task_data->ExchangeID));
        printf("InstrumentID = %s\n", toUtf(task_data->InstrumentID));
        printf("HandlePositionAlgoID = %d\n", task_data->HandlePositionAlgoID);
        printf("FindMarginRateAlgoID = %d\n", task_data->FindMarginRateAlgoID);
        printf("HandleTradingAccountAlgoID = %d\n", task_data->HandleTradingAccountAlgoID);
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQueryCFMMCTradingAccountToken(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcQueryCFMMCTradingAccountTokenField *task_data = (CThostFtdcQueryCFMMCTradingAccountTokenField *)task->task_data;
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("InvestorID = %s\n", toUtf(task_data->InvestorID));
        printf("InvestUnitID = %s\n", toUtf(task_data->InvestUnitID));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnFromBankToFutureByBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnFromFutureToBankByBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnRepealFromBankToFutureByBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnRepealFromFutureToBankByBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnFromBankToFutureByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnFromFutureToBankByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspTransferField *task_data = (CThostFtdcRspTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnRepealFromBankToFutureByFutureManual(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnRepealFromFutureToBankByFutureManual(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnQueryBankBalanceByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcNotifyQueryAccountField *task_data = (CThostFtdcNotifyQueryAccountField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("InstallID = %d\n", task_data->InstallID);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("BankUseAmount = %f\n", task_data->BankUseAmount);
        printf("BankFetchAmount = %f\n", task_data->BankFetchAmount);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processErrRtnBankToFutureByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnFutureToBankByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnRepealBankToFutureByFutureManual(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqRepealField *task_data = (CThostFtdcReqRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnRepealFutureToBankByFutureManual(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqRepealField *task_data = (CThostFtdcReqRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processErrRtnQueryBankBalanceByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqQueryAccountField *task_data = (CThostFtdcReqQueryAccountField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("InstallID = %d\n", task_data->InstallID);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnRepealFromBankToFutureByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnRepealFromFutureToBankByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcRspRepealField *task_data = (CThostFtdcRspRepealField *)task->task_data;
        printf("RepealTimeInterval = %d\n", task_data->RepealTimeInterval);
        printf("RepealedTimes = %d\n", task_data->RepealedTimes);
        printf("BankRepealFlag = %d\n", task_data->BankRepealFlag);
        printf("BrokerRepealFlag = %d\n", task_data->BrokerRepealFlag);
        printf("PlateRepealSerial = %d\n", task_data->PlateRepealSerial);
        printf("BankRepealSerial = %s\n", toUtf(task_data->BankRepealSerial));
        printf("FutureRepealSerial = %d\n", task_data->FutureRepealSerial);
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRspFromBankToFutureByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspFromFutureToBankByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqTransferField *task_data = (CThostFtdcReqTransferField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("TradeAmount = %f\n", task_data->TradeAmount);
        printf("FutureFetchAmount = %f\n", task_data->FutureFetchAmount);
        printf("FeePayFlag = %d\n", task_data->FeePayFlag);
        printf("CustFee = %f\n", task_data->CustFee);
        printf("BrokerFee = %f\n", task_data->BrokerFee);
        printf("Message = %s\n", toUtf(task_data->Message));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("TransferStatus = %d\n", task_data->TransferStatus);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRspQueryBankAccountMoneyByFuture(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcReqQueryAccountField *task_data = (CThostFtdcReqQueryAccountField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("CustType = %d\n", task_data->CustType);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("FutureSerial = %d\n", task_data->FutureSerial);
        printf("InstallID = %d\n", task_data->InstallID);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("RequestID = %d\n", task_data->RequestID);
        printf("TID = %d\n", task_data->TID);
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
    if (task->task_error)
    {
        CThostFtdcRspInfoField *task_error = (CThostFtdcRspInfoField *)task->task_error;
        printf("ErrorID = %d\n", task_error->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_error->ErrorMsg));
        delete task_error;
    }
};

void ctp_trade_handle::processRtnOpenAccountByBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcOpenAccountField *task_data = (CThostFtdcOpenAccountField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("Gender = %d\n", task_data->Gender);
        printf("CountryCode = %s\n", toUtf(task_data->CountryCode));
        printf("CustType = %d\n", task_data->CustType);
        printf("Address = %s\n", toUtf(task_data->Address));
        printf("ZipCode = %s\n", toUtf(task_data->ZipCode));
        printf("Telephone = %s\n", toUtf(task_data->Telephone));
        printf("MobilePhone = %s\n", toUtf(task_data->MobilePhone));
        printf("Fax = %s\n", toUtf(task_data->Fax));
        printf("EMail = %s\n", toUtf(task_data->EMail));
        printf("MoneyAccountStatus = %d\n", task_data->MoneyAccountStatus);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("CashExchangeCode = %d\n", task_data->CashExchangeCode);
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("TID = %d\n", task_data->TID);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnCancelAccountByBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcCancelAccountField *task_data = (CThostFtdcCancelAccountField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("Gender = %d\n", task_data->Gender);
        printf("CountryCode = %s\n", toUtf(task_data->CountryCode));
        printf("CustType = %d\n", task_data->CustType);
        printf("Address = %s\n", toUtf(task_data->Address));
        printf("ZipCode = %s\n", toUtf(task_data->ZipCode));
        printf("Telephone = %s\n", toUtf(task_data->Telephone));
        printf("MobilePhone = %s\n", toUtf(task_data->MobilePhone));
        printf("Fax = %s\n", toUtf(task_data->Fax));
        printf("EMail = %s\n", toUtf(task_data->EMail));
        printf("MoneyAccountStatus = %d\n", task_data->MoneyAccountStatus);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("InstallID = %d\n", task_data->InstallID);
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("CashExchangeCode = %d\n", task_data->CashExchangeCode);
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("DeviceID = %s\n", toUtf(task_data->DeviceID));
        printf("BankSecuAccType = %d\n", task_data->BankSecuAccType);
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankSecuAcc = %s\n", toUtf(task_data->BankSecuAcc));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("OperNo = %s\n", toUtf(task_data->OperNo));
        printf("TID = %d\n", task_data->TID);
        printf("UserID = %s\n", toUtf(task_data->UserID));
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processRtnChangeAccountByBank(Task *task)
{
    if (task->task_data)
    {
        CThostFtdcChangeAccountField *task_data = (CThostFtdcChangeAccountField *)task->task_data;
        printf("TradeCode = %s\n", toUtf(task_data->TradeCode));
        printf("BankID = %s\n", toUtf(task_data->BankID));
        printf("BankBranchID = %s\n", toUtf(task_data->BankBranchID));
        printf("BrokerID = %s\n", toUtf(task_data->BrokerID));
        printf("BrokerBranchID = %s\n", toUtf(task_data->BrokerBranchID));
        printf("TradeDate = %s\n", toUtf(task_data->TradeDate));
        printf("TradeTime = %s\n", toUtf(task_data->TradeTime));
        printf("BankSerial = %s\n", toUtf(task_data->BankSerial));
        printf("TradingDay = %s\n", toUtf(task_data->TradingDay));
        printf("PlateSerial = %d\n", task_data->PlateSerial);
        printf("LastFragment = %d\n", task_data->LastFragment);
        printf("SessionID = %d\n", task_data->SessionID);
        printf("CustomerName = %s\n", toUtf(task_data->CustomerName));
        printf("IdCardType = %d\n", task_data->IdCardType);
        printf("IdentifiedCardNo = %s\n", toUtf(task_data->IdentifiedCardNo));
        printf("Gender = %d\n", task_data->Gender);
        printf("CountryCode = %s\n", toUtf(task_data->CountryCode));
        printf("CustType = %d\n", task_data->CustType);
        printf("Address = %s\n", toUtf(task_data->Address));
        printf("ZipCode = %s\n", toUtf(task_data->ZipCode));
        printf("Telephone = %s\n", toUtf(task_data->Telephone));
        printf("MobilePhone = %s\n", toUtf(task_data->MobilePhone));
        printf("Fax = %s\n", toUtf(task_data->Fax));
        printf("EMail = %s\n", toUtf(task_data->EMail));
        printf("MoneyAccountStatus = %d\n", task_data->MoneyAccountStatus);
        printf("BankAccount = %s\n", toUtf(task_data->BankAccount));
        printf("BankPassWord = %s\n", toUtf(task_data->BankPassWord));
        printf("NewBankAccount = %s\n", toUtf(task_data->NewBankAccount));
        printf("NewBankPassWord = %s\n", toUtf(task_data->NewBankPassWord));
        printf("AccountID = %s\n", toUtf(task_data->AccountID));
        printf("Password = %s\n", toUtf(task_data->Password));
        printf("BankAccType = %d\n", task_data->BankAccType);
        printf("InstallID = %d\n", task_data->InstallID);
        printf("VerifyCertNoFlag = %d\n", task_data->VerifyCertNoFlag);
        printf("CurrencyID = %s\n", toUtf(task_data->CurrencyID));
        printf("BrokerIDByBank = %s\n", toUtf(task_data->BrokerIDByBank));
        printf("BankPwdFlag = %d\n", task_data->BankPwdFlag);
        printf("SecuPwdFlag = %d\n", task_data->SecuPwdFlag);
        printf("TID = %d\n", task_data->TID);
        printf("Digest = %s\n", toUtf(task_data->Digest));
        printf("ErrorID = %d\n", task_data->ErrorID);
        printf("ErrorMsg = %s\n", toUtf(task_data->ErrorMsg));
        printf("LongCustomerName = %s\n", toUtf(task_data->LongCustomerName));
        delete task_data;
    }
};

void ctp_trade_handle::processTask()
{
    try
    {
        while (this->_active)
        {
            Task task = this->_task_queue.pop();
            std::cout << task.task_name << endl;
            std::cout << task.task_error << endl;
            std::cout << task.task_id << endl;
            std::cout << task.task_data << endl;
            switch (task.task_name)
            {
            case ONFRONTCONNECTED:
            {
                this->processFrontConnected(&task);
                break;
            }

            case ONFRONTDISCONNECTED:
            {
                this->processFrontDisconnected(&task);
                break;
            }

            case ONHEARTBEATWARNING:
            {
                this->processHeartBeatWarning(&task);
                break;
            }

            case ONRSPAUTHENTICATE:
            {
                this->processRspAuthenticate(&task);
                break;
            }

            case ONRSPUSERLOGIN:
            {
                this->processRspUserLogin(&task);
                break;
            }

            case ONRSPUSERLOGOUT:
            {
                this->processRspUserLogout(&task);
                break;
            }

            case ONRSPUSERPASSWORDUPDATE:
            {
                this->processRspUserPasswordUpdate(&task);
                break;
            }

            case ONRSPTRADINGACCOUNTPASSWORDUPDATE:
            {
                this->processRspTradingAccountPasswordUpdate(&task);
                break;
            }

            case ONRSPUSERAUTHMETHOD:
            {
                this->processRspUserAuthMethod(&task);
                break;
            }

            case ONRSPGENUSERCAPTCHA:
            {
                this->processRspGenUserCaptcha(&task);
                break;
            }

            case ONRSPGENUSERTEXT:
            {
                this->processRspGenUserText(&task);
                break;
            }

            case ONRSPORDERINSERT:
            {
                this->processRspOrderInsert(&task);
                break;
            }

            case ONRSPPARKEDORDERINSERT:
            {
                this->processRspParkedOrderInsert(&task);
                break;
            }

            case ONRSPPARKEDORDERACTION:
            {
                this->processRspParkedOrderAction(&task);
                break;
            }

            case ONRSPORDERACTION:
            {
                this->processRspOrderAction(&task);
                break;
            }

            case ONRSPQUERYMAXORDERVOLUME:
            {
                this->processRspQueryMaxOrderVolume(&task);
                break;
            }

            case ONRSPSETTLEMENTINFOCONFIRM:
            {
                this->processRspSettlementInfoConfirm(&task);
                break;
            }

            case ONRSPREMOVEPARKEDORDER:
            {
                this->processRspRemoveParkedOrder(&task);
                break;
            }

            case ONRSPREMOVEPARKEDORDERACTION:
            {
                this->processRspRemoveParkedOrderAction(&task);
                break;
            }

            case ONRSPEXECORDERINSERT:
            {
                this->processRspExecOrderInsert(&task);
                break;
            }

            case ONRSPEXECORDERACTION:
            {
                this->processRspExecOrderAction(&task);
                break;
            }

            case ONRSPFORQUOTEINSERT:
            {
                this->processRspForQuoteInsert(&task);
                break;
            }

            case ONRSPQUOTEINSERT:
            {
                this->processRspQuoteInsert(&task);
                break;
            }

            case ONRSPQUOTEACTION:
            {
                this->processRspQuoteAction(&task);
                break;
            }

            case ONRSPBATCHORDERACTION:
            {
                this->processRspBatchOrderAction(&task);
                break;
            }

            case ONRSPOPTIONSELFCLOSEINSERT:
            {
                this->processRspOptionSelfCloseInsert(&task);
                break;
            }

            case ONRSPOPTIONSELFCLOSEACTION:
            {
                this->processRspOptionSelfCloseAction(&task);
                break;
            }

            case ONRSPCOMBACTIONINSERT:
            {
                this->processRspCombActionInsert(&task);
                break;
            }

            case ONRSPQRYORDER:
            {
                this->processRspQryOrder(&task);
                break;
            }

            case ONRSPQRYTRADE:
            {
                this->processRspQryTrade(&task);
                break;
            }

            case ONRSPQRYINVESTORPOSITION:
            {
                this->processRspQryInvestorPosition(&task);
                break;
            }

            case ONRSPQRYTRADINGACCOUNT:
            {
                this->processRspQryTradingAccount(&task);
                break;
            }

            case ONRSPQRYINVESTOR:
            {
                this->processRspQryInvestor(&task);
                break;
            }

            case ONRSPQRYTRADINGCODE:
            {
                this->processRspQryTradingCode(&task);
                break;
            }

            case ONRSPQRYINSTRUMENTMARGINRATE:
            {
                this->processRspQryInstrumentMarginRate(&task);
                break;
            }

            case ONRSPQRYINSTRUMENTCOMMISSIONRATE:
            {
                this->processRspQryInstrumentCommissionRate(&task);
                break;
            }

            case ONRSPQRYEXCHANGE:
            {
                this->processRspQryExchange(&task);
                break;
            }

            case ONRSPQRYPRODUCT:
            {
                this->processRspQryProduct(&task);
                break;
            }

            case ONRSPQRYINSTRUMENT:
            {
                this->processRspQryInstrument(&task);
                break;
            }

            case ONRSPQRYDEPTHMARKETDATA:
            {
                this->processRspQryDepthMarketData(&task);
                break;
            }

            case ONRSPQRYSETTLEMENTINFO:
            {
                this->processRspQrySettlementInfo(&task);
                break;
            }

            case ONRSPQRYTRANSFERBANK:
            {
                this->processRspQryTransferBank(&task);
                break;
            }

            case ONRSPQRYINVESTORPOSITIONDETAIL:
            {
                this->processRspQryInvestorPositionDetail(&task);
                break;
            }

            case ONRSPQRYNOTICE:
            {
                this->processRspQryNotice(&task);
                break;
            }

            case ONRSPQRYSETTLEMENTINFOCONFIRM:
            {
                this->processRspQrySettlementInfoConfirm(&task);
                break;
            }

            case ONRSPQRYINVESTORPOSITIONCOMBINEDETAIL:
            {
                this->processRspQryInvestorPositionCombineDetail(&task);
                break;
            }

            case ONRSPQRYCFMMCTRADINGACCOUNTKEY:
            {
                this->processRspQryCFMMCTradingAccountKey(&task);
                break;
            }

            case ONRSPQRYEWARRANTOFFSET:
            {
                this->processRspQryEWarrantOffset(&task);
                break;
            }

            case ONRSPQRYINVESTORPRODUCTGROUPMARGIN:
            {
                this->processRspQryInvestorProductGroupMargin(&task);
                break;
            }

            case ONRSPQRYEXCHANGEMARGINRATE:
            {
                this->processRspQryExchangeMarginRate(&task);
                break;
            }

            case ONRSPQRYEXCHANGEMARGINRATEADJUST:
            {
                this->processRspQryExchangeMarginRateAdjust(&task);
                break;
            }

            case ONRSPQRYEXCHANGERATE:
            {
                this->processRspQryExchangeRate(&task);
                break;
            }

            case ONRSPQRYSECAGENTACIDMAP:
            {
                this->processRspQrySecAgentACIDMap(&task);
                break;
            }

            case ONRSPQRYPRODUCTEXCHRATE:
            {
                this->processRspQryProductExchRate(&task);
                break;
            }

            case ONRSPQRYPRODUCTGROUP:
            {
                this->processRspQryProductGroup(&task);
                break;
            }

            case ONRSPQRYMMINSTRUMENTCOMMISSIONRATE:
            {
                this->processRspQryMMInstrumentCommissionRate(&task);
                break;
            }

            case ONRSPQRYMMOPTIONINSTRCOMMRATE:
            {
                this->processRspQryMMOptionInstrCommRate(&task);
                break;
            }

            case ONRSPQRYINSTRUMENTORDERCOMMRATE:
            {
                this->processRspQryInstrumentOrderCommRate(&task);
                break;
            }

            case ONRSPQRYSECAGENTTRADINGACCOUNT:
            {
                this->processRspQrySecAgentTradingAccount(&task);
                break;
            }

            case ONRSPQRYSECAGENTCHECKMODE:
            {
                this->processRspQrySecAgentCheckMode(&task);
                break;
            }

            case ONRSPQRYSECAGENTTRADEINFO:
            {
                this->processRspQrySecAgentTradeInfo(&task);
                break;
            }

            case ONRSPQRYOPTIONINSTRTRADECOST:
            {
                this->processRspQryOptionInstrTradeCost(&task);
                break;
            }

            case ONRSPQRYOPTIONINSTRCOMMRATE:
            {
                this->processRspQryOptionInstrCommRate(&task);
                break;
            }

            case ONRSPQRYEXECORDER:
            {
                this->processRspQryExecOrder(&task);
                break;
            }

            case ONRSPQRYFORQUOTE:
            {
                this->processRspQryForQuote(&task);
                break;
            }

            case ONRSPQRYQUOTE:
            {
                this->processRspQryQuote(&task);
                break;
            }

            case ONRSPQRYOPTIONSELFCLOSE:
            {
                this->processRspQryOptionSelfClose(&task);
                break;
            }

            case ONRSPQRYINVESTUNIT:
            {
                this->processRspQryInvestUnit(&task);
                break;
            }

            case ONRSPQRYCOMBINSTRUMENTGUARD:
            {
                this->processRspQryCombInstrumentGuard(&task);
                break;
            }

            case ONRSPQRYCOMBACTION:
            {
                this->processRspQryCombAction(&task);
                break;
            }

            case ONRSPQRYTRANSFERSERIAL:
            {
                this->processRspQryTransferSerial(&task);
                break;
            }

            case ONRSPQRYACCOUNTREGISTER:
            {
                this->processRspQryAccountregister(&task);
                break;
            }

            case ONRSPERROR:
            {
                this->processRspError(&task);
                break;
            }

            case ONRTNORDER:
            {
                this->processRtnOrder(&task);
                break;
            }

            case ONRTNTRADE:
            {
                this->processRtnTrade(&task);
                break;
            }

            case ONERRRTNORDERINSERT:
            {
                this->processErrRtnOrderInsert(&task);
                break;
            }

            case ONERRRTNORDERACTION:
            {
                this->processErrRtnOrderAction(&task);
                break;
            }

            case ONRTNINSTRUMENTSTATUS:
            {
                this->processRtnInstrumentStatus(&task);
                break;
            }

            case ONRTNBULLETIN:
            {
                this->processRtnBulletin(&task);
                break;
            }

            case ONRTNTRADINGNOTICE:
            {
                this->processRtnTradingNotice(&task);
                break;
            }

            case ONRTNERRORCONDITIONALORDER:
            {
                this->processRtnErrorConditionalOrder(&task);
                break;
            }

            case ONRTNEXECORDER:
            {
                this->processRtnExecOrder(&task);
                break;
            }

            case ONERRRTNEXECORDERINSERT:
            {
                this->processErrRtnExecOrderInsert(&task);
                break;
            }

            case ONERRRTNEXECORDERACTION:
            {
                this->processErrRtnExecOrderAction(&task);
                break;
            }

            case ONERRRTNFORQUOTEINSERT:
            {
                this->processErrRtnForQuoteInsert(&task);
                break;
            }

            case ONRTNQUOTE:
            {
                this->processRtnQuote(&task);
                break;
            }

            case ONERRRTNQUOTEINSERT:
            {
                this->processErrRtnQuoteInsert(&task);
                break;
            }

            case ONERRRTNQUOTEACTION:
            {
                this->processErrRtnQuoteAction(&task);
                break;
            }

            case ONRTNFORQUOTERSP:
            {
                this->processRtnForQuoteRsp(&task);
                break;
            }

            case ONRTNCFMMCTRADINGACCOUNTTOKEN:
            {
                this->processRtnCFMMCTradingAccountToken(&task);
                break;
            }

            case ONERRRTNBATCHORDERACTION:
            {
                this->processErrRtnBatchOrderAction(&task);
                break;
            }

            case ONRTNOPTIONSELFCLOSE:
            {
                this->processRtnOptionSelfClose(&task);
                break;
            }

            case ONERRRTNOPTIONSELFCLOSEINSERT:
            {
                this->processErrRtnOptionSelfCloseInsert(&task);
                break;
            }

            case ONERRRTNOPTIONSELFCLOSEACTION:
            {
                this->processErrRtnOptionSelfCloseAction(&task);
                break;
            }

            case ONRTNCOMBACTION:
            {
                this->processRtnCombAction(&task);
                break;
            }

            case ONERRRTNCOMBACTIONINSERT:
            {
                this->processErrRtnCombActionInsert(&task);
                break;
            }

            case ONRSPQRYCONTRACTBANK:
            {
                this->processRspQryContractBank(&task);
                break;
            }

            case ONRSPQRYPARKEDORDER:
            {
                this->processRspQryParkedOrder(&task);
                break;
            }

            case ONRSPQRYPARKEDORDERACTION:
            {
                this->processRspQryParkedOrderAction(&task);
                break;
            }

            case ONRSPQRYTRADINGNOTICE:
            {
                this->processRspQryTradingNotice(&task);
                break;
            }

            case ONRSPQRYBROKERTRADINGPARAMS:
            {
                this->processRspQryBrokerTradingParams(&task);
                break;
            }

            case ONRSPQRYBROKERTRADINGALGOS:
            {
                this->processRspQryBrokerTradingAlgos(&task);
                break;
            }

            case ONRSPQUERYCFMMCTRADINGACCOUNTTOKEN:
            {
                this->processRspQueryCFMMCTradingAccountToken(&task);
                break;
            }

            case ONRTNFROMBANKTOFUTUREBYBANK:
            {
                this->processRtnFromBankToFutureByBank(&task);
                break;
            }

            case ONRTNFROMFUTURETOBANKBYBANK:
            {
                this->processRtnFromFutureToBankByBank(&task);
                break;
            }

            case ONRTNREPEALFROMBANKTOFUTUREBYBANK:
            {
                this->processRtnRepealFromBankToFutureByBank(&task);
                break;
            }

            case ONRTNREPEALFROMFUTURETOBANKBYBANK:
            {
                this->processRtnRepealFromFutureToBankByBank(&task);
                break;
            }

            case ONRTNFROMBANKTOFUTUREBYFUTURE:
            {
                this->processRtnFromBankToFutureByFuture(&task);
                break;
            }

            case ONRTNFROMFUTURETOBANKBYFUTURE:
            {
                this->processRtnFromFutureToBankByFuture(&task);
                break;
            }

            case ONRTNREPEALFROMBANKTOFUTUREBYFUTUREMANUAL:
            {
                this->processRtnRepealFromBankToFutureByFutureManual(&task);
                break;
            }

            case ONRTNREPEALFROMFUTURETOBANKBYFUTUREMANUAL:
            {
                this->processRtnRepealFromFutureToBankByFutureManual(&task);
                break;
            }

            case ONRTNQUERYBANKBALANCEBYFUTURE:
            {
                this->processRtnQueryBankBalanceByFuture(&task);
                break;
            }

            case ONERRRTNBANKTOFUTUREBYFUTURE:
            {
                this->processErrRtnBankToFutureByFuture(&task);
                break;
            }

            case ONERRRTNFUTURETOBANKBYFUTURE:
            {
                this->processErrRtnFutureToBankByFuture(&task);
                break;
            }

            case ONERRRTNREPEALBANKTOFUTUREBYFUTUREMANUAL:
            {
                this->processErrRtnRepealBankToFutureByFutureManual(&task);
                break;
            }

            case ONERRRTNREPEALFUTURETOBANKBYFUTUREMANUAL:
            {
                this->processErrRtnRepealFutureToBankByFutureManual(&task);
                break;
            }

            case ONERRRTNQUERYBANKBALANCEBYFUTURE:
            {
                this->processErrRtnQueryBankBalanceByFuture(&task);
                break;
            }

            case ONRTNREPEALFROMBANKTOFUTUREBYFUTURE:
            {
                this->processRtnRepealFromBankToFutureByFuture(&task);
                break;
            }

            case ONRTNREPEALFROMFUTURETOBANKBYFUTURE:
            {
                this->processRtnRepealFromFutureToBankByFuture(&task);
                break;
            }

            case ONRSPFROMBANKTOFUTUREBYFUTURE:
            {
                this->processRspFromBankToFutureByFuture(&task);
                break;
            }

            case ONRSPFROMFUTURETOBANKBYFUTURE:
            {
                this->processRspFromFutureToBankByFuture(&task);
                break;
            }

            case ONRSPQUERYBANKACCOUNTMONEYBYFUTURE:
            {
                this->processRspQueryBankAccountMoneyByFuture(&task);
                break;
            }

            case ONRTNOPENACCOUNTBYBANK:
            {
                this->processRtnOpenAccountByBank(&task);
                break;
            }

            case ONRTNCANCELACCOUNTBYBANK:
            {
                this->processRtnCancelAccountByBank(&task);
                break;
            }

            case ONRTNCHANGEACCOUNTBYBANK:
            {
                this->processRtnChangeAccountByBank(&task);
                break;
            }
            }
        }
    }
    catch (const TerminatedError &)
    {
    }
}

bool ctp_trade_handle::CreateFtdcTraderApi(const char *pszFlowPath)
{
    _api = CThostFtdcTraderApi::CreateFtdcTraderApi(pszFlowPath);
    if (nullptr == _api)
        return false;
    this->_api->RegisterSpi(this);
    return true;
}

void ctp_trade_handle::init()
{
    this->_active = true;
    this->_task_thread = thread(&ctp_trade_handle::processTask, this);
    SubscribePrivateTopic(THOST_TERT_QUICK);
    SubscribePublicTopic(THOST_TERT_QUICK);
    std::cout << this->_api->GetApiVersion() << std::endl;
    this->_api->Init();
};

void ctp_trade_handle::release()
{
    this->_api->Release();
};

int ctp_trade_handle::join()
{
    int i = this->_api->Join();
    return i;
};

int ctp_trade_handle::exit()
{
    this->_active = false;
    this->_task_queue.terminate();
    this->_task_thread.join();

    this->_api->RegisterSpi(NULL);
    this->_api->Release();
    this->_api = NULL;
    return 1;
};

string ctp_trade_handle::getTradingDay()
{
    string day = this->_api->GetTradingDay();
    return day;
};

void ctp_trade_handle::RegisterFront(char *pszFrontAddress)
{
    return _api->RegisterFront(pszFrontAddress);
}
int ctp_trade_handle::ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID)
{
    return _api->ReqAuthenticate(pReqAuthenticateField, nRequestID);
}

void ctp_trade_handle::SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType)
{
    return _api->SubscribePrivateTopic(nResumeType);
}

void ctp_trade_handle::SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType)
{
    return _api->SubscribePublicTopic(nResumeType);
}

int ctp_trade_handle::ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID)
{
    return _api->ReqUserLogin(pReqUserLoginField, nRequestID);
}
