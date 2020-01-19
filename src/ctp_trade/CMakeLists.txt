PROJECT(ctp_trade)
aux_source_directory(. SRC_LIST)

add_executable(ctp_cmd ${SRC_LIST})

target_link_libraries(ctp_cmd thosttraderapi_se
pthread)
