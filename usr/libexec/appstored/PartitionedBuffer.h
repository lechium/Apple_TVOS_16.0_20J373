//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PartitionedBuffer : NSObject
{
    char *_allocationBase;	// 8 = 0x8
    unsigned long long _allocationSize;	// 16 = 0x10
    char *_bytes;	// 24 = 0x18
    unsigned long long _used;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x0020000000056584

@end

