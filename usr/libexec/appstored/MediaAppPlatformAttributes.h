//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MediaAppOffer, NSArray, NSDictionary, NSString;

@interface MediaAppPlatformAttributes : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSArray *_offers;	// 16 = 0x10
    long long _externalVersionID;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    long long _itemID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000037b56
@property(readonly, nonatomic) long long itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) long long externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(readonly, nonatomic) MediaAppOffer *freeOffer;
@property(readonly, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(readonly, nonatomic, getter=is32BitOnly) _Bool is32BitOnly;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000376e7

@end

