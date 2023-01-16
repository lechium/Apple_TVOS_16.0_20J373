//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICMusicSubscriptionStatusCacheKey : NSObject
{
    NSNumber *_DSID;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_storefrontIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001247c0
@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (id)stringRepresentation;	// IMP=0x0000000000124702
- (id)initWithStringRepresentation:(id)arg1;	// IMP=0x0000000000124647
- (id)dictionaryRepresentationIncludingDSID:(_Bool)arg1;	// IMP=0x000000000012450a
- (id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(_Bool)arg2;	// IMP=0x0000000000124325
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000124030
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000123f5c
- (unsigned long long)hash;	// IMP=0x000000000012249f
- (id)description;	// IMP=0x00000000001223a8
- (id)init;	// IMP=0x000000000012232e

@end

