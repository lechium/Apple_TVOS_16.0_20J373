//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableData.h"

__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData
{
    unsigned long long _cfinfoa;	// 8 = 0x8
    long long _length;	// 16 = 0x10
    long long _capacity;	// 24 = 0x18
    struct __CFAllocator *_bytesDeallocator;	// 32 = 0x20
    char *_bytes;	// 40 = 0x28
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000005e35c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000005e344
- (Class)classForCoder;	// IMP=0x000000000005e40e
- (_Bool)_providesConcreteBacking;	// IMP=0x000000000005e40b
- (void)setLength:(unsigned long long)arg1;	// IMP=0x000000000005e403
- (void *)mutableBytes;	// IMP=0x000000000005e3fe
- (const void *)bytes;	// IMP=0x000000000005e3f9
- (unsigned long long)length;	// IMP=0x000000000005e3f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005e35f
- (unsigned long long)retainCount;	// IMP=0x000000000005e33f
- (_Bool)_isDeallocating;	// IMP=0x000000000005e32f
- (_Bool)_tryRetain;	// IMP=0x000000000005e31e
- (oneway void)release;	// IMP=0x000000000005e319
- (id)retain;	// IMP=0x000000000005e314
- (unsigned long long)hash;	// IMP=0x000000000005e30f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e2ec

@end

