//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NSJSONRoundTrippingNumber : NSObject
{
    NSNumber *_number;	// 8 = 0x8
    NSString *_representation;	// 16 = 0x10
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000005d3663
+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00100000005d35e2
+ (_Bool)isSubclassOfClass:(Class)arg1;	// IMP=0x00100000005d3516
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005d3288
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000005d3692
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000005d367c
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000005d363c
- (_Bool)isNSNumber__;	// IMP=0x00000000005d35da
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000005d3578
- (Class)superclass;	// IMP=0x00000000005d3505
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005d3471
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005d3298
- (_Bool)_allowsDirectEncoding;	// IMP=0x00000000005d3290
- (unsigned long long)hash;	// IMP=0x00000000005d3272
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x00000000005d3226
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005d31d9
- (id)stringValue;	// IMP=0x00000000005d31bb
- (void)dealloc;	// IMP=0x00000000005d314e
- (id)initWithNumber:(id)arg1 representation:(id)arg2;	// IMP=0x00000000005d30c0

@end

