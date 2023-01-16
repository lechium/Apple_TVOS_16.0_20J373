//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/JSExport-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol VSJSSubscription <JSExport>
@property(copy, nonatomic) NSString *billingIdentifier;
@property(copy, nonatomic) NSArray *tierIdentifiers;
@property(nonatomic) long long accessLevel;
@property(copy, nonatomic) NSDate *expirationDate;
@property(copy, nonatomic) NSString *bundleId;
- (id)init;
@end

