//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPersistentHistoryTransaction;

__attribute__((visibility("hidden")))
@interface _PFBatchHistoryFaultingArray
{
    NSPersistentHistoryTransaction *_transaction;	// 72 = 0x48
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0060000000069904
- (Class)classForCoder;	// IMP=0x00000000000698f3
- (void)_setTransaction:(id)arg1;	// IMP=0x00000000000698b8
- (id)transaction;	// IMP=0x000000000006987f
- (id)initWithPFBatchFaultingArray:(id)arg1;	// IMP=0x0000000000069849

@end

