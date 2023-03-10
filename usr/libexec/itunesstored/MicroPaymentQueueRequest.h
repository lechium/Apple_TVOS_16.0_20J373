//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSNumber, StoreKitClientIdentity;

@interface MicroPaymentQueueRequest : NSObject
{
    StoreKitClientIdentity *_clientIdentity;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSNumber *_rangeEndIdentifier;	// 24 = 0x18
    NSNumber *_rangeStartIdentifier;	// 32 = 0x20
    NSNumber *_userIdentifier;	// 40 = 0x28
}

- (id)_ntsQueryParameters:(id *)arg1;	// IMP=0x002000000007f9ae
- (id)_copyApplicationIdentity:(id *)arg1;	// IMP=0x001000000007f763
- (id)description;	// IMP=0x001000000007f6bb
@property(readonly) long long URLBagType;
@property(readonly) _Bool usesSoftwareMap;
@property(retain) NSNumber *userIdentifier;
@property(retain) NSNumber *rangeStartIdentifier;
@property(retain) NSNumber *rangeEndIdentifier;
@property(copy) StoreKitClientIdentity *clientIdentity;
- (id)newStoreURLOperation:(id *)arg1;	// IMP=0x001000000007f22d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007f121
- (void)dealloc;	// IMP=0x001000000007f0c2
- (id)init;	// IMP=0x001000000007f076

@end

