//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface CLFallNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000414d3c
+ (MISSING_TYPE *)getSilo;	// IMP=0x0010000000414b2a
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000414b11
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000414ab4
- (void)setHgalCaptureMode:(unsigned char)arg1;	// IMP=0x0020000000414e61
- (void)simulateEvent:(unsigned long long)arg1;	// IMP=0x0010000000414d44
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000414d14
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000414ce7
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000414cbf
- (void *)adaptee;	// IMP=0x0010000000414c8c
- (void)endService;	// IMP=0x0010000000414c71
- (void)beginService;	// IMP=0x0010000000414bc3
- (id)init;	// IMP=0x0010000000414b86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

