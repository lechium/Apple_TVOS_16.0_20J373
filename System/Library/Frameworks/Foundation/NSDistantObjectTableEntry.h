//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConnection, NSDistantObject;

__attribute__((visibility("hidden")))
@interface NSDistantObjectTableEntry : NSObject
{
    NSConnection *_conn;	// 8 = 0x8
    NSDistantObject *_proxy;	// 16 = 0x10
    id _localObject;	// 24 = 0x18
    unsigned int _wireID;	// 32 = 0x20
}

- (id)description;	// IMP=0x000000000047f621
- (void)dealloc;	// IMP=0x000000000047f5b4

@end

