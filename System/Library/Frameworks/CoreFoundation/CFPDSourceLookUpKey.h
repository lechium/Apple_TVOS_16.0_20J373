//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDSourceLookUpKey : NSObject
{
    struct __CFString *uncanonicalizedPath;	// 8 = 0x8
    struct __CFString *cloudPath;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000182129
- (unsigned long long)hash;	// IMP=0x0000000000182124
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000182111

@end
