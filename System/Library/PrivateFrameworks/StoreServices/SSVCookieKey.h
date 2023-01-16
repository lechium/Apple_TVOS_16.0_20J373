//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SSVCookieKey : NSObject
{
    NSNumber *_identifier;	// 8 = 0x8
    long long _scope;	// 16 = 0x10
}

+ (id)keyWithIdentifier:(id)arg1 scope:(long long)arg2;	// IMP=0x00100000000d659d
- (void).cxx_destruct;	// IMP=0x00000000000d6704
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d6612

@end
