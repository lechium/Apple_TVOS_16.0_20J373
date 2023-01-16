//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCPDatabaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_databases;	// 16 = 0x10
}

+ (_Bool)existsDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x004000000006b05c
+ (id)sharedDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x001000000006afdd
+ (id)sharedDatabaseManager;	// IMP=0x001000000006ac95
- (void).cxx_destruct;	// IMP=0x002000000006b0f6
- (id)sharedDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x001000000006ad22
- (id)init;	// IMP=0x001000000006ac0e

@end
