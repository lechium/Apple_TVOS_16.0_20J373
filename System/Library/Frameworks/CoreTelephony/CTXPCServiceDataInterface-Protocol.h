//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTIPFilter, CTServiceDescriptor, CTXPCServiceSubscriptionContext, NSNumber, NSString;

@protocol CTXPCServiceDataInterface
- (void)setAssertionForConnectionType:(int)arg1 enable:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)getLowLatencyFilters:(int)arg1 queueSetId:(unsigned long long)arg2 completion:(void (^)(CTIPFilterContainer *, NSError *))arg3;
- (void)deleteLowLatencyFilter:(CTIPFilter *)arg1 pdp:(int)arg2 queueSetId:(unsigned long long)arg3 uplink:(_Bool)arg4 completion:(void (^)(NSError *))arg5;
- (void)addLowLatencyFilter:(CTIPFilter *)arg1 pdp:(int)arg2 queueSetId:(unsigned long long)arg3 uplink:(_Bool)arg4 completion:(void (^)(NSError *))arg5;
- (void)enterLoopBackMode:(void (^)(NSError *))arg1;
- (void)getPreferredDataServiceDescriptor:(void (^)(CTServiceDescriptor *, NSError *))arg1;
- (void)getCurrentDataServiceDescriptor:(void (^)(CTServiceDescriptor *, NSError *))arg1;
- (void)getPreferredDataSubscriptionContext:(void (^)(CTXPCServiceSubscriptionContext *, NSError *))arg1;
- (void)getCurrentDataSubscriptionContext:(void (^)(CTXPCServiceSubscriptionContext *, NSError *))arg1;
- (void)simulateDataStall:(_Bool)arg1 pdp:(int)arg2 completion:(void (^)(NSError *))arg3;
- (void)queryAnbrBitrate:(CTXPCServiceSubscriptionContext *)arg1 bitrate:(NSNumber *)arg2 direction:(int)arg3 completion:(void (^)(NSError *))arg4;
- (void)getAnbrActivationState:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)isTetheringEditingSupported:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getNATTKeepAliveOverCell:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(unsigned int, NSError *))arg2;
- (void)getPublicNrFrequencyRange:(void (^)(unsigned int, NSError *))arg1;
- (void)getPublicDataBearer:(void (^)(int, NSError *))arg1;
- (void)getTrafficDescriptorsInfo:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)getDataStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTDataStatus *, NSError *))arg2;
- (void)getConnectionState:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 completion:(void (^)(CTDataConnectionStatus *, NSError *))arg3;
- (void)getActiveConnections:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getTetheringStatus:(void (^)(CTTetheringStatus *, NSError *))arg1 connectionType:(int)arg2;
- (void)getConnectionAvailability:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 completion:(void (^)(CTDataConnectionAvailabilityStatus *, NSError *))arg3;
- (void)getPacketContextCount:(void (^)(unsigned int))arg1;
- (void)getSupportDynamicDataSimSwitch:(void (^)(_Bool, NSError *))arg1;
- (void)setSupportDynamicDataSimSwitch:(_Bool)arg1 forIccid:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setSupportDynamicDataSimSwitch:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)getInternationalDataAccess:(CTServiceDescriptor *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setInternationalDataAccess:(CTServiceDescriptor *)arg1 status:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendDeadPeerDetection:(void (^)(NSError *))arg1;
- (void)resetAPNSettings:(void (^)(NSError *))arg1;
- (void)setPacketContextActiveByServiceType:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 active:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
@end

