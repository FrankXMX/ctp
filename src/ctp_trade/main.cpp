#include "ctp_trade_handler.h"
#include "INIReader.h"
#include <iostream>

int main(int argc, char* argv[])
{
	string a;

    INIReader reader("../conf/ctp.ini");
    if (reader.ParseError() != 0) {
        std::cout << "Can't load 'test.ini'\n";
        return 1;
    }
    std::cout << reader.GetInteger("user","BrokerID",9999) << endl;
    ctp_trade_handle ctp;
    ctp.CreateFtdcTraderApi();
    ctp.RegisterFront("tcp://180.168.146.187:10100");

    ctp.init();
	std::cin >> a;
	CThostFtdcReqAuthenticateField thostFtdcReqAuthenticateField = { 0 };
    strcpy(thostFtdcReqAuthenticateField.AppID, "simnow_client_test");
    strcpy(thostFtdcReqAuthenticateField.UserID, "158477");
    strcpy(thostFtdcReqAuthenticateField.AuthCode, "0000000000000000");
    strcpy(thostFtdcReqAuthenticateField.BrokerID, "9999");
    // ctp.ReqAuthenticate(&thostFtdcReqAuthenticateField, 1);

	CThostFtdcReqUserLoginField reqUserLogin = { 0 };
    strcpy(reqUserLogin.BrokerID,"9999");
    strcpy(reqUserLogin.UserID,"158477");
    strcpy(reqUserLogin.Password,"1a2s3d");
    ctp.ReqUserLogin(&reqUserLogin, 1);

	
	std::cin >> a;
    ctp.exit();
    return 0;
}