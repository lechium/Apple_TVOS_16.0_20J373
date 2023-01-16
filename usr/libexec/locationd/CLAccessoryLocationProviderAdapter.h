//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLAccessoryLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000286b28
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000286b0f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000286ab2
+ (_Bool)isSupported;	// IMP=0x0010000000286f50
- (void)syncSetNavigationStateChange:(int)arg1;	// IMP=0x0020000000286de3
- (void)fetchAccessoryPASCDTransmissionStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000286d9d
- (void)fetchAccessoryBitSetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000286d72
- (void)fetchIsAccessoryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000286d3a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000286d12
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000286ce5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000286cbd
- (void *)adaptee;	// IMP=0x0010000000286c8a
- (void)endService;	// IMP=0x0010000000286c6f
- (void)beginService;	// IMP=0x0010000000286bc1
- (id)init;	// IMP=0x0010000000286b84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
