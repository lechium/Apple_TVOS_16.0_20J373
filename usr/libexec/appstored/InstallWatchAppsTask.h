//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, RequestThrottle;

@interface InstallWatchAppsTask
{
    NSArray *_purchaseInfo;	// 8 = 0x8
    RequestThrottle *_requestThrottle;	// 16 = 0x10
    NSArray *_processedExternalIDs;	// 24 = 0x18
}

+ (id)_companionBundleIDForItemID:(id)arg1 requestToken:(id)arg2;	// IMP=0x00400000001504dd
+ (id)_appAlreadyRequestedForPurchaseInfo:(id)arg1;	// IMP=0x0010000000150268
+ (_Bool)_appAlreadyInstalledForPurchaseInfo:(id)arg1 hasVersionOfBundleIDInstalled:(_Bool *)arg2;	// IMP=0x001000000014fb79
- (void).cxx_destruct;	// IMP=0x00200000001504e5
- (void)main;	// IMP=0x001000000014e9e5
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithPurchaseInfo:(id)arg1 requestThrottle:(id)arg2;	// IMP=0x001000000014e8e2

@end

