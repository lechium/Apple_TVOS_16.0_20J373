//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000203fbf
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000203fa6
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000203f49
- (void)setRealTimeHarvestTriggered:(double)arg1;	// IMP=0x002000000020551c
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x0010000000205516
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000205255
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x001000000020524f
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x0010000000205212
- (_Bool)syncgetZaxisStats:(void *)arg1;	// IMP=0x00100000002046ae
- (_Bool)syncgetActiveTechs:(void *)arg1;	// IMP=0x0010000000204201
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x00100000002041d2
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002041aa
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000020417d
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000204155
- (void *)adaptee;	// IMP=0x0010000000204122
- (void)endService;	// IMP=0x0010000000204107
- (void)beginService;	// IMP=0x0010000000204058
- (id)init;	// IMP=0x001000000020401b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

