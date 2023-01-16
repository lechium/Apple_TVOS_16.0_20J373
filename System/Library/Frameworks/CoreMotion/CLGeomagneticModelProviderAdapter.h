//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGeomagneticModelProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000001a299c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a2983
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001a2926
+ (_Bool)isSupported;	// IMP=0x001000000019d884
- (void)fetchGeomagneticModelData:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a2d81
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a2d59
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a2d2c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a2d04
- (void *)adaptee;	// IMP=0x00000000001a2cd1
- (void)endService;	// IMP=0x00000000001a2cb6
- (void)beginService;	// IMP=0x00000000001a2a35
- (id)init;	// IMP=0x00000000001a29f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
