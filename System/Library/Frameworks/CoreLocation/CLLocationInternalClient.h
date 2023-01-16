//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLLocationInternalClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedServiceClient;	// IMP=0x0060000000060aa6
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;	// IMP=0x0000000000066812
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;	// IMP=0x00000000000667cd
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;	// IMP=0x00000000000666e1
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;	// IMP=0x0000000000066608
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 enabled:(unsigned char)arg3;	// IMP=0x0000000000066520
- (unsigned char)setLocationButtonUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000006643d
- (unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000006635a
- (unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1;	// IMP=0x000000000006628b
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(const struct __CFString *)arg3 andSubIdentityIdentifier:(const struct __CFString *)arg4 forBundleID:(const struct __CFString *)arg5 orBundlePath:(const struct __CFString *)arg6;	// IMP=0x0000000000066188
- (const struct __CFArray *)copyActivityAlarms;	// IMP=0x00000000000660b1
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3 orAuditToken:(CDStruct_6ad76789)arg4 byLocationButton:(unsigned char)arg5 voiceInteractionEnabled:(unsigned char)arg6;	// IMP=0x0000000000065f8f
- (id)getAccessoryMotionSensorLogs;	// IMP=0x0000000000065f76
- (id)getMotionSensorLogs;	// IMP=0x0000000000065f5d
- (id)getPipelinedCache;	// IMP=0x0000000000065e19
- (int)getStatusBarIconState;	// IMP=0x0000000000065d50
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x0000000000065b12
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x00000000000658dd
- (unsigned char)copyLastLog;	// IMP=0x000000000006576f
- (id)getOdometryBatchedLocations;	// IMP=0x00000000000653c0
- (int)getAccessoryPASCDTransmissionState;	// IMP=0x0000000000065159
- (int)getAccessoryTypeBitSet;	// IMP=0x0000000000064ef2
- (void)setMapMatchingRouteHint:(CDStruct_b7b5e951 *)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4;	// IMP=0x0000000000064bee
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 location:(id)arg3 groundAltitude:(CDStruct_b141a4d0 *)arg4;	// IMP=0x0000000000064ad1
- (unsigned char)getLocationForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_2fb123db *)arg5;	// IMP=0x000000000006499c
- (_Bool)deleteInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000064812
- (_Bool)setRelevance:(_Bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleId:(id)arg3 orBundlePath:(id)arg4 error:(id *)arg5;	// IMP=0x000000000006467c
- (_Bool)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(id)arg5 orBundlePath:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000644d5
- (_Bool)registerCircularInterestZoneWithId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(id)arg7 orBundlePath:(id)arg8 error:(id *)arg9;	// IMP=0x0000000000064310
- (_Bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000006407d
- (const struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;	// IMP=0x0000000000063f8d
- (unsigned char)dumpLogs:(const struct __CFString *)arg1;	// IMP=0x0000000000063e15
- (unsigned char)displayStatistics;	// IMP=0x0000000000063ca7
- (unsigned char)shutdownDaemon;	// IMP=0x0000000000063b3c
- (unsigned char)performMigration;	// IMP=0x00000000000639ce
- (unsigned char)getPrecisionPermission:(char *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x00000000000636ea
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x00000000000635fd
- (unsigned char)getAuthorizationStatusForApp:(int *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;	// IMP=0x0000000000063510
- (unsigned char)getGestureServiceEnabled:(char *)arg1;	// IMP=0x0000000000063429
- (void)setGestureServiceEnabled:(unsigned char)arg1;	// IMP=0x0000000000063340
- (id)triggerExpiredAuthorizationPurgeOnClientManager;	// IMP=0x0000000000063106
- (double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3;	// IMP=0x0000000000062eae
- (id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000062c20
- (id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3;	// IMP=0x0000000000062935
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;	// IMP=0x000000000006284e
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;	// IMP=0x000000000006269a
- (unsigned char)getLocationServicesEnabled:(char *)arg1;	// IMP=0x00000000000625af
- (void)setLocationServicesEnabled:(unsigned char)arg1;	// IMP=0x00000000000624a8
- (unsigned char)pingDaemon;	// IMP=0x00000000000623e3
- (unsigned char)getPrivateMode;	// IMP=0x000000000006231c
- (void)setPrivateMode:(unsigned char)arg1;	// IMP=0x0000000000062233
- (id)timeZoneAtLocation:(id)arg1;	// IMP=0x0000000000062016
- (const void *)getLocationDefaultForKey:(const struct __CFString *)arg1;	// IMP=0x0000000000061e1e
- (void)setLocationDefaultForKey:(const struct __CFString *)arg1 value:(const void *)arg2;	// IMP=0x0000000000061c31
- (const struct __CFArray *)copyGnssBandsInUse;	// IMP=0x0000000000061b55
- (const struct __CFDictionary *)copyZaxisStats;	// IMP=0x0000000000061a79
- (const struct __CFString *)copyMicroLocationInternalVersion;	// IMP=0x000000000006199d
- (const struct __CFArray *)copyTechnologiesInUse;	// IMP=0x00000000000618c1
- (const struct __CFDictionary *)copyActiveClientsUsingLocation;	// IMP=0x00000000000617d2
- (const struct __CFDictionary *)copyAppsUsingLocation;	// IMP=0x00000000000616e3
- (id)applyArchivedAuthorizationDecisions:(id)arg1;	// IMP=0x00000000000614e6
- (id)getArchivedAuthorizationDecisionsWithError:(id *)arg1;	// IMP=0x0000000000061291
- (unsigned char)clearLocationAuthorizations;	// IMP=0x00000000000611cc
- (void)clearLocationAuthorizationForBundleId:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;	// IMP=0x00000000000610fd
- (unsigned char)getIncidentalUseMode:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x0000000000061010
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const struct __CFString *)arg3 orBundlePath:(const struct __CFString *)arg4;	// IMP=0x0000000000060f1a
- (id)synchronousRemoteObject;	// IMP=0x0000000000060da6
- (id)connection;	// IMP=0x0000000000060aeb

@end

