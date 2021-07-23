#ifndef TASK_H_
#define TASK_H_

enum TaskNames
{
  TaskAprsIs = 1,
  TaskConfig,
  TaskEth,
  TaskFtp,
  TaskModem,
  TaskNtp,
  TaskOta,
  TaskWifi,
  TaskRouter,
  TaskSize,
};

#define TASK_APRS_IS "AprsIsTask"
#define TASK_CONFIG  "ConfigTask"
#define TASK_ETH     "EthTask"
#define TASK_FTP     "FTPTask"
#define TASK_MODEM   "ModemTask"
#define TASK_NTP     "NTPTask"
#define TASK_OTA     "OTATask"
#define TASK_WIFI    "WifiTask"
#define TASK_ROUTER  "RouterTask"

#endif
