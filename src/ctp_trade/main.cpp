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

    //CThostFtdcReqAuthenticateField reqAuthenticate = { 0 };
    //strcpy(reqAuthenticate.AppID, "simnow_client_test");
    //strcpy(reqAuthenticate.UserID, "158477");
    //strcpy(reqAuthenticate.AuthCode, "0000000000000000");
    //strcpy(reqAuthenticate.BrokerID, "9999");
    //ctp.ReqAuthenticate(&reqAuthenticate, 1);

	CThostFtdcReqUserLoginField reqUserLogin = { 0 };
    strcpy(reqUserLogin.BrokerID,"9999");
    strcpy(reqUserLogin.UserID,"158477");
    strcpy(reqUserLogin.Password,"qwe123");
    ctp.ReqUserLogin(&reqUserLogin, 1);

	std::cout << "input new password : ";
	std::cin >> a;
	CThostFtdcUserPasswordUpdateField reqUserPasswordUpdate = { 0 };
	strcpy(reqUserPasswordUpdate.BrokerID, "9999");
	strcpy(reqUserPasswordUpdate.UserID, "158477");
	strcpy(reqUserPasswordUpdate.OldPassword, "qwe123");
	strcpy(reqUserPasswordUpdate.NewPassword, a.c_str());

	ctp.ReqUserPasswordUpdate(&reqUserPasswordUpdate, 3);

	std::cin >> a;
    ctp.exit();
    return 0;
}