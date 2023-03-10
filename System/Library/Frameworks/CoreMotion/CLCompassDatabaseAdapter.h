//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCompassDatabaseAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x001000000019968b
+ (id)getSilo;	// IMP=0x00100000001992a6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000019928d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000199230
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2 bias:(CDStruct_03942939 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;	// IMP=0x0000000000199800
- (void)getBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2;	// IMP=0x00000000001997b3
- (int)syncgetPendingSetBiasCount;	// IMP=0x0000000000199764
- (void)setBias:(CDStruct_03942939)arg1 withMagneticField:(CDStruct_03942939)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;	// IMP=0x00000000001996f1
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001996b8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000199663
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000199636
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000019960e
- (void *)adaptee;	// IMP=0x00000000001995db
- (void)endService;	// IMP=0x00000000001995c0
- (void)beginService;	// IMP=0x000000000019933f
- (id)init;	// IMP=0x0000000000199302

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

