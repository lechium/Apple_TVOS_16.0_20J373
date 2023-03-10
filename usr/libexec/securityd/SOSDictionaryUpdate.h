//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SOSDictionaryUpdate : NSObject
{
    char *currentHashBuf;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001feb40
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reset;	// IMP=0x00100000001feaac
- (_Bool)hasChanged:(struct __CFDictionary *)arg1;	// IMP=0x00100000001fe9cc
- (void)onqueueFreeHashBuff;	// IMP=0x00100000001fe97e
- (void)dealloc;	// IMP=0x00100000001fe940
- (id)init;	// IMP=0x00100000001fe8e0

@end

