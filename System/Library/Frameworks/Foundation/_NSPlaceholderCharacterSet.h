//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCharacterSet.h"

__attribute__((visibility("hidden")))
@interface _NSPlaceholderCharacterSet : NSCharacterSet
{
    NSCharacterSet *_original;	// 8 = 0x8
    NSCharacterSet *_invertedSet;	// 16 = 0x10
    struct {
        unsigned int _inverted:1;
        unsigned int _builtin:1;
        unsigned int _isCF:1;
        unsigned int _reserved:29;
    } _flags;	// 24 = 0x18
}

- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x0000000000457da1
- (id)replacementObjectForKeyedArchiver:(id)arg1;	// IMP=0x0000000000457d5d
- (void)dealloc;	// IMP=0x0000000000457cd5
- (_Bool)_tryRetain;	// IMP=0x0000000000457c74
- (_Bool)_isDeallocating;	// IMP=0x0000000000457c11
- (oneway void)release;	// IMP=0x0000000000457bb2
- (unsigned long long)retainCount;	// IMP=0x0000000000457b4c
- (id)retain;	// IMP=0x0000000000457aed
- (id)autorelease;	// IMP=0x0000000000457a8e
- (id)invertedSet;	// IMP=0x0000000000457a5e
- (_Bool)isEmpty;	// IMP=0x00000000004579e7
- (id)bitmapRepresentation;	// IMP=0x0000000000457995
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000457904
- (_Bool)hasMemberInPlane:(unsigned char)arg1;	// IMP=0x00000000004578b0
- (_Bool)isSupersetOfSet:(id)arg1;	// IMP=0x000000000045782d
- (_Bool)longCharacterIsMember:(unsigned int)arg1;	// IMP=0x00000000004577f8
- (_Bool)characterIsMember:(unsigned short)arg1;	// IMP=0x00000000004577e6
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000457777
- (void)_expandInverted;	// IMP=0x00000000004576f2
- (struct __CFCharacterSet *)_expandedCFCharacterSet;	// IMP=0x00000000004576d0
- (id)initWithSet:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000004575b0

@end
