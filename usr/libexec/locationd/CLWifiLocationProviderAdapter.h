//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLWifiLocationProviderAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000218076
+ (id)getSilo;	// IMP=0x001000000021785d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217844
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002177e7
- (void)requestLocationUpdateWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x0020000000217d54
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x0010000000217d4e
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000217d48
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000217a70
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000217a48
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000217a1b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002179f3
- (void *)adaptee;	// IMP=0x00100000002179c0
- (void)endService;	// IMP=0x00100000002179a5
- (void)beginService;	// IMP=0x00100000002178f6
- (id)init;	// IMP=0x00100000002178b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

