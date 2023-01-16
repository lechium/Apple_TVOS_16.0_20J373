//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InAppPurchaseIntentDatabaseStore, NSString;

@interface InAppPurchaseIntentManager : NSObject
{
    NSString *_bundleIdForCurrentInstallSheet;	// 8 = 0x8
    InAppPurchaseIntentDatabaseStore *_databaseStore;	// 16 = 0x10
}

+ (id)manager;	// IMP=0x00400000000047e2
- (void).cxx_destruct;	// IMP=0x0020000000004e10
- (void)resetPurchaseIntentTimestampsForBundleID:(id)arg1;	// IMP=0x0010000000004d38
- (id)purchaseIntentsForBundleID:(id)arg1 afterDate:(id)arg2;	// IMP=0x0010000000004b63
- (void)purchaseIntentAppInstallSheetOpenForBundleID:(id)arg1;	// IMP=0x0010000000004b09
- (void)postPurchaseIntentNotificationIfNeededForBundleIDs:(id)arg1;	// IMP=0x0010000000004b03
- (void)clearPurchaseIntentsForBundleID:(id)arg1;	// IMP=0x0010000000004a2b
- (void)addPurchaseIntent:(id)arg1;	// IMP=0x0010000000004953
- (id)databaseStore;	// IMP=0x0010000000004867

@end

