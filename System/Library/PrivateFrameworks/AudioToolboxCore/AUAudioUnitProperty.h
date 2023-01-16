//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AUAudioUnitProperty : NSObject
{
    NSString *_key;	// 8 = 0x8
    unsigned int _v2propID;	// 16 = 0x10
    unsigned int _scope;	// 20 = 0x14
    unsigned int _element;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000063e34
+ (id)propertyWithKey:(id)arg1 v2propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;	// IMP=0x0010000000063db3
+ (id)propertyWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;	// IMP=0x0010000000063d41
+ (id)propertyWithKey:(id)arg1;	// IMP=0x0010000000063ce3
- (void).cxx_destruct;	// IMP=0x0000000000063cd3
- (void)dealloc;	// IMP=0x0000000000063ca4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000063b67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000063ac0
- (id)initWithKey:(id)arg1 v2propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;	// IMP=0x0000000000063a1c
- (id)initWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;	// IMP=0x0000000000063980
- (id)initWithKey:(id)arg1;	// IMP=0x00000000000638f1

@end

