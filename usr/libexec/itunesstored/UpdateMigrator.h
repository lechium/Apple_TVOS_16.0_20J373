//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISLoadURLBagOperation, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UpdateMigrator : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned long long _updateType;	// 16 = 0x10
    ISLoadURLBagOperation *_loadURLBagOperation;	// 24 = 0x18
    NSMutableArray *_migrations;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000000af722
- (void).cxx_destruct;	// IMP=0x00200000000b1023
- (void)_queueMigration:(id)arg1;	// IMP=0x00100000000b0a57
- (void)_performMigration;	// IMP=0x00100000000b08b1
- (void)_loadBagAndPerformMigration;	// IMP=0x00100000000b03cc
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x00100000000b0181
- (void)restoreDemotedBundleIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x00100000000afeff
- (_Bool)performMigration:(unsigned long long)arg1;	// IMP=0x00100000000af8e5
- (void)destroyInstance;	// IMP=0x00100000000af8b2
- (void)dealloc;	// IMP=0x00100000000af7ff
- (id)init;	// IMP=0x00100000000af7a7

@end

