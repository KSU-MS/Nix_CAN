#ifndef KM_CAN_ENUM_ID
#define KM_CAN_ENUM_ID

enum CAN_IDs {
  //
  /// VCU CAN IDs
  //
  ID_MC_TEMPERATURES_1 = 0xA0,
  ID_MC_TEMPERATURES_2 = 0xA1,
  ID_MC_TEMPERATURES_3 = 0xA2,

  ID_MC_ANALOG_INPUTS_VOLTAGES = 0xA3,
  ID_MC_DIGITAL_INPUT_STATUS = 0xA4,

  ID_MC_MOTOR_POSITION_INFORMATION = 0xA5,

  ID_MC_CURRENT_INFORMATION = 0xA6,
  ID_MC_VOLTAGE_INFORMATION = 0xA7,
  ID_MC_FLUX_INFORMATION = 0xA8,

  ID_MC_INTERNAL_VOLTAGES = 0xA9,
  ID_MC_INTERNAL_STATES = 0xAA,

  ID_MC_FAULT_CODES = 0xAB,

  ID_MC_TORQUE_TIMER_INFORMATION = 0xAC,
  ID_MC_MODULATION_INDEX_FLUX_WEAKENING_OUTPUT_INFORMATION = 0xAD,

  ID_MC_FIRMWARE_INFORMATION = 0xAE,
  ID_MC_DIAGNOSTIC_DATA = 0xAF,

  ID_MC_COMMAND_MESSAGE = 0xC0,
  ID_MC_READ_WRITE_PARAMETER_COMMAND = 0xC1,
  ID_MC_READ_WRITE_PARAMETER_RESPONSE = 0xC2,

  ID_VCU_STATUS = 0xC3,
  ID_VCU_PEDAL_READINGS = 0xC4,

  ID_VCU_WS_READINGS = 0xC6,

  //
  /// DASH CAN IDs
  //
  ID_DASH_BUTTONS = 0xEB,
  ID_DASH_BUSVOLT = 0xD4,

  //
  /// BMS CAN IDs
  //
  ID_BMS_INFO = 0x6B1,
  ID_BMS_SOC = 0x6B3,

  //
  /// ACU CAN IDs
  //
  ID_ACU_RELAY = 0x68,
  MODULE_1_A = 0x1A,
  MODULE_1_B = 0x1B,

  MODULE_2_A = 0x2A,
  MODULE_2_B = 0x2B,

  MODULE_3_A = 0x3A,
  MODULE_3_B = 0x3B,

  MODULE_4_A = 0x4A,
  MODULE_4_B = 0x4B,

  MODULE_5_A = 0x5A,
  MODULE_5_B = 0x5B,

  MODULE_6_A = 0x6A,
  MODULE_6_B = 0x6B,

  //
  /// eveLogger CAN IDs
  //
  NAV_TIME = 0x7FF,
  NAV_GYRO = 0x7FE,
  NAV_RATE = 0x7FD,
  NAV_PLLA = 0x7FC,
  NAV_VELO = 0x7FB,
  NAV_ACCL = 0x7FA,

  //
  /// MegaSquirt CAN IDs
  //
  megasquirt_gp0 = 0x5F0,
  megasquirt_gp1 = 0x5F1,
  megasquirt_gp2 = 0x5F2,
  megasquirt_gp3 = 0x5F3,
  megasquirt_gp4 = 0x5F4,
  megasquirt_gp5 = 0x5F5,
  megasquirt_gp6 = 0x5F6,
  megasquirt_gp7 = 0x5F7,
  megasquirt_gp8 = 0x5F8,
  megasquirt_gp9 = 0x5F9,
  megasquirt_gp10 = 0x5FA,
  megasquirt_gp11 = 0x5FB,
  megasquirt_gp12 = 0x5FC,
  megasquirt_gp13 = 0x5FD,
  megasquirt_gp14 = 0x5FE,
  megasquirt_gp15 = 0x5FF,
  megasquirt_gp16 = 0x600,
  megasquirt_gp17 = 0x601,
  megasquirt_gp18 = 0x602,
  megasquirt_gp19 = 0x603,
  megasquirt_gp20 = 0x604,
  megasquirt_gp21 = 0x605,
  megasquirt_gp22 = 0x606,
  megasquirt_gp23 = 0x607,
  megasquirt_gp24 = 0x608,
  megasquirt_gp25 = 0x609,
  megasquirt_gp26 = 0x60A,
  megasquirt_gp27 = 0x60B,
  megasquirt_gp28 = 0x60C,
  megasquirt_gp29 = 0x60D,
  megasquirt_gp30 = 0x60E,
  megasquirt_gp31 = 0x60F,
  megasquirt_gp32 = 0x610,
  megasquirt_gp33 = 0x611,
  megasquirt_gp34 = 0x612,
  megasquirt_gp35 = 0x613,
  megasquirt_gp36 = 0x614,
  megasquirt_gp37 = 0x615,
  megasquirt_gp38 = 0x616,
  megasquirt_gp39 = 0x617,
  megasquirt_gp40 = 0x618,
  megasquirt_gp41 = 0x619,
  megasquirt_gp42 = 0x61A,
  megasquirt_gp43 = 0x61B,
  megasquirt_gp44 = 0x61C,
  megasquirt_gp45 = 0x61D,
  megasquirt_gp46 = 0x61E,
  megasquirt_gp47 = 0x61F,
  megasquirt_gp48 = 0x620,
  megasquirt_gp49 = 0x621,
  megasquirt_gp50 = 0x622,
  megasquirt_gp51 = 0x623,
  megasquirt_gp52 = 0x624,
  megasquirt_gp53 = 0x625,
  megasquirt_gp54 = 0x626,
  megasquirt_gp55 = 0x627,
  megasquirt_gp56 = 0x628,
  megasquirt_gp57 = 0x629,
  megasquirt_gp58 = 0x62A,
  megasquirt_gp59 = 0x62B,
  megasquirt_gp60 = 0x62C,
  megasquirt_gp61 = 0x62D,
  megasquirt_gp62 = 0x62E,
  megasquirt_gp63 = 0x62F,

  //
  /// BMS CAN IDs
  //
  MSGID_0X6B1 = 0x6B1,
  MSGID_0X6B2 = 0x6B2,
  MSGID_0X18FF50E5 = 0x98FF50E5, // According to the DBC this is valid???
  MSGID_0X1806E9F4 = 0x9806E9F4,
  MSGID_0X1806E7F4 = 0x9806E7F4,
  MSGID_0X1806E6F4 = 0x9806E6F4,
  MSGID_0X1806E5F4 = 0x9806E5F4,
  // MSGID_0X1806E6F4 = 0x9806E6F4, // The DBC also redefines this message????
  // MSGID_0X1806E6F4 = 0x9806E6F4, // Infact it does it twice??????

  //
  /// Inverter CAN IDs
  //
  M160_Temperature_Set_1 = 0xA0,
  M161_Temperature_Set_2 = 0xA1,
  M162_Temperature_Set_3 = 0xA2,
  M163_Analog_Input_Voltages = 0xA3,
  M164_Digital_Input_Status = 0xA4,
  M165_Motor_Position_Info = 0xA5,
  M166_Current_Info = 0xA6,
  M167_Voltage_Info = 0xA7,
  M168_Flux_ID_IQ_Info = 0xA8,
  M169_Internal_Voltages = 0xA9,
  M170_Internal_States = 0xAA,
  M171_Fault_Codes = 0xAB,
  M172_Torque_And_Timer_Info = 0xAC,
  M173_Modulation_And_Flux_Info = 0xAD,
  M174_Firmware_Info = 0xAE,
  M175_Diag_Data = 0xAF,
  M187_U2C_Command_Txd = 0x1D7,
  M188_U2C_Message_Rxd = 0x1D5,
  M192_Command_Message = 0xC0,
  M193_Read_Write_Param_Command = 0xC1,
  M194_Read_Write_Param_Response = 0xC2,
  BMS_Current_Limit = 0x202,
};

#endif
