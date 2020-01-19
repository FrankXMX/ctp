#include "ctp_trade_handler.h"
#include "INIReader.h"
#include <iostream>
#include <unistd.h>

int main(int argc, char* argv[])
{
    INIReader reader("../conf/ctp.ini");
    if (reader.ParseError() != 0) {
        std::cout << "Can't load 'test.ini'\n";
        return 1;
    }
    std::cout << reader.GetInteger("user","BrokerID",9999) << endl;
    ctp_trade_handle ctp;
    ctp.CreateFtdcTraderApi();
    ctp.RegisterFront("tcp://180.168.146.187:10101");

    ctp.init();
    CThostFtdcReqAuthenticateField *pThostFtdcReqAuthenticateField = new CThostFtdcReqAuthenticateField;
    strcpy(pThostFtdcReqAuthenticateField->AppID, "simnow_client_test");
    strcpy(pThostFtdcReqAuthenticateField->UserID, "158477");
    strcpy(pThostFtdcReqAuthenticateField->AuthCode, "0000000000000000");
    strcpy(pThostFtdcReqAuthenticateField->BrokerID, "9999");
    ctp.ReqAuthenticate(pThostFtdcReqAuthenticateField, 1);

    CThostFtdcReqUserLoginField *pThostFtdcReqUserLoginField = new CThostFtdcReqUserLoginField;
    strcpy(pThostFtdcReqUserLoginField->BrokerID,"9999");
    strcpy(pThostFtdcReqUserLoginField->UserID,"158477");
    strcpy(pThostFtdcReqUserLoginField->Password,"1a2s3d");
    ctp.ReqUserLogin(pThostFtdcReqUserLoginField, 2);
    sleep(10);
    ctp.exit();
    return 0;
}