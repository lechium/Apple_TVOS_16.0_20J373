//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _PFAbstractString : NSString
{
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0080000000076e0d
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000076de6
+ (id)alloc;	// IMP=0x0080000000076dda
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0080000000076dd2
- (id)description;	// IMP=0x0000000000076efe
- (unsigned long long)smallestEncoding;	// IMP=0x0000000000076ef3
- (unsigned long long)fastestEncoding;	// IMP=0x0000000000076ee8
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x0000000000076e96
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000076e8e
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x0000000000076e7c
- (const char *)cString;	// IMP=0x0000000000076e6a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076e1e
- (Class)classForCoder;	// IMP=0x0000000000076dfc
- (void)dealloc;	// IMP=0x0000000000076df2

@end

