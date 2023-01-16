//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObjectDecoder : NSCoder
{
    struct RetainPtr<_WKRemoteObjectInterface> _interface;	// 8 = 0x8
    const void *_rootDictionary;	// 16 = 0x10
    const void *_currentDictionary;	// 24 = 0x18
    SEL _replyToSelector;	// 32 = 0x20
    const void *_objectStream;	// 40 = 0x28
    unsigned long long _objectStreamPosition;	// 48 = 0x30
    const void *_allowedClasses;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x000000000011f1fc
- (void).cxx_destruct;	// IMP=0x000000000011f1d5
- (id)allowedClasses;	// IMP=0x000000000011f0da
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000011ede6
- (_Bool)requiresSecureCoding;	// IMP=0x000000000011edde
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;	// IMP=0x000000000011ece8
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x000000000011ec48
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x000000000011eb49
- (long long)decodeIntegerForKey:(id)arg1;	// IMP=0x000000000011eb37
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x000000000011ea99
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x000000000011e9fc
- (int)decodeIntForKey:(id)arg1;	// IMP=0x000000000011e900
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x000000000011e801
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x000000000011e7ea
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x000000000011e6e6
- (_Bool)allowsKeyedCoding;	// IMP=0x000000000011e6de
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;	// IMP=0x000000000011e153
- (id)initWithInterface:(id)arg1 rootObjectDictionary:(const void *)arg2 replyToSelector:(SEL)arg3;	// IMP=0x000000000011dfe9

@end
