#ifndef _CTP_TRADE_HANDLER_H_
#define _CTP_TRADE_HANDLER_H_

#include "ThostFtdcTraderApi.h"
#include "ctp_queue.h"
#include "ThostFtdcUserApiDataType.h"

#define ONFRONTCONNECTED 0
#define ONFRONTDISCONNECTED 1
#define ONHEARTBEATWARNING 2
#define ONRSPAUTHENTICATE 3
#define ONRSPUSERLOGIN 4
#define ONRSPUSERLOGOUT 5
#define ONRSPUSERPASSWORDUPDATE 6
#define ONRSPTRADINGACCOUNTPASSWORDUPDATE 7
#define ONRSPUSERAUTHMETHOD 8
#define ONRSPGENUSERCAPTCHA 9
#define ONRSPGENUSERTEXT 10
#define ONRSPORDERINSERT 11
#define ONRSPPARKEDORDERINSERT 12
#define ONRSPPARKEDORDERACTION 13
#define ONRSPORDERACTION 14
#define ONRSPQUERYMAXORDERVOLUME 15
#define ONRSPSETTLEMENTINFOCONFIRM 16
#define ONRSPREMOVEPARKEDORDER 17
#define ONRSPREMOVEPARKEDORDERACTION 18
#define ONRSPEXECORDERINSERT 19
#define ONRSPEXECORDERACTION 20
#define ONRSPFORQUOTEINSERT 21
#define ONRSPQUOTEINSERT 22
#define ONRSPQUOTEACTION 23
#define ONRSPBATCHORDERACTION 24
#define ONRSPOPTIONSELFCLOSEINSERT 25
#define ONRSPOPTIONSELFCLOSEACTION 26
#define ONRSPCOMBACTIONINSERT 27
#define ONRSPQRYORDER 28
#define ONRSPQRYTRADE 29
#define ONRSPQRYINVESTORPOSITION 30
#define ONRSPQRYTRADINGACCOUNT 31
#define ONRSPQRYINVESTOR 32
#define ONRSPQRYTRADINGCODE 33
#define ONRSPQRYINSTRUMENTMARGINRATE 34
#define ONRSPQRYINSTRUMENTCOMMISSIONRATE 35
#define ONRSPQRYEXCHANGE 36
#define ONRSPQRYPRODUCT 37
#define ONRSPQRYINSTRUMENT 38
#define ONRSPQRYDEPTHMARKETDATA 39
#define ONRSPQRYSETTLEMENTINFO 40
#define ONRSPQRYTRANSFERBANK 41
#define ONRSPQRYINVESTORPOSITIONDETAIL 42
#define ONRSPQRYNOTICE 43
#define ONRSPQRYSETTLEMENTINFOCONFIRM 44
#define ONRSPQRYINVESTORPOSITIONCOMBINEDETAIL 45
#define ONRSPQRYCFMMCTRADINGACCOUNTKEY 46
#define ONRSPQRYEWARRANTOFFSET 47
#define ONRSPQRYINVESTORPRODUCTGROUPMARGIN 48
#define ONRSPQRYEXCHANGEMARGINRATE 49
#define ONRSPQRYEXCHANGEMARGINRATEADJUST 50
#define ONRSPQRYEXCHANGERATE 51
#define ONRSPQRYSECAGENTACIDMAP 52
#define ONRSPQRYPRODUCTEXCHRATE 53
#define ONRSPQRYPRODUCTGROUP 54
#define ONRSPQRYMMINSTRUMENTCOMMISSIONRATE 55
#define ONRSPQRYMMOPTIONINSTRCOMMRATE 56
#define ONRSPQRYINSTRUMENTORDERCOMMRATE 57
#define ONRSPQRYSECAGENTTRADINGACCOUNT 58
#define ONRSPQRYSECAGENTCHECKMODE 59
#define ONRSPQRYSECAGENTTRADEINFO 60
#define ONRSPQRYOPTIONINSTRTRADECOST 61
#define ONRSPQRYOPTIONINSTRCOMMRATE 62
#define ONRSPQRYEXECORDER 63
#define ONRSPQRYFORQUOTE 64
#define ONRSPQRYQUOTE 65
#define ONRSPQRYOPTIONSELFCLOSE 66
#define ONRSPQRYINVESTUNIT 67
#define ONRSPQRYCOMBINSTRUMENTGUARD 68
#define ONRSPQRYCOMBACTION 69
#define ONRSPQRYTRANSFERSERIAL 70
#define ONRSPQRYACCOUNTREGISTER 71
#define ONRSPERROR 72
#define ONRTNORDER 73
#define ONRTNTRADE 74
#define ONERRRTNORDERINSERT 75
#define ONERRRTNORDERACTION 76
#define ONRTNINSTRUMENTSTATUS 77
#define ONRTNBULLETIN 78
#define ONRTNTRADINGNOTICE 79
#define ONRTNERRORCONDITIONALORDER 80
#define ONRTNEXECORDER 81
#define ONERRRTNEXECORDERINSERT 82
#define ONERRRTNEXECORDERACTION 83
#define ONERRRTNFORQUOTEINSERT 84
#define ONRTNQUOTE 85
#define ONERRRTNQUOTEINSERT 86
#define ONERRRTNQUOTEACTION 87
#define ONRTNFORQUOTERSP 88
#define ONRTNCFMMCTRADINGACCOUNTTOKEN 89
#define ONERRRTNBATCHORDERACTION 90
#define ONRTNOPTIONSELFCLOSE 91
#define ONERRRTNOPTIONSELFCLOSEINSERT 92
#define ONERRRTNOPTIONSELFCLOSEACTION 93
#define ONRTNCOMBACTION 94
#define ONERRRTNCOMBACTIONINSERT 95
#define ONRSPQRYCONTRACTBANK 96
#define ONRSPQRYPARKEDORDER 97
#define ONRSPQRYPARKEDORDERACTION 98
#define ONRSPQRYTRADINGNOTICE 99
#define ONRSPQRYBROKERTRADINGPARAMS 100
#define ONRSPQRYBROKERTRADINGALGOS 101
#define ONRSPQUERYCFMMCTRADINGACCOUNTTOKEN 102
#define ONRTNFROMBANKTOFUTUREBYBANK 103
#define ONRTNFROMFUTURETOBANKBYBANK 104
#define ONRTNREPEALFROMBANKTOFUTUREBYBANK 105
#define ONRTNREPEALFROMFUTURETOBANKBYBANK 106
#define ONRTNFROMBANKTOFUTUREBYFUTURE 107
#define ONRTNFROMFUTURETOBANKBYFUTURE 108
#define ONRTNREPEALFROMBANKTOFUTUREBYFUTUREMANUAL 109
#define ONRTNREPEALFROMFUTURETOBANKBYFUTUREMANUAL 110
#define ONRTNQUERYBANKBALANCEBYFUTURE 111
#define ONERRRTNBANKTOFUTUREBYFUTURE 112
#define ONERRRTNFUTURETOBANKBYFUTURE 113
#define ONERRRTNREPEALBANKTOFUTUREBYFUTUREMANUAL 114
#define ONERRRTNREPEALFUTURETOBANKBYFUTUREMANUAL 115
#define ONERRRTNQUERYBANKBALANCEBYFUTURE 116
#define ONRTNREPEALFROMBANKTOFUTUREBYFUTURE 117
#define ONRTNREPEALFROMFUTURETOBANKBYFUTURE 118
#define ONRSPFROMBANKTOFUTUREBYFUTURE 119
#define ONRSPFROMFUTURETOBANKBYFUTURE 120
#define ONRSPQUERYBANKACCOUNTMONEYBYFUTURE 121
#define ONRTNOPENACCOUNTBYBANK 122
#define ONRTNCANCELACCOUNTBYBANK 123
#define ONRTNCHANGEACCOUNTBYBANK 124

class ctp_trade_handle : public CThostFtdcTraderSpi
{
private:
    CThostFtdcTraderApi *_api = nullptr; //API对象
    thread _task_thread;                 //工作线程指针（向python中推送数据）
    TaskQueue _task_queue;               //任务队列
    bool _active = false;                //工作状态
	mutex mutex_;
	condition_variable cond_;			//条件变量
	bool ready_ = false;
	bool login_ = false;
public:
    ctp_trade_handle(){};
    ~ctp_trade_handle()
    {
        if (this->_active)
        {
            this->exit();
        }
    };
    virtual void OnFrontConnected();

    virtual void OnFrontDisconnected(int nReason);

    virtual void OnHeartBeatWarning(int nTimeLapse);

    virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRtnOrder(CThostFtdcOrderField *pOrder);

    virtual void OnRtnTrade(CThostFtdcTradeField *pTrade);

    virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus);

    virtual void OnRtnBulletin(CThostFtdcBulletinField *pBulletin);

    virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);

    virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);

    virtual void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder);

    virtual void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnRtnQuote(CThostFtdcQuoteField *pQuote);

    virtual void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp);

    virtual void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken);

    virtual void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose);

    virtual void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnRtnCombAction(CThostFtdcCombActionField *pCombAction);

    virtual void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer);

    virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer);

    virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal);

    virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal);

    virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer);

    virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer);

    virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal);

    virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal);

    virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);

    virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo);

    virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal);

    virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal);

    virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount);

    virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount);

    virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount);

    void processFrontConnected(Task *task);

    void processFrontDisconnected(Task *task);

    void processHeartBeatWarning(Task *task);

    void processRspAuthenticate(Task *task);

    void processRspUserLogin(Task *task);

    void processRspUserLogout(Task *task);

    void processRspUserPasswordUpdate(Task *task);

    void processRspTradingAccountPasswordUpdate(Task *task);

    void processRspUserAuthMethod(Task *task);

    void processRspGenUserCaptcha(Task *task);

    void processRspGenUserText(Task *task);

    void processRspOrderInsert(Task *task);

    void processRspParkedOrderInsert(Task *task);

    void processRspParkedOrderAction(Task *task);

    void processRspOrderAction(Task *task);

    void processRspQueryMaxOrderVolume(Task *task);

    void processRspSettlementInfoConfirm(Task *task);

    void processRspRemoveParkedOrder(Task *task);

    void processRspRemoveParkedOrderAction(Task *task);

    void processRspExecOrderInsert(Task *task);

    void processRspExecOrderAction(Task *task);

    void processRspForQuoteInsert(Task *task);

    void processRspQuoteInsert(Task *task);

    void processRspQuoteAction(Task *task);

    void processRspBatchOrderAction(Task *task);

    void processRspOptionSelfCloseInsert(Task *task);

    void processRspOptionSelfCloseAction(Task *task);

    void processRspCombActionInsert(Task *task);

    void processRspQryOrder(Task *task);

    void processRspQryTrade(Task *task);

    void processRspQryInvestorPosition(Task *task);

    void processRspQryTradingAccount(Task *task);

    void processRspQryInvestor(Task *task);

    void processRspQryTradingCode(Task *task);

    void processRspQryInstrumentMarginRate(Task *task);

    void processRspQryInstrumentCommissionRate(Task *task);

    void processRspQryExchange(Task *task);

    void processRspQryProduct(Task *task);

    void processRspQryInstrument(Task *task);

    void processRspQryDepthMarketData(Task *task);

    void processRspQrySettlementInfo(Task *task);

    void processRspQryTransferBank(Task *task);

    void processRspQryInvestorPositionDetail(Task *task);

    void processRspQryNotice(Task *task);

    void processRspQrySettlementInfoConfirm(Task *task);

    void processRspQryInvestorPositionCombineDetail(Task *task);

    void processRspQryCFMMCTradingAccountKey(Task *task);

    void processRspQryEWarrantOffset(Task *task);

    void processRspQryInvestorProductGroupMargin(Task *task);

    void processRspQryExchangeMarginRate(Task *task);

    void processRspQryExchangeMarginRateAdjust(Task *task);

    void processRspQryExchangeRate(Task *task);

    void processRspQrySecAgentACIDMap(Task *task);

    void processRspQryProductExchRate(Task *task);

    void processRspQryProductGroup(Task *task);

    void processRspQryMMInstrumentCommissionRate(Task *task);

    void processRspQryMMOptionInstrCommRate(Task *task);

    void processRspQryInstrumentOrderCommRate(Task *task);

    void processRspQrySecAgentTradingAccount(Task *task);

    void processRspQrySecAgentCheckMode(Task *task);

    void processRspQrySecAgentTradeInfo(Task *task);

    void processRspQryOptionInstrTradeCost(Task *task);

    void processRspQryOptionInstrCommRate(Task *task);

    void processRspQryExecOrder(Task *task);

    void processRspQryForQuote(Task *task);

    void processRspQryQuote(Task *task);

    void processRspQryOptionSelfClose(Task *task);

    void processRspQryInvestUnit(Task *task);

    void processRspQryCombInstrumentGuard(Task *task);

    void processRspQryCombAction(Task *task);

    void processRspQryTransferSerial(Task *task);

    void processRspQryAccountregister(Task *task);

    void processRspError(Task *task);

    void processRtnOrder(Task *task);

    void processRtnTrade(Task *task);

    void processErrRtnOrderInsert(Task *task);

    void processErrRtnOrderAction(Task *task);

    void processRtnInstrumentStatus(Task *task);

    void processRtnBulletin(Task *task);

    void processRtnTradingNotice(Task *task);

    void processRtnErrorConditionalOrder(Task *task);

    void processRtnExecOrder(Task *task);

    void processErrRtnExecOrderInsert(Task *task);

    void processErrRtnExecOrderAction(Task *task);

    void processErrRtnForQuoteInsert(Task *task);

    void processRtnQuote(Task *task);

    void processErrRtnQuoteInsert(Task *task);

    void processErrRtnQuoteAction(Task *task);

    void processRtnForQuoteRsp(Task *task);

    void processRtnCFMMCTradingAccountToken(Task *task);

    void processErrRtnBatchOrderAction(Task *task);

    void processRtnOptionSelfClose(Task *task);

    void processErrRtnOptionSelfCloseInsert(Task *task);

    void processErrRtnOptionSelfCloseAction(Task *task);

    void processRtnCombAction(Task *task);

    void processErrRtnCombActionInsert(Task *task);

    void processRspQryContractBank(Task *task);

    void processRspQryParkedOrder(Task *task);

    void processRspQryParkedOrderAction(Task *task);

    void processRspQryTradingNotice(Task *task);

    void processRspQryBrokerTradingParams(Task *task);

    void processRspQryBrokerTradingAlgos(Task *task);

    void processRspQueryCFMMCTradingAccountToken(Task *task);

    void processRtnFromBankToFutureByBank(Task *task);

    void processRtnFromFutureToBankByBank(Task *task);

    void processRtnRepealFromBankToFutureByBank(Task *task);

    void processRtnRepealFromFutureToBankByBank(Task *task);

    void processRtnFromBankToFutureByFuture(Task *task);

    void processRtnFromFutureToBankByFuture(Task *task);

    void processRtnRepealFromBankToFutureByFutureManual(Task *task);

    void processRtnRepealFromFutureToBankByFutureManual(Task *task);

    void processRtnQueryBankBalanceByFuture(Task *task);

    void processErrRtnBankToFutureByFuture(Task *task);

    void processErrRtnFutureToBankByFuture(Task *task);

    void processErrRtnRepealBankToFutureByFutureManual(Task *task);

    void processErrRtnRepealFutureToBankByFutureManual(Task *task);

    void processErrRtnQueryBankBalanceByFuture(Task *task);

    void processRtnRepealFromBankToFutureByFuture(Task *task);

    void processRtnRepealFromFutureToBankByFuture(Task *task);

    void processRspFromBankToFutureByFuture(Task *task);

    void processRspFromFutureToBankByFuture(Task *task);

    void processRspQueryBankAccountMoneyByFuture(Task *task);

    void processRtnOpenAccountByBank(Task *task);

    void processRtnCancelAccountByBank(Task *task);

    void processRtnChangeAccountByBank(Task *task);

    void processTask();

    bool CreateFtdcTraderApi(const char *pszFlowPath = "");

    void release();

    void init();

    int join();

    int exit();

    string getTradingDay();

    void RegisterFront(char *pszFrontAddress);

    void SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType);

    void SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType);

    int ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID);

    int ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID);

	int ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, int nRequestID);
};

#endif