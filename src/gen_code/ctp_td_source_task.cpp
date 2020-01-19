void ctp_trade_handle::OnFrontConnected()
{
	Task task = Task();
	task.task_name = ONFRONTCONNECTED;
	this->task_queue.push(task);
};

void ctp_trade_handle::OnFrontDisconnected(int nReason)
{
	Task task = Task();
	task.task_name = ONFRONTDISCONNECTED;
	task.task_id = nReason;
	this->task_queue.push(task);
};

void ctp_trade_handle::OnHeartBeatWarning(int nTimeLapse)
{
	Task task = Task();
	task.task_name = ONHEARTBEATWARNING;
	task.task_id = nTimeLapse;
	this->task_queue.push(task);
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
	this->task_queue.push(task);
};

void ctp_trade_handle::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
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
	this->task_queue.push(task);
};

