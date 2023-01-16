//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface MPCPrivateListeningStateSource : NSObject
{
    NSNumber *_overrideValue;	// 8 = 0x8
    NSNumber *_currentValue;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000013d13c
+ (id)sourceWithUserIdentity:(id)arg1;	// IMP=0x001000000013d0cf
+ (id)staticSourceWithValue:(id)arg1;	// IMP=0x001000000013d082
+ (id)localDeviceSource;	// IMP=0x001000000013d052
- (void).cxx_destruct;	// IMP=0x000000000013d02a
@property(readonly, copy, nonatomic) NSNumber *currentValue; // @synthesize currentValue=_currentValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013d015
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013d003
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013cffd
@property(readonly, nonatomic) long long sourceType;
@property(copy, nonatomic) NSNumber *overrideValue; // @synthesize overrideValue=_overrideValue;
- (id)_init;	// IMP=0x000000000013ce6e

@end

