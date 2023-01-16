//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPrivateListeningStateSource, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface MPCPlaybackDelegationProperties : NSObject
{
    NSString *_deviceGUID;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    MPCPrivateListeningStateSource *_privateListeningStateSource;	// 24 = 0x18
    long long _systemReleaseType;	// 32 = 0x20
    NSString *_requestUserAgent;	// 40 = 0x28
    unsigned long long _storeAccountID;	// 48 = 0x30
    NSTimeZone *_timeZone;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000952de
- (void).cxx_destruct;	// IMP=0x0000000000095100
@property(readonly, copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *requestUserAgent; // @synthesize requestUserAgent=_requestUserAgent;
@property(readonly, nonatomic) long long systemReleaseType; // @synthesize systemReleaseType=_systemReleaseType;
@property(readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @synthesize privateListeningStateSource=_privateListeningStateSource;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x0000000000094ff9
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000094fc6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000094eea
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000094d46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000094d3b
- (id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2 privateListeningStateSource:(id)arg3;	// IMP=0x0000000000094c7b

@end

