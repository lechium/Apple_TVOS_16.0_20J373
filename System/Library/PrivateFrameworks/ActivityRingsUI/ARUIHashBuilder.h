//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIHashBuilder : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
}

+ (id)builder;	// IMP=0x0060000000012dad
- (void)appendObject:(id)arg1;	// IMP=0x00000000000130a7
- (void)appendFloat4x4:(CDStruct_14d5dc5e)arg1;	// IMP=0x000000000001304f
- (void)appendFloat4: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000012fec
- (void)appendFloat2: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000012faa
- (void)appendDouble:(double)arg1;	// IMP=0x0000000000012f79
- (void)appendCGRect:(struct CGRect)arg1;	// IMP=0x0000000000012f1d
- (void)appendTimeInterval:(double)arg1;	// IMP=0x0000000000012eec
- (void)appendCGFloat:(double)arg1;	// IMP=0x0000000000012ebb
- (void)appendFloat:(float)arg1;	// IMP=0x0000000000012e8a
- (unsigned long long)hashForNSTimeInterval:(double)arg1;	// IMP=0x0000000000012e7f
- (unsigned long long)hashForDouble:(double)arg1;	// IMP=0x0000000000012e74
- (unsigned long long)hashForCGFloat:(double)arg1;	// IMP=0x0000000000012e69
- (unsigned long long)hashForFloat:(float)arg1;	// IMP=0x0000000000012e5f
- (void)appendInt:(long long)arg1;	// IMP=0x0000000000012e44
- (void)appendUnsignedInt:(unsigned long long)arg1;	// IMP=0x0000000000012e29
- (void)appendBool:(_Bool)arg1;	// IMP=0x0000000000012e0c
- (unsigned long long)hash;	// IMP=0x0000000000012e02
- (id)init;	// IMP=0x0000000000012dc6

@end

