#pragma once

#include <openvr_driver.h>

//
// Settings
//
static const char * const k_pch_Settings_Section = "driver_alvr_server";
static const char * const k_pch_Settings_SerialNumber_String = "serialNumber";
static const char * const k_pch_Settings_ModelNumber_String = "modelNumber";
static const char * const k_pch_Settings_RenderWidth_Int32 = "renderWidth";
static const char * const k_pch_Settings_RenderHeight_Int32 = "renderHeight";
static const char * const k_pch_Settings_IPD_Float = "IPD";
static const char * const k_pch_Settings_SecondsFromVsyncToPhotons_Float = "secondsFromVsyncToPhotons";
static const char * const k_pch_Settings_DisplayFrequency_Float = "displayFrequency";
static const char * const k_pch_Settings_ClientRecvBufferSize_Int32 = "clientRecvBufferSize";

static const char * const k_pch_Settings_EncoderOptions_String = "nvencOptions";
static const char * const k_pch_Settings_DebugLog_Bool = "debugLog";
static const char * const k_pch_Settings_DebugFrameIndex_Bool = "debugFrameIndex";
static const char * const k_pch_Settings_DebugFrameOutput_Bool = "debugFrameOutput";
static const char * const k_pch_Settings_DebugCaptureOutput_Bool = "debugCaptureOutput";
static const char * const k_pch_Settings_UseKeyedMutex_Bool = "useKeyedMutex";
static const char * const k_pch_Settings_DebugOutputDir = "debugOutputDir";
static const char * const k_pch_Settings_ListenHost_String = "listenHost";
static const char * const k_pch_Settings_ListenPort_Int32 = "listenPort";
static const char * const k_pch_Settings_ControlListenHost_String = "controlListenHost";
static const char * const k_pch_Settings_ControlListenPort_Int32 = "controlListenPort";

static const char * const k_pch_Settings_AdapterIndex_Int32 = "adapterIndex";

static const char * const k_pch_Settings_SendingTimeslotUs_Int32 = "sendingTimeslotUs";
static const char * const k_pch_Settings_LimitTimeslotPackets_Int32 = "limitTimeslotPackets";

static const char * const k_pch_Settings_ControllerModelNumber_String = "controllerModelNumber";
static const char * const k_pch_Settings_ControllerSerialNumber_String = "controllerSerialNumber";
static const char * const k_pch_Settings_EnableController_Bool = "enableController";
static const char * const k_pch_Settings_ControllerTriggerMode_Int32 = "controllerTriggerMode";
static const char * const k_pch_Settings_ControllerTrackpadClickMode_Int32 = "controllerTrackpadClickMode";
static const char * const k_pch_Settings_ControllerTrackpadTouchMode_Int32 = "controllerTrackpadTouchMode";
static const char * const k_pch_Settings_ControllerRecenterButton_Int32 = "controllerRecenterButton";

static const char * const k_pch_Settings_UseTrackingReference_Bool = "useTrackingReference";

//
// Constants
//
static const char * const LOG_FILE = "driver.log";

class Settings
{
	static Settings m_Instance;
public:
	Settings();
	virtual ~Settings();

	void Load();
	static Settings &Instance() {
		return m_Instance;
	}

	std::string m_sSerialNumber;
	std::string m_sModelNumber;

	int32_t m_nAdapterIndex;

	int32_t m_renderWidth;
	int32_t m_renderHeight;
	float m_flSecondsFromVsyncToPhotons;
	float m_flDisplayFrequency;
	float m_flIPD;

	std::string m_EncoderOptions;

	std::string m_Host;
	int m_Port;
	std::string m_ControlHost;
	int m_ControlPort;

	bool m_DebugLog;
	bool m_DebugFrameIndex;
	bool m_DebugFrameOutput;
	bool m_DebugCaptureOutput;
	bool m_UseKeyedMutex;


	uint64_t m_SendingTimeslotUs;
	uint64_t m_LimitTimeslotPackets;

	uint32_t m_clientRecvBufferSize;

	// Controller configs
	std::string m_controllerModelNumber;
	std::string m_controllerSerialNumber;
	bool m_enableController;
	int32_t m_controllerTriggerMode;
	int32_t m_controllerTrackpadClickMode;
	int32_t m_controllerTrackpadTouchMode;
	int32_t m_controllerRecenterButton;

	float m_DebugPos[3];
	bool m_EnabledDebugPos;

	int32_t m_causePacketLoss;

	bool m_useTrackingReference;
};

