//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionSyncStoreAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000008231d6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000008231bd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000823160
- (void)resetStoredCalibrations;	// IMP=0x00200000008233e8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000008233c0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000823393
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000082336b
- (void *)adaptee;	// IMP=0x0010000000823338
- (void)endService;	// IMP=0x001000000082331d
- (void)beginService;	// IMP=0x001000000082326f
- (id)init;	// IMP=0x0010000000823232

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

