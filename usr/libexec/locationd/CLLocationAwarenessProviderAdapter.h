//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationAwarenessProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0040000000825d8d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000825d74
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000825d17
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000825f78
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000825f4b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000825f23
- (void *)adaptee;	// IMP=0x0010000000825ef0
- (void)endService;	// IMP=0x0010000000825ed5
- (void)beginService;	// IMP=0x0010000000825e26
- (id)init;	// IMP=0x0010000000825de9
- (void)onScenarioTrigger:(id)arg1;	// IMP=0x0010000000826167

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

