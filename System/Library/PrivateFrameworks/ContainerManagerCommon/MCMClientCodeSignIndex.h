//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MCMClientCodeSignIndex : NSObject
{
    NSData *_cdhash;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001b3a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b351
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b2c4
- (_Bool)isEqualToClientCodeSignIndex:(id)arg1;	// IMP=0x000000000001b23c
- (unsigned long long)hash;	// IMP=0x000000000001b1d2
- (id)initWithCDHash:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000001b119

@end

