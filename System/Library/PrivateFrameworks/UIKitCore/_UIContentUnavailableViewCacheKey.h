//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIContentUnavailableViewCacheKey : NSObject
{
    unsigned long long _style;	// 8 = 0x8
    struct CGColor *_color;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000000011a6563
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x00000000011a6518
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011a64b1
- (unsigned long long)hash;	// IMP=0x00000000011a648b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011a6480
- (id)initWithStyle:(unsigned long long)arg1 color:(struct CGColor *)arg2;	// IMP=0x00000000011a6426

@end
