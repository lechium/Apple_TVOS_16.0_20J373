//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol HMFObject <NSObject>
+ (NSString *)shortDescription;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

@optional
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *propertyDescription;
@end

