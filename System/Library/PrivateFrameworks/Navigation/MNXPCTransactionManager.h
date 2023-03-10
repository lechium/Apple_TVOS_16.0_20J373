//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MNXPCTransactionManager : NSObject
{
    NSObject<OS_os_transaction> *_xpcTransaction;	// 8 = 0x8
    NSHashTable *_requesters;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0060000000080dce
- (void).cxx_destruct;	// IMP=0x00000000000814ca
- (void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2;	// IMP=0x00000000000810fe
- (void)addHighMemoryThresholdRequest:(id)arg1;	// IMP=0x0000000000080e23

@end

