//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCorrectiveCompensatedLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000359271
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000359258
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003591fb
- (void)fetchLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0020000000359484
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000035945c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000035942f
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000359407
- (void *)adaptee;	// IMP=0x00100000003593d4
- (void)endService;	// IMP=0x00100000003593b9
- (void)beginService;	// IMP=0x001000000035930a
- (id)init;	// IMP=0x00100000003592cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

