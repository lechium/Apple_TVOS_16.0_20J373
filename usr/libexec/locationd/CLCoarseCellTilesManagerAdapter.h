//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCoarseCellTilesManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000005b95ea
+ (id)getSilo;	// IMP=0x00100000005b93d8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b93bf
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005b9362
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x00200000005b96a4
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000005b95c2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b9595
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000005b956d
- (void *)adaptee;	// IMP=0x00100000005b953a
- (void)endService;	// IMP=0x00100000005b951f
- (void)beginService;	// IMP=0x00100000005b9471
- (id)init;	// IMP=0x00100000005b9434

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

