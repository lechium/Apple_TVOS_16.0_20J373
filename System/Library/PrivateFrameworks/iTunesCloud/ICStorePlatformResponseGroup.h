//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICStorePlatformResponseGroup : NSObject
{
    NSArray *_childResponses;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015e671
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015e666
@property(readonly, nonatomic) NSArray *performanceMetrics;
@property(readonly, copy, nonatomic) id rawResponse;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;
- (id)itemForIdentifier:(id)arg1;	// IMP=0x000000000015e165
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015df0e
@property(readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property(readonly, copy, nonatomic) NSArray *allItems;
@property(readonly, copy, nonatomic) NSNumber *accountIdentifier;
- (id)initWithResponses:(id)arg1;	// IMP=0x000000000015db90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
