//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSRemoteURLConnectionDaemon : NSObject
{
    NSMutableDictionary *_uniqueIDToURLLoaderMap;	// 8 = 0x8
    void *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000014ea
- (void).cxx_destruct;	// IMP=0x00200000000022de
- (void)_pidSuspended:(int)arg1;	// IMP=0x00100000000021f4
- (id)urlLoaderForUniqueID:(id)arg1;	// IMP=0x0010000000002190
- (void)_terminateAfterDelayIfIdle;	// IMP=0x001000000000200c
- (void)removeURLLoadersForUniqueIDs:(id)arg1;	// IMP=0x0010000000001d9f
- (void)removeURLLoaderForUniqueID:(id)arg1;	// IMP=0x0010000000001d20
- (void)addURLLoader:(id)arg1;	// IMP=0x0010000000001ab7
- (void)logState;	// IMP=0x0010000000001ab1
- (void)shutdown;	// IMP=0x00100000000019e2
- (void)_terminate;	// IMP=0x0010000000001996
- (void)dealloc;	// IMP=0x0010000000001944
- (id)init;	// IMP=0x001000000000153f

@end

