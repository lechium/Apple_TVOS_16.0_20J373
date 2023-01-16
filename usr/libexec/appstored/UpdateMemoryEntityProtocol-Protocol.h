//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, PurchaseInfo;

@protocol UpdateMemoryEntityProtocol <NSObject>
- (PurchaseInfo *)purchaseInfoForUpdateUserInitiated:(_Bool)arg1;
@property(nonatomic, readonly) long long softwarePlatform;
@property(nonatomic, readonly) long long parentalControlsRank;
@property(nonatomic, readonly) NSString *parentalControlsName;
@property(nonatomic, readonly) NSNumber *itemIdentifier;
@property(nonatomic) long long databaseID;
@property(nonatomic, readonly) NSString *buyParams;
@property(nonatomic, readonly) NSString *bundleID;
@end

