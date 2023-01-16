//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLAppMonitorAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000086dff5
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000086dfdc
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000086df7f
- (void)checkApplications:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x002000000086e617
- (int)syncgetAppType:(id)arg1;	// IMP=0x001000000086e45d
- (void)isApplicationInstalledIncludingPairedDevices:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000086e427
- (_Bool)syncgetIsApplicationInstalledLocally:(struct __CFString *)arg1;	// IMP=0x001000000086e268
- (_Bool)syncgetForegroundApp:(void *)arg1;	// IMP=0x001000000086e208
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000086e1e0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000086e1b3
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000086e18b
- (void *)adaptee;	// IMP=0x001000000086e158
- (void)endService;	// IMP=0x001000000086e13d
- (void)beginService;	// IMP=0x001000000086e08e
- (id)init;	// IMP=0x001000000086e051

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

