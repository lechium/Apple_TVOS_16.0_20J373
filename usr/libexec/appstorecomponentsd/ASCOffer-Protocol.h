//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class ASCAdamID, NSArray, NSDictionary, NSNumber;

@protocol ASCOffer <NSObject, NSCopying>
- (id)offerWithMetrics:(NSArray *)arg1;
@property(nonatomic, readonly) NSArray *metrics;
@property(nonatomic, readonly) NSNumber *ageRating;
@property(nonatomic, readonly) long long flags;
@property(nonatomic, readonly) NSDictionary *subtitles;
@property(nonatomic, readonly) NSDictionary *titles;
@property(nonatomic, readonly) ASCAdamID *id;
@end
