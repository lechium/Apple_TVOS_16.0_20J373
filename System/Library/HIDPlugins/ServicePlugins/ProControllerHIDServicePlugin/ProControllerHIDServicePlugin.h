//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMutableArray, NSObject, NSString;
@protocol GCMotionServiceClientInterface, OS_voucher;

@interface ProControllerHIDServicePlugin
{
    unsigned char _globalPacketNumber;	// 8 = 0x8
    NSString *_serialNumber;	// 16 = 0x10
    struct {
        _Bool hasDeviceInfo;
        struct {
            unsigned short firmwareVersion;
            unsigned char type;
            unsigned char bluetoothMAC[6];
            unsigned char unknown1;
            unsigned char unknown2;
            unsigned char unknown3;
        } deviceInfo;
    } _properties;	// 24 = 0x18
    struct {
        struct {
            struct {
                CDStruct_5aea82d7 left;
                CDStruct_5aea82d7 right;
                unsigned int fetchedLeft:1;
                unsigned int fetchedRight:1;
            } factory;
            struct {
                CDStruct_5aea82d7 left;
                CDStruct_5aea82d7 right;
                unsigned int fetchedLeft:1;
                unsigned int fetchedRight:1;
                unsigned int hasLeft:1;
                unsigned int hasRight:1;
            } user;
            struct {
                CDStruct_298edf78 left;
                CDStruct_298edf78 right;
                unsigned int fetchedLeft:1;
                unsigned int fetchedRight:1;
            } parameters;
        } stick;
        struct {
            struct {
                CDStruct_844ecdcb data;
                unsigned int fetchedCalibration:1;
                unsigned int fetchedHorizontalOffset:1;
            } factory;
            struct {
                CDStruct_844ecdcb data;
                unsigned int fetched:1;
                unsigned int hasData:1;
            } user;
            struct {
                CDStruct_03942939 accel;
                CDStruct_03942939 gyro;
            } coefficients;
        } motion;
    } _calibration;	// 40 = 0x28
    struct {
        _Bool initialized;
        struct {
            _Bool charging;
            unsigned char level;
        } info;
    } _battery;	// 240 = 0xf0
    unsigned char _lowPowerSetting;	// 243 = 0xf3
    CDStruct_9f249b22 _playerLights;	// 244 = 0xf4
    NSMutableArray *_pendingSubcommands;	// 248 = 0xf8
    struct {
        unsigned char identifier;
        NSObject<OS_voucher> *voucher;
        CDUnknownBlockType responseHandler;
        unsigned long long requestTimestamp;
    } _outstandingSubcommand;	// 256 = 0x100
    _Bool _sensorsActive;	// 288 = 0x120
    id <GCMotionServiceClientInterface> _motionClient;	// 296 = 0x128
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x001000000000712b
- (void).cxx_destruct;	// IMP=0x000000000000db78
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000da93
- (void)updateSensorsActive:(_Bool)arg1;	// IMP=0x000000000000d8a9
- (void)readSensorsActiveWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d890
- (float)defaultRightAxisSnapRadius;	// IMP=0x000000000000d887
- (float)defaultLeftAxisSnapRadius;	// IMP=0x000000000000d87e
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x000000000000d875
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x000000000000d86c
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x000000000000d85e
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x000000000000d850
- (unsigned char)nextGlobalPacketNumber;	// IMP=0x000000000000d82e
- (void)applyDeadzone:(float)arg1 axisSnapRadius:(float)arg2 input:(MISSING_TYPE **)arg3;	// IMP=0x000000000000d828
- (CDStruct_a46637cf)currentRumbleData;	// IMP=0x000000000000d4a4
- (id)defaultHapticMotors;	// IMP=0x000000000000d353
- (float)defaultHapticDispatchFrequency;	// IMP=0x000000000000d345
- (void)dispatchHapticEvent;	// IMP=0x000000000000d333
- (void)dispatchSetVibrationEnabledSubcommandWithChange:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d26a
- (void)dispatchSetPlayerLightsSubcommandWithNewState:(CDStruct_9f249b22)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d117
- (void)dispatchSPIFlashReadSubcommandWithAddress:(unsigned int)arg1 length:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ccaa
- (void)dispatchSetLowPowerStateSubcommandWithChange:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cbe1
- (void)dispatchSetInputReportModeSubcommandWithRequestedMode:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cb18
- (void)dispatchRequestDeviceInfoSubcommandWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c8ab
- (void)enqueueSubcommand:(unsigned char)arg1 data:(const void *)arg2 length:(unsigned long long)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c183
- (void)dispatchPendingSubcommandIfReady;	// IMP=0x000000000000c0f1
- (void)dispatchCurrentRumbleData;	// IMP=0x000000000000bbca
- (unsigned char)fourBitAmplitudeLookup:(float)arg1;	// IMP=0x000000000000bb00
- (void)handleSubcommandReply:(long long)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000b7e7
- (void)handleStandardFullPayload:(long long)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000b10f
- (void)handleHIDControllerPayload:(long long)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000ac5e
- (void)refreshCalibrationData;	// IMP=0x00000000000096dd
- (void)refreshDeviceInfo;	// IMP=0x00000000000092fd
- (void)refreshLowPowerSetting;	// IMP=0x00000000000090eb
- (void)setVibrationEnabled:(_Bool)arg1;	// IMP=0x0000000000008f8b
- (void)setLowPower:(_Bool)arg1;	// IMP=0x0000000000008e1a
- (void)switchToInputMode:(unsigned char)arg1;	// IMP=0x0000000000008cba
- (void)setPlayerLights:(CDStruct_9f249b22)arg1;	// IMP=0x0000000000008bcd
- (_Bool)io_vibrationEnabled:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000008b67
- (_Bool)io_playerLights:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000008690
- (_Bool)io_lowPowerSetting:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x000000000000863f
- (_Bool)io_calibrationInfo:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000007c06
- (_Bool)io_serialNumber:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000007bd7
@property(readonly, copy) NSString *description;
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x0000000000007bb8
- (void)setupRawReportHandling;	// IMP=0x0000000000007971
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x00000000000077e9
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x000000000000735d
- (id)initWithService:(unsigned int)arg1;	// IMP=0x000000000000723f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
