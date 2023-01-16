//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXAssetController, AXDispatchTimer, NSString;

@interface AXMigrateResourcesSimpleTask
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    AXAssetController *_assetController;	// 16 = 0x10
    long long _attemptCount;	// 24 = 0x18
    AXDispatchTimer *_timer;	// 32 = 0x20
}

+ (id)triggers;	// IMP=0x0020000000003b40
+ (id)taskGroupIdentifier;	// IMP=0x0010000000003b20
- (void).cxx_destruct;	// IMP=0x0020000000005da0
@property(retain, nonatomic) AXDispatchTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(retain, nonatomic) AXAssetController *assetController; // @synthesize assetController=_assetController;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_retryAndBackOff;	// IMP=0x0010000000005330
- (void)_migrateNashvilleToMaui;	// IMP=0x0010000000004270
- (void)_callCompletion:(unsigned long long)arg1;	// IMP=0x00100000000041d0
- (void)run:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003b60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

