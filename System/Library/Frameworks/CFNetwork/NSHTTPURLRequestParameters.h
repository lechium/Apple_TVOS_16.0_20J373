//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface NSHTTPURLRequestParameters : NSObject
{
    NSString *method;	// 8 = 0x8
    NSMutableDictionary *fields;	// 16 = 0x10
    NSArray *extraCookies;	// 24 = 0x18
    NSData *data;	// 32 = 0x20
    unsigned long long pageNotFoundCacheLifetime;	// 40 = 0x28
    _Bool shouldHandleCookies;	// 48 = 0x30
    _Bool _pad1;	// 49 = 0x31
    _Bool _pad2;	// 50 = 0x32
    _Bool _pad3;	// 51 = 0x33
}

- (void)dealloc;	// IMP=0x000000000017a0e1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017a0db
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000179f80
- (id)init;	// IMP=0x0000000000179f48

@end

