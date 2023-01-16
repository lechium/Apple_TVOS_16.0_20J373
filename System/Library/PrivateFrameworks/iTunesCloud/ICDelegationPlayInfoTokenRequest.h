//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface ICDelegationPlayInfoTokenRequest : NSObject
{
    NSNumber *_DSID;	// 8 = 0x8
    NSData *_cloudCredentialsTokenData;	// 16 = 0x10
    NSData *_SICData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001583c0
@property(copy, nonatomic) NSData *SICData; // @synthesize SICData=_SICData;
@property(copy, nonatomic) NSData *cloudCredentialsTokenData; // @synthesize cloudCredentialsTokenData=_cloudCredentialsTokenData;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001582c3
@property(readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;
- (id)initWithDSID:(id)arg1 SICData:(id)arg2;	// IMP=0x0000000000158175

@end

