//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIModernSwitchVisualElementCacheKey : NSObject
{
    unsigned long long _mask;	// 8 = 0x8
    struct CGColor *_color;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000554fc8
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000000554f7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000554f16
- (unsigned long long)hash;	// IMP=0x0000000000554ef0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000554ee5
- (id)initWithMask:(unsigned long long)arg1 color:(struct CGColor *)arg2;	// IMP=0x0000000000554e8b

@end

