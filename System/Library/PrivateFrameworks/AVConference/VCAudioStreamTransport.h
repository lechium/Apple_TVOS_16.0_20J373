//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WRMClient;

__attribute__((visibility("hidden")))
@interface VCAudioStreamTransport
{
    WRMClient *_wrmClient;	// 104 = 0x68
    struct _VCAudioStreamTransportRealtimeContext _realtimeContext;	// 112 = 0x70
}

- (void)setPreWarmState:(_Bool)arg1;	// IMP=0x000000000034b106
- (void)setWRMCoexMetrics:(id)arg1;	// IMP=0x000000000034b100
- (void)setWRMNotification:(CDStruct_cd8cfafa *)arg1;	// IMP=0x000000000034b0fa
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;	// IMP=0x000000000034b0df
- (void)stopWRM;	// IMP=0x000000000034b096
- (void)startWRM;	// IMP=0x000000000034afc2
- (void)setWRMCallId:(unsigned int)arg1;	// IMP=0x000000000034afa8
- (void)onStop;	// IMP=0x000000000034adc9
- (int)onStart;	// IMP=0x000000000034ad59
@property(readonly, nonatomic) void *realtimeContext;
- (void)dealloc;	// IMP=0x000000000034acd5
- (id)initWithHandle:(struct tagHANDLE *)arg1 callId:(unsigned int)arg2 localSSRC:(unsigned int)arg3 enableNetworkMonitor:(_Bool)arg4;	// IMP=0x000000000034aa6c
- (id)initWithHandle:(struct tagHANDLE *)arg1 callId:(unsigned int)arg2 localSSRC:(unsigned int)arg3;	// IMP=0x000000000034aa54
- (void)reportWRMMetrics:(const CDStruct_dea828ac *)arg1;	// IMP=0x000000000034aa37

@end

